project(music-player)

add_executable(${PROJECT_NAME} main.cpp 
    song.cpp
    mp3-song.cpp
    flac-song.cpp
    media-player.cpp)