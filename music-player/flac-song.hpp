// declaration of the Song class and its derived classes
#pragma once

#include "song.hpp"

class FlacSong : public Song
{
public:
    FlacSong(const std::string& title, const std::string& artist);
    ~FlacSong() override = default;
    void play() override;
};

