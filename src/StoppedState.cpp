//
// Created by alex scalese on 2019-02-13.
//

#include <iostream>
#include <thread>
#include "../include/StoppedState.hpp"
#include "../include/MusicPlayer.hpp"

StoppedState::StoppedState(MusicPlayer *music_player) {
    music_player_ = music_player;
}

StoppedState::~StoppedState() {
    std::cout << "[StoppedState] ~StoppedState()" << std::endl;
}

void StoppedState::Play() {
    std::cout << "[StoppedState] Play()" << std::endl;
}

void StoppedState::Stop() {
    std::cout << "[StoppedState] Stop()" << std::endl;
    std::cout << "Simulate stopped music" << std::endl;
    for (int i = 0; i < 2; ++i) {
        std::this_thread::sleep_for (std::chrono::seconds(1));
        std::cout << ">>> ..." << std::endl;
    }
    music_player_.lock()->state = reinterpret_cast<States *>(music_player_.lock()->playing_state.lock().get());
    music_player_.lock()->Play();
}

void StoppedState::Pause() {
    std::cout << "[StoppedState] Pause()" << std::endl;
}