<<<<<<< Updated upstream
from pytube import YouTube, Playlist
import requests
from tqdm import tqdm
from colorama import Fore, Style
import json

def download(link, path, playlist):
    r = requests.get(link)
    if playlist and "list=" in link and "Video unavailable" not in r.text:
        playlist = Playlist(link)
        print(Fore.GREEN + f"Количество видео в плейлисте: {len(playlist.video_urls)}" + Style.RESET_ALL)
        for video in tqdm(playlist.videos, desc="Скачивание видео", colour="blue"):
            video.streams.first().download(path)
            tqdm.write(Fore.CYAN + f"Скачано видео: {video.title}" + Style.RESET_ALL)
    elif not playlist and "watch?v=" in link and "Video unavailable" not in r.text:
        video = YouTube(link)
        print(Fore.GREEN + f"Название видео: {video.title}" + Style.RESET_ALL)
        video.streams.first().download(path)
        print(Fore.CYAN + f"Скачано видео: {video.title}" + Style.RESET_ALL)
    else:
        print(Fore.RED + "Неверное значение в конфиг файле или видео недоступно" + Style.RESET_ALL)

if __name__ == "__main__":
    with open("config.txt", "r") as f:
        config = json.load(f)
        playlist = config["playlist"]
    with open("download.txt", "r") as f:
        links = f.readlines()
    path = input("Введите путь к папке, куда будут скачиваться видео: ")
    for link in links:
        download(link, path, playlist)
    print(Fore.GREEN + "Скачивание завершено!" + Style.RESET_ALL)
=======
from tkinter import *
from tkinter import filedialog
import download
import requests
import sys
import threading

class TextHandler(object):
    def __init__(self, widget):
        self.widget = widget

    def write(self, s):
        self.widget.insert(END, s)
        self.widget.see(END)

    def flush(self):
        pass

window = Tk()
window.title("YTDL by meanwhile")
window.geometry("1200x600")
window.resizable(0, 0)  # делает окно неизменяемым

# Загружаем изображение
bg_image = PhotoImage(file="back.png")
bg_label = Label(window, image=bg_image)
bg_label.place(x=0, y=0, relwidth=1, relheight=1)

option = StringVar()
option.set("video")

# Создаем фреймы для текстового поля, кнопок и консоли
text_frame = Frame(window)
text_frame.pack(side=TOP, padx=10, pady=10)

button_frame = Frame(window)
button_frame.pack(side=TOP, padx=10, pady=10)

console_frame = Frame(window)
console_frame.pack(side=BOTTOM, padx=10, pady=10)

# Добавляем полосы прокрутки к текстовому полю
text_widget = Text(text_frame, width=80, height=20, bg="white", fg="black")  # Уменьшаем размер текстового поля
scrollbar = Scrollbar(text_frame)
scrollbar.pack(side=RIGHT, fill=Y)
text_widget.pack(side=LEFT, fill=Y)
scrollbar.config(command=text_widget.yview)
text_widget.config(yscrollcommand=scrollbar.set)

path = None  # инициализируем путь как None

def get_links():
    if not path:
        console.insert(END, "Пожалуйста, выберите папку для скачивания.\n", "red")
        return
    console.insert(END, "Папка для скачивания выбрана.\n", "green")
    text = text_widget.get("1.0", "end")
    links = text.splitlines()
    console.insert(END, f"Список ссылок принят\n", "green")
    for link in links:
        r = requests.get(link)
        if "list=" in link and "watch?v=" in link and "Video unavailable" not in r.text:
            playlist = False
            run_download(link, path, playlist)
        elif "list=" in link and "Video unavailable" not in r.text:
            playlist = True
            run_download(link, path, playlist)
        elif "watch?v=" in link and "Video unavailable" not in r.text:
            playlist = False
            run_download(link, path, playlist)
        else:
            console.insert(END, "Ссылка не является видео или плейлистом, или видео недоступно\n", "red")
            continue

def choose_folder():
    folder = filedialog.askdirectory()
    console.insert(END, f"Выбрана папка: {folder}\n", "green")
    global path
    path = folder

# Скругляем кнопки
button = Button(button_frame, text="Обзор", command=choose_folder, font=("calibri", 20, "bold"), fg="blue", relief=RIDGE, bd=4)
button.pack(side=LEFT, padx=5)  # Располагаем кнопки рядом друг с другом

download_button = Button(button_frame, text="Скачать", command=get_links, font=("calibri", 20, "bold"), fg="blue", relief=RIDGE, bd=4)
download_button.pack(side=LEFT, padx=5)  # Располагаем кнопки рядом друг с другом

# Добавляем консоль для вывода информации
console = Text(console_frame, width=100, height=10, bg="lightgray", fg="black")
scrollbar_console = Scrollbar(console_frame)
scrollbar_console.pack(side=RIGHT, fill=Y)
console.pack(side=LEFT, fill=Y)
scrollbar_console.config(command=console.yview)
console.config(yscrollcommand=scrollbar_console.set)
sys.stdout = TextHandler(console)

console.tag_config("red", foreground="red")
console.tag_config("green", foreground="green")
console.tag_config("blue", foreground="blue")

console.insert(END, "Пожалуйста, выберите папку для скачивания.\n", "red")

def run_download(link, path, playlist):
    download_thread = threading.Thread(target=download.run_download, args=(link, path, playlist))
    download_thread.start()
    window.after(100, check_download, download_thread)

def check_download(download_thread):
    if download_thread.is_alive():
        window.after(100, check_download, download_thread)

window.mainloop()
>>>>>>> Stashed changes
