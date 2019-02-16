//
// Created by alex scalese on 2019-02-16.
//

#include <iostream>
#include "PausedState.hpp"

void PausedState::Play() {
    std::cout << "[PausedState] Play()" << std::endl;
}

void PausedState::Stop() {
    std::cout << "[PausedState] Stop()" << std::endl;
}

void PausedState::Pause() {
    std::cout << "[PausedState] Pause()" << std::endl;
}

PausedState::~PausedState() {
    std::cout << "[PausedState] ~PauseState()" << std::endl;

}

PausedState::PausedState(const std::weak_ptr<MusicPlayer> &music_player_) : music_player_(music_player_) {
    std::cout << "[PausedState] PauseState()" << std::endl;
}
