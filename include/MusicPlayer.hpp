//
// Created by alex scalese on 2019-02-13.
//

#ifndef MUSICPLAYER_STATE_EXAMPLE_MUSICPLAYER_HPP
#define MUSICPLAYER_STATE_EXAMPLE_MUSICPLAYER_HPP

#include <memory>

class States;
class StoppedState;
class PausedState;
class PlayingState;

class MusicPlayer {

public:

    States *state;
    std::weak_ptr<StoppedState> stopped_state;
    std::weak_ptr<PlayingState> playing_state;
    std::weak_ptr<PausedState> paused_state;

    MusicPlayer();
    ~MusicPlayer();

    void Stop();
    void Pause();
    void Play();
};


#endif //MUSICPLAYER_STATE_EXAMPLE_MUSICPLAYER_HPP
