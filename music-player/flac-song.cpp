// music-player/song.cpp defines a song class and inherits of it
#include "flac-song.hpp"

#include <iostream>

#include "song.hpp"

FlacSong::FlacSong(const std::string& title, const std::string& artist) : Song(title, artist) {}

void FlacSong::play() {
    std::cout << "Playing FLAC song: " << title << " by " << artist << ". Decoding: Flac"
              << std::endl;
}
