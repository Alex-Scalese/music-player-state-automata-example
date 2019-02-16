//
// Created by alex scalese on 2019-02-13.
//

#include <iostream>
#include <memory>
#include "../include/MusicPlayer.hpp"
#include "../include/StoppedState.hpp"

MusicPlayer::MusicPlayer() {
    std::cout << "[MusicPlayer] MusicPlayer()" << std::endl;
}

MusicPlayer::~MusicPlayer() {
    std::cout << "[MusicPlayer] ~MusicPlayer()" << std::endl;
}

void MusicPlayer::Stop() {
    std::cout << "[MusicPlayer] Stop()" << std::endl;
    state == nullptr ? (void)0 : state->Stop();
}

void MusicPlayer::Play() {
    std::cout << "[MusicPlayer] Play()" << std::endl;
    state == nullptr ? (void)0 : state->Play();
}