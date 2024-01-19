# Импортируем библиотеки pytube, requests, tqdm и colorama
from pytube import YouTube, Playlist
import requests
from tqdm import tqdm
from colorama import Fore, Style

# Определяем функцию для скачивания видео или плейлиста
def run_download(link, path, playlist):
    print(playlist)
    if playlist:
        # Если ссылка является плейлистом, создаем объект плейлиста
        playlist = Playlist(link)
        # Выводим количество видео в плейлисте
        print(Fore.GREEN + f"Количество видео в плейлисте: {len(playlist.video_urls)}" + Style.RESET_ALL)
        # Скачиваем все видео из плейлиста в указанную папку с помощью tqdm
        for video in tqdm(playlist.videos, desc="Скачивание видео", colour="blue"):
            video.streams.first().download(path)
            tqdm.write(Fore.CYAN + f"Скачано видео: {video.title}" + Style.RESET_ALL)
    else:
        # Если ссылка является видео, создаем объект видео
        video = YouTube(link)
        # Выводим название видео
        print(Fore.GREEN + f"Название видео: {video.title}" + Style.RESET_ALL)
        # Скачиваем видео в указанную папку с помощью tqdm
        video.streams.first().download(path)
        print(Fore.CYAN + f"Скачано видео: {video.title}" + Style.RESET_ALL)

