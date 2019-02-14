//
// Created by alex scalese on 2019-02-13.
//

#include <iostream>
#include "../include/StoppedState.hpp"

StoppedState::StoppedState(const std::weak_ptr<MusicPlayer> &musicPlayer) : musicPlayer(musicPlayer) {
    std::cout << "[StoppedState] StoppedState()" << std::endl;
}

StoppedState::~StoppedState() {
    std::cout << "[StoppedState] ~StoppedState()" << std::endl;
}



void StoppedState::Play() {
    std::cout << "[StoppedState] Play()" << std::endl;
    musicPlayer.lock()->state = reinterpret_cast<States *>(musicPlayer.lock()->playingState.lock().get());
}

void StoppedState::Stop() {
    std::cout << "[StoppedState] Stop()" << std::endl;
    musicPlayer.lock()->state = musicPlayer.lock()->stoppedState.lock().get();
}

void StoppedState::Pause() {

}