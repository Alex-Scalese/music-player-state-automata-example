#include <iostream>
#include <memory>
#include "include/MusicPlayer.hpp"
#include "include/StoppedState.hpp"
#include "include/PausedState.hpp"
#include "include/PlayingState.hpp"

int main() {

    // TODO: Implement a Factory Method !!!
    auto musicPlayer = std::make_shared<MusicPlayer>();

    auto stoppedState = std::make_shared<StoppedState>(musicPlayer);
    auto pausedState = std::make_shared<PausedState>(musicPlayer);
    auto playingState = std::make_shared<PlayingState>(musicPlayer);

    // Start State
    musicPlayer->state = stoppedState.get();

    musicPlayer->stopped_state = stoppedState;
    musicPlayer->playing_state = playingState;

    // simulate input
    musicPlayer->Stop();
    musicPlayer->Play();
    musicPlayer->Stop();

    std::cout << "--- End Program ---" << std::endl;
    return 0;
}