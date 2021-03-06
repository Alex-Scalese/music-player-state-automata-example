//
// Created by alex scalese on 2019-02-16.
//

#include <iostream>
#include <thread>
#include "../include/PausedState.hpp"
#include "../include/MusicPlayer.hpp"

PausedState::PausedState(MusicPlayer &music_player) {
    std::cout << "[PausedState] PauseState()" << std::endl;
    music_player_ = &music_player;
}

PausedState::~PausedState() {
    std::cout << "[PausedState] ~PauseState()" << std::endl;
}

void PausedState::Play() {
    std::cout << "[PausedState] Play()" << std::endl;
}

void PausedState::Stop() {
    std::cout << "[PausedState] Stop()" << std::endl;
}

void PausedState::Pause() {
    char next_state;

    std::cout << "[PausedState] Pause()" << std::endl;
    std::cout << "Simulate Pause ... " << std::endl;

    for (int i = 0; i < 3; ++i) {
        std::this_thread::sleep_for (std::chrono::seconds(1));
        std::cout << ">>> Pause" << std::endl;
    }
    std::cout << "Play(p) or Stop (s)" << std::endl;
    std::cin >> next_state;

    if (next_state == 's') {
        music_player_->state = music_player_->stopped_state.get();
        music_player_->Stop();
    } else {
        music_player_->state = music_player_->playing_state.get();
        music_player_->Play();
    }

}
