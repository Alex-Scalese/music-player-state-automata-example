//
// Created by alex scalese on 2019-02-13.
//

#ifndef MUSICPLAYER_STATE_EXAMPLE_STATES_HPP
#define MUSICPLAYER_STATE_EXAMPLE_STATES_HPP

class MusicPlayer;

class States {

public:
    virtual void Play(MusicPlayer &player) = 0;
    virtual void Stop(MusicPlayer &player) = 0;
    virtual void Pause(MusicPlayer &player) = 0;
};

#endif //MUSICPLAYER_STATE_EXAMPLE_STATES_HPP
