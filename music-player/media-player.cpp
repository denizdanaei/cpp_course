//
#include "media-player.hpp"
#include "song.hpp"

MediaPlayer::~MediaPlayer() {
    for (Song* song : m_songs) {
        delete song;
    }
}
MediaPlayer::MediaPlayer() : m_songs() {
    // Constructor initializes the media player
}
void MediaPlayer::add(Song* song) {
    // Add a song to the media player
    m_songs.push_back(song);
}
void MediaPlayer::play() const {
    // Play all songs in the media player
    for (Song* song : m_songs) {
        song->play();
    }
}