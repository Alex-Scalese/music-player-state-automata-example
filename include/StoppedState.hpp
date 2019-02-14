//
// Created by alex scalese on 2019-02-13.
//

#ifndef MUSICPLAYER_STATE_EXAMPLE_STOPPEDSTATE_HPP
#define MUSICPLAYER_STATE_EXAMPLE_STOPPEDSTATE_HPP

#import <memory>
#import "States.hpp"
#import "MusicPlayer.hpp"

class StoppedState: public States {
public:
    StoppedState(const std::weak_ptr<MusicPlayer> &musicPlayer);

    virtual ~StoppedState();

    void Play() override;

    void Stop() override;

    void Pause() override;

private:
    std::weak_ptr<MusicPlayer> musicPlayer;
};

#endif //MUSICPLAYER_STATE_EXAMPLE_STOPPEDSTATE_HPP
