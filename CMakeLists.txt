cmake_minimum_required(VERSION 3.9)
project(Mate_Invaders)

set(CMAKE_CXX_STANDARD 11)

add_executable(Mate_Invaders
        Entity.cpp
        Entity.h
        Game.h
        main.cpp
        Player.cpp
        Player.h)
