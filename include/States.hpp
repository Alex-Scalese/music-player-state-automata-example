//
// Created by alex scalese on 2019-02-13.
//

#ifndef MUSICPLAYER_STATE_EXAMPLE_STATES_HPP
#define MUSICPLAYER_STATE_EXAMPLE_STATES_HPP

class MusicPlayer;

class States {

public:
    virtual ~States() = default;
    virtual void Play() = 0;
    virtual void Stop() = 0;
    virtual void Pause() = 0;
};

#endif //MUSICPLAYER_STATE_EXAMPLE_STATES_HPP
