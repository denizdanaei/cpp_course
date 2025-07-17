// interface for song classes
#pragma once

#include "song.hpp"
#include <vector>
class MediaPlayer{
    
public:
    MediaPlayer();
    ~MediaPlayer();
    void play() const;
    void add(Song* song);
private:
    std::vector<Song*> m_songs; // Vector to hold pointers to Song objects
    // Note: We assume ownership of the songs, so we will delete them in the destructor
};

