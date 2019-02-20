//
// Created by alex scalese on 2019-02-13.
//

#ifndef MUSICPLAYER_STATE_EXAMPLE_PLAYINGSTATE_HPP
#define MUSICPLAYER_STATE_EXAMPLE_PLAYINGSTATE_HPP

#include <memory>
#include "States.hpp"

class MusicPlayer;

class PlayingState: public States {
public:
    PlayingState(MusicPlayer &music_player);

    ~PlayingState() override;

    void Play() override;

    void Stop() override;

    void Pause() override;

private:
    MusicPlayer *music_player_;
};


#endif //MUSICPLAYER_STATE_EXAMPLE_PLAYINGSTATE_HPP
