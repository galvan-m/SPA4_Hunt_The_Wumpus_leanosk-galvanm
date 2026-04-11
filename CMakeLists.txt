cmake_minimum_required(VERSION 4.0)
project(SPA4_Hunt_The_Wumpus_leanosk_galvanm)

set(CMAKE_CXX_STANDARD 14)

add_executable(SPA4_Hunt_The_Wumpus_leanosk_galvanm
        main.cpp
        Room.cpp
        Room.h
        Entity.cpp
        Entity.h
        Map.cpp
        Map.h
        Inhibitor.cpp
        Inhibitor.h
        Ravine.cpp
        Ravine.h
        Creeper.cpp
        Creeper.h
        Enderman.cpp
        Enderman.h
        Item.cpp
        Item.h
        Diamond.cpp
        Diamond.h
        Sword.cpp
        Sword.h
        Miner.cpp
        Miner.h)
