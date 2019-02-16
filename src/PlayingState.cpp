//
// Created by alex scalese on 2019-02-13.
//

#include <iostream>
#include <thread>
#include "../include/PlayingState.hpp"

PlayingState::PlayingState(const std::weak_ptr<MusicPlayer> &music_player) {
    std::cout << "[PlayingState] PlayingState()" << std::endl;
    this->music_player_ = music_player;
}

PlayingState::~PlayingState() {
    std::cout << "[PlayingState] ~PlayingState()" << std::endl;
}

void PlayingState::Play() {
    char next_state;

    std::cout << "[PlayingState] Play()" << std::endl;

    std::cout << "Simulate music ..." << std::endl;
    for (int i = 0; i < 2; ++i) {
        std::this_thread::sleep_for (std::chrono::seconds(1));
        std::cout << ">>> Utze Utze Boom Boooom" << std::endl;
    }

    std::cout << "Okay Okay! Enough music... \nU must Stop (s) or Pause(p) the music!" << std::endl;
    std::cout << "Default > s" << std::endl;
    std::cin >> next_state;
    if (next_state == 'p') {
        music_player_.lock()->state = reinterpret_cast<States *>(music_player_.lock()->paused_state.lock().get());
        music_player_.lock()->Pause();
    } else {
        music_player_.lock()->state = reinterpret_cast<States *>(music_player_.lock()->stopped_state.lock().get());
        music_player_.lock()->Stop();
    }
}

void PlayingState::Stop() {
    std::cout << "[PlayingState] Stop()" << std::endl;
}

void PlayingState::Pause() {
    std::cout << "[PlayingState] Pause()" << std::endl;
}
