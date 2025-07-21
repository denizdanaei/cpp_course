
// add songs and play them using the MediaPlayer class

#include "flac-song.hpp"
#include "media-player.hpp"
#include "mp3-song.hpp"

int main() {
    MediaPlayer player;
    player.add(new MP3Song("Papillon", "Editors"));
    player.add(new FlacSong("Can't hold us", "Macklemore"));
    player.play();

    return 0;
};
