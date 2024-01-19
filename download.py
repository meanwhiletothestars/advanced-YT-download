# Импортируем библиотеки pytube, requests, tqdm и colorama
from pytube import YouTube, Playlist
import requests
from tqdm import tqdm
from colorama import Fore, Style

# Определяем функцию для скачивания видео или плейлиста
def run_download(link, path, playlist):
    if playlist:
        # Если ссылка является плейлистом, создаем объект плейлиста
        playlist = Playlist(link)
        # Выводим количество видео в плейлисте
        print(f"Количество видео в плейлисте: {len(playlist.video_urls)}")
        # Скачиваем все видео из плейлиста в указанную папку с помощью tqdm
        for video in tqdm(playlist.videos, desc="Скачивание видео", colour="blue"):
            video.streams.first().download(path)
            print(f"Скачано видео: {video.title}")
    else:
        # Если ссылка является видео, создаем объект видео
        video = YouTube(link)
        # Выводим название видео
        print(f"Название видео: {video.title}")
        # Скачиваем видео в указанную папку с помощью tqdm
        video.streams.first().download(path)
        print(f"Скачано видео: {video.title}")

