#include <iostream>
#include <memory>
#include "include/MusicPlayer.hpp"
#include "include/StoppedState.hpp"
#include "include/PausedState.hpp"
#include "include/PlayingState.hpp"

int main() {

    // TODO: Implement a Factory Method !!!
    auto musicPlayer = std::make_shared<MusicPlayer>();

    // simulate input
    musicPlayer->Stop();

    musicPlayer.reset();

    std::cout << "--- End Program ---" << std::endl;
    return 0;
}