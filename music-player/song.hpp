// declaration of the Song class and its derived classes
#pragma once
#include <string>

class Song {
  public:
    Song(const std::string& title, const std::string& artist);
    virtual ~Song() = default;
    virtual void play() = 0;

  protected:
    std::string title;
    std::string artist;
};
