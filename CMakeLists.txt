cmake_minimum_required(VERSION 3.13)
project(musicplayer_state_example)

set(CMAKE_CXX_STANDARD 14)

add_executable(musicplayer_state_example main.cpp src/MusicPlayer.cpp include/MusicPlayer.hpp include/States.hpp src/StoppedState.cpp include/StoppedState.hpp src/PlayingState.cpp include/PlayingState.hpp)