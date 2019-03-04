#include <iostream>
#include <memory>
#include "musicplayer/MusicPlayer.hpp"

int main() {

    auto musicPlayer = std::make_shared<MusicPlayer>();

    // simulate input
    musicPlayer->Stop();

    musicPlayer.reset();

    std::cout << "--- End Program ---" << std::endl;
    return 0;
}