//
// Created by alex scalese on 2019-02-16.
//

#ifndef MUSICPLAYER_STATE_EXAMPLE_PAUSEDSTATE_HPP
#define MUSICPLAYER_STATE_EXAMPLE_PAUSEDSTATE_HPP

#include <memory>
#include "States.hpp"

class MusicPlayer;

class PausedState: public States {
public:
    PausedState(MusicPlayer *music_player);

    ~PausedState() override;

    void Play() override;

    void Stop() override;

    void Pause() override;

private:
    MusicPlayer *music_player_;
};


#endif //MUSICPLAYER_STATE_EXAMPLE_PAUSEDSTATE_HPP
