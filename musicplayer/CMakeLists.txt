file(GLOB musicplayer_src
        "*.hpp"
        "*.cpp")

add_library(musicplayer ${musicplayer_src})

# add_executable(run_musicplayer_demo ../main.cpp)

# target_link_libraries(run_musicplayer_demo musicplayer)