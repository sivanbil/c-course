cmake_minimum_required(VERSION 3.19)
project(c_course)

set(CMAKE_CXX_STANDARD 14)

include_directories(Calculator)
include_directories(HanoiTower)
include_directories(Mdb)

add_executable(c_course
#        Calculator/main.c
#        Calculator/main.h
        HanoiTower/tower_main.c
        HanoiTower/tower_main.h
        LICENSE
        README.md)
