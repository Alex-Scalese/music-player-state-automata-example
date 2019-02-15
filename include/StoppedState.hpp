//
// Created by alex scalese on 2019-02-13.
//

#ifndef MUSICPLAYER_STATE_EXAMPLE_STOPPEDSTATE_HPP
#define MUSICPLAYER_STATE_EXAMPLE_STOPPEDSTATE_HPP

#include <memory>
#include "States.hpp"
#include "MusicPlayer.hpp"

class StoppedState: public States {
public:
    StoppedState(const std::weak_ptr<MusicPlayer> &music_player);

    virtual ~StoppedState();

    void Play() override;

    void Stop() override;

    void Pause() override;

private:
    std::weak_ptr<MusicPlayer> music_player_;
};

#endif //MUSICPLAYER_STATE_EXAMPLE_STOPPEDSTATE_HPP
