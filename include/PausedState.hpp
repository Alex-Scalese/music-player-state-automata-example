//
// Created by alex scalese on 2019-02-16.
//

#ifndef MUSICPLAYER_STATE_EXAMPLE_PAUSEDSTATE_HPP
#define MUSICPLAYER_STATE_EXAMPLE_PAUSEDSTATE_HPP

#include <memory>
#include "States.hpp"
#include "MusicPlayer.hpp"

class PausedState: public States {
public:
    explicit PausedState(const std::weak_ptr<MusicPlayer> &music_player_);

    ~PausedState() override;

    void Play() override;

    void Stop() override;

    void Pause() override;

private:
    std::weak_ptr<MusicPlayer> music_player_;
};


#endif //MUSICPLAYER_STATE_EXAMPLE_PAUSEDSTATE_HPP
