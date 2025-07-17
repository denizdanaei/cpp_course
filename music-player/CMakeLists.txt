cmake_minimum_required(VERSION 3.10)

project(music-player)

add_executable(${PROJECT_NAME} main.cpp 
    song.cpp
    mp3-song.cpp
    flac-song.cpp
    media-player.cpp)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)