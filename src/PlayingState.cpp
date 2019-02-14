//
// Created by alex scalese on 2019-02-13.
//

#include <iostream>
#include <thread>
#include "../include/PlayingState.hpp"

PlayingState::PlayingState(const std::weak_ptr<MusicPlayer> &musicPlayer) : musicPlayer(musicPlayer) {
    std::cout << "[PlayingState] PlayingState()" << std::endl;
}

void PlayingState::Play() {
    musicPlayer.lock()->state = musicPlayer.lock()->playingState.lock().get();
    for (int i = 0; i < 4; i++) {
        std::this_thread::sleep_for (std::chrono::seconds(1));
        std::cout << "playing music 🎶 " << std::endl;
    }
    musicPlayer.lock()->state = reinterpret_cast<States *>(musicPlayer.lock()->stoppedState.lock().get());
}

void PlayingState::Stop() {

}

void PlayingState::Pause() {
}
