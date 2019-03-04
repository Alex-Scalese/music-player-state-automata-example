cmake_minimum_required(VERSION 3.13)
project(musicplayer_state_example)

SET(CMAKE_C_COMPILER /usr/bin/gcc)
SET(CMAKE_CXX_COMPILER /usr/bin/g++)
SET(CMAKE_CXX_FLAGS "-Wall -Wextra -Wshadow -g")
SET(CMAKE_CXX_STANDARD 14)
SET(CMAKE_C_FLAGS_DEBUG "-D_DEBUG")

add_executable(demo_musicplayer_state main.cpp)

include_directories(musicplayer)
add_subdirectory(musicplayer)
add_subdirectory(musicplayer-tests)

target_link_libraries(demo_musicplayer_state musicplayer)

