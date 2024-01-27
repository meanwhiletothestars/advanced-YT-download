import customtkinter as ctk
import download
import requests
import sys
import threading
from tkinter import filedialog, END, HORIZONTAL

class TextHandler(object):
    def __init__(self, widget):
        self.widget = widget

    def write(self, s):
        self.widget.insert(END, s, "blue")
        self.widget.see(END)

    def flush(self):
        pass

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
def on_entry_click(event):
    if text_widget.get("1.0", "end-1c") == 'https://www.youtube.com/watch?v=\nhttps://www.youtube.com/playlist?list=':
        text_widget.delete("1.0", "end")
        text_widget.unbind('<FocusIn>', on_focusin_id)

def choose_folder():
    folder = filedialog.askdirectory()
    console.insert(END, f"Выбрана папка: {folder}\n", "green")
    global path
    path = folder

def mpconvert():
    download.convert_mp4_to_mp3(path)


def run_download(link, path, playlist):
    download_thread = threading.Thread(target=download.run_download, args=(link, path, playlist))
    download_thread.start()
    window.after(100, check_download, download_thread)

def check_download(download_thread):
    if download_thread.is_alive():
        window.after(100, check_download, download_thread)

window = ctk.CTk()
window.geometry("800x400")
window.title("YTDL by meanwhile")
    
ctk.set_appearance_mode("dark") 
ctk.set_default_color_theme("green")  

path = ""

text_widget = ctk.CTkTextbox(window, width=600, height=200)
text_widget.insert("1.0", 'https://www.youtube.com/watch?v=\nhttps://www.youtube.com/playlist?list=')
on_focusin_id = text_widget.bind('<FocusIn>', on_entry_click)
text_widget.pack(pady=10)


button_frame = ctk.CTkFrame(window)
button_frame.pack()

browse_button = ctk.CTkButton(button_frame, text="Обзор", command=choose_folder, width=165, height=35)  # увеличьте размер и измените цвет здесь
browse_button.pack(side="left", padx=3, pady=3)

download_button = ctk.CTkButton(button_frame, text="Скачать", command=get_links, width=250, height=35)  # увеличьте размер и измените цвет здесь
download_button.pack(side="left", padx=3, pady=3)

convert_button = ctk.CTkButton(button_frame, text="mp4>>mp3", command=mpconvert, width=165, height=35)  # увеличьте размер и измените цвет здесь
convert_button.pack(side="left", padx=3, pady=3)

console = ctk.CTkTextbox(window, width=600, height=100)
console.pack(pady=10)
sys.stdout = TextHandler(console)
console.tag_config("red", foreground="red")
console.tag_config("green", foreground="green")
console.tag_config("blue", foreground="blue")
console.insert(END, "Пожалуйста, выберите папку для скачивания.\n", "red")

window.mainloop()