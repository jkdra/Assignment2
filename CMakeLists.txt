cmake_minimum_required(VERSION 3.29)
project(Assignment2)

set(CMAKE_CXX_STANDARD 26)

add_executable(Assignment2 main.cpp
        header.h
        DisplayBoard.cpp
        OutputInstruct.cpp
        InitBoard.cpp
        GetPlayers.cpp
        GetAndCheckInp.cpp
        SwitchToken.cpp
        CheckWin.cpp
        OutputWinner.cpp
        ComputerAlgorithm.cpp
        MainMenu.cpp)
