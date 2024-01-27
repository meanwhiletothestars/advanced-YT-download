# Импортируем библиотеки pytube, requests, tqdm и colorama
from pytube import YouTube, Playlist
import requests
from tqdm import tqdm
from colorama import Fore, Style
import os
from moviepy.editor import VideoFileClip
import time

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

def convert_mp4_to_mp3(path):
    mp3_folder = os.path.join(path, 'mp3')
    
    if not os.path.exists(mp3_folder):
        os.makedirs(mp3_folder)
        
    for filename in os.listdir(path):
        if filename.endswith('.mp4'):
            mp4_path = os.path.join(path, filename)
            mp3_path = os.path.join(mp3_folder, filename.replace('.mp4', '.mp3'))
            
            video_clip = VideoFileClip(mp4_path)
            audio_clip = video_clip.audio
            audio_clip.write_audiofile(mp3_path)
            audio_clip.close()