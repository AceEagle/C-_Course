cmake_minimum_required(VERSION 3.17)
project(CPlus_Course)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPlus_Course Character/MainCharacter.cpp
        Character/Character.h Character/Character.cpp Character/Weapon.h Character/Weapon.cpp Time/Time.cpp Time/Time.h Time/MainTime.cpp)