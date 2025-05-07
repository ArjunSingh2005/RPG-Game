cmake_minimum_required(VERSION 3.0)
project(RPGGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(RPGGame 
    src/main.cpp
    src/Player.cpp
    src/NPC.cpp
    src/Characters.cpp
    src/Combat.cpp
    src/game_screens.cpp
)

# Include directories
include_directories(header)

# Link necessary libraries if needed
target_link_libraries(RPGGame)
