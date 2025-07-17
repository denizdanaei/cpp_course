// declaration of the Song class and its derived classes
#pragma once
#include <string>
#include "song.hpp"

class MP3Song : public Song
{
public:
    MP3Song(const std::string& title, const std::string& artist);
    ~MP3Song() override = default;
    void play() override;
};
