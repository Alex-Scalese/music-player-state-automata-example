//
// Created by alex scalese on 2019-02-13.
//

#ifndef MUSICPLAYER_STATE_EXAMPLE_MUSICPLAYER_HPP
#define MUSICPLAYER_STATE_EXAMPLE_MUSICPLAYER_HPP

#include <memory>

class States;
class StoppedState;
class PlayingState;

class MusicPlayer {

public:
    // std::weak_ptr<States> state;
    States *state;
    std::weak_ptr<StoppedState> stopped_state;
    std::weak_ptr<PlayingState> playing_state;

    MusicPlayer();
    ~MusicPlayer();

    void Stop();
    void Play();
    void setState(States &state);
};


#endif //MUSICPLAYER_STATE_EXAMPLE_MUSICPLAYER_HPP
