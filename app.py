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
