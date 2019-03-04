//
// Created by alex scalese on 2019-02-13.
//

#include <iostream>
#include <thread>
#include "PlayingState.hpp"
#include "MusicPlayer.hpp"

PlayingState::PlayingState(MusicPlayer &music_player) {
    music_player_ = &music_player;
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

    std::cout << "Okay Okay! Enough music... \nU must Stop (s) or Pause(p) the music! Or Quit (q)" << std::endl;
    std::cout << "Default > s" << std::endl;
    std::cin >> next_state;
    if (next_state == 'p') {
        music_player_->state = music_player_->paused_state.get();
        music_player_->Pause();
    } else if (next_state == 'q') {
        return;
    } else {
        music_player_->state = music_player_->stopped_state.get();
        music_player_->Stop();
    }
}

void PlayingState::Stop() {
    std::cout << "[PlayingState] Stop()" << std::endl;
}

void PlayingState::Pause() {
    std::cout << "[PlayingState] Pause()" << std::endl;
}