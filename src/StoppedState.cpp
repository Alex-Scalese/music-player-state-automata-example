//
// Created by alex scalese on 2019-02-13.
//

#include <iostream>
#include "../include/StoppedState.hpp"

StoppedState::StoppedState(const std::weak_ptr<MusicPlayer> &music_player) : music_player_(music_player) {
    std::cout << "[StoppedState] StoppedState()" << std::endl;
}

StoppedState::~StoppedState() {
    std::cout << "[StoppedState] ~StoppedState()" << std::endl;
}

void StoppedState::Play() {
    std::cout << "[StoppedState] Play()" << std::endl;
    music_player_.lock()->state = reinterpret_cast<States *>(music_player_.lock()->playing_state.lock().get());
}

void StoppedState::Stop() {
    std::cout << "[StoppedState] Stop()" << std::endl;
    music_player_.lock()->state = music_player_.lock()->stopped_state.lock().get();
}

void StoppedState::Pause() {

}