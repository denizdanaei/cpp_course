// music-player/song.cpp defines a song class and inherits of it
#include "song.hpp"
#include "mp3-song.hpp"
#include <iostream>


MP3Song::MP3Song(const std::string& title, const std::string& artist)
    : Song(title, artist) {
}
void MP3Song:: play() 
{
    std::cout << "Playing MP3 song: " << title << " by " << artist <<  ". Decoding: Mp3 " << std::endl;
}