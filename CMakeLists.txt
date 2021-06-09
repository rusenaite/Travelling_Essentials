cmake_minimum_required(VERSION 3.17)
project(TietoEVRY)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TietoEVRY
        AutumnBag.cpp
        AutumnBag.h
        Bag.cpp
        Bag.h
        main.cpp
        SpringBag.cpp
        SpringBag.h
        SummerBag.cpp
        SummerBag.h
        WinterBag.cpp
        WinterBag.h)
