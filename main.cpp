#include <iostream>
#include <memory>
#include "include/MusicPlayer.hpp"
#include "include/StoppedState.hpp"
#include "include/PlayingState.hpp"

int main() {
    auto musicPlayer = std::make_shared<MusicPlayer>();

    auto stoppedState = std::make_shared<StoppedState>(musicPlayer);
    auto playingState = std::make_shared<PlayingState>(musicPlayer);

    // Start State
    musicPlayer->state = playingState.get();
    musicPlayer->stopped_state = stoppedState;
    musicPlayer->playing_state = playingState;

    std::cout << "[main] musicPlayer->state: "<< musicPlayer->state << std::endl;
    // simulate input
    musicPlayer->Stop();
    musicPlayer->Play();

    std::cout << "--- End Program ---" << std::endl;
    return 0;
}