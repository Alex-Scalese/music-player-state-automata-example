//
// Created by alex scalese on 2019-02-13.
//

#include <iostream>
#include <thread>
#include "../include/PlayingState.hpp"

PlayingState::PlayingState(const std::weak_ptr<MusicPlayer> &music_player) : music_player_(music_player) {
    std::cout << "[PlayingState] PlayingState()" << std::endl;
}

void PlayingState::Play() {
    std::cout << "[PlayingState] Play()" << std::endl;
    music_player_.lock()->state = music_player_.lock()->playing_state.lock().get();
    std::cout << "Simulate music ..." << std::endl;
    for (int i = 0; i < 4; i++) {
        std::this_thread::sleep_for (std::chrono::seconds(1));
        std::cout << ">>> Utze Utze Boom Boooom" << std::endl;
    }
    music_player_.lock()->state = reinterpret_cast<States *>(music_player_.lock()->stopped_state.lock().get());
}

void PlayingState::Stop() {
    std::cout << "[PlayingState] Stop()" << std::endl;
}

void PlayingState::Pause() {
    std::cout << "[PlayingState] Pause()" << std::endl;
}
