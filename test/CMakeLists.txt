project(runTests)
cmake_minimum_required(VERSION 3.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

add_executable(runCharactersTests
    testCharacters.cpp
    ../src/Characters.cpp
)

add_executable(runPlayerTests
    testPlayer.cpp
    ../src/Player.cpp
)

add_executable(runCombatTests
    testCombat.cpp
    ../src/Combat.cpp
)

add_subdirectory(googletest)

add_library(Characters ../src/Characters.cpp)
add_library(Player ../src/Player.cpp)
add_library(NPC ../src/NPC.cpp)
add_library(Combat ../src/Combat.cpp)
target_link_libraries(runCharactersTests Characters gtest gtest_main)
target_link_libraries(runPlayerTests NPC Player Characters gtest gtest_main)
target_link_libraries(runCombatTests Combat NPC Player Characters gtest gtest_main)

enable_testing()
