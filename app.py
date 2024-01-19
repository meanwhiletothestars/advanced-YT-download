from tkinter import *
from tkinter import filedialog
from tkinter.ttk import *
import download
import requests

window = Tk()
window.title("Скачивание видео или плейлиста")
window.geometry("1200x800")
window.resizable(0, 0)  # делает окно неизменяемым

style = Style()
style.configure("TButton", font=("calibri", 10, "bold"), foreground="blue")

option = StringVar()
option.set("video")

# Создаем фреймы для текстового поля и кнопок
text_frame = Frame(window)
text_frame.pack(side=LEFT, padx=10, pady=10)

button_frame = Frame(window)
button_frame.pack(side=RIGHT, padx=10, pady=10)

# Добавляем полосы прокрутки к текстовому полю
text_widget = Text(text_frame, width=100, height=30)
scrollbar = Scrollbar(text_frame)
scrollbar.pack(side=RIGHT, fill=Y)
text_widget.pack(side=LEFT, fill=Y)
scrollbar.config(command=text_widget.yview)
text_widget.config(yscrollcommand=scrollbar.set)

path_label = Label(button_frame, text="Пожалуйста, выберите папку для скачивания.", foreground="red")  # Исправлено здесь
path_label.pack()

path = None  # инициализируем путь как None

def get_links():
    if not path:
        path_label.config(text="Пожалуйста, выберите папку для скачивания.", foreground="red")  # Исправлено здесь
        return
    path_label.config(text="Папка для скачивания выбрана.", foreground="green")  # Исправлено здесь
    text = text_widget.get("1.0", "end")
    links = text.splitlines()
    print(f"Список ссылок: {links}")
    for link in links:
        r = requests.get(link)
        if "list=" in link and "watch?v=" in link and "Video unavailable" not in r.text:
            playlist = False
        elif "list=" in link and "Video unavailable" not in r.text:
            playlist = True
        elif "watch?v=" in link and "Video unavailable" not in r.text:
            playlist = False
        else:
            print(Fore.RED + "Ссылка не является видео или плейлистом, или видео недоступно" + Style.RESET_ALL)
            continue
        run_download(link, path, playlist)

def choose_folder():
    folder = filedialog.askdirectory()
    print(f"Выбрана папка: {folder}")
    global path
    path = folder

button = Button(button_frame, text="Обзор", command=choose_folder)
button.pack()

download_button = Button(button_frame, text="Скачать", command=get_links)
download_button.pack()

progress = Progressbar(button_frame, orient="horizontal", length=300, mode="determinate")
progress.pack()

def run_download(link, path, playlist):
    progress["value"] = 0
    progress.start(10)
    download.run_download(link, path, playlist)
    progress.stop()
    progress["value"] = 100

window.mainloop()
