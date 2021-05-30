cmake_minimum_required(VERSION 3.19)

get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)

string(REPLACE " " "_" ProjectId ${ProjectId})
project(${ProjectId} C)

set(CMAKE_C_STANDARD 11)


include_directories(Calculator)
include_directories(HanoiTower)
include_directories(Mdb)
include_directories(MacroFunc)

add_executable(c_course
#        Calculator/main.c
#        Calculator/main.h
#        HanoiTower/tower_main.c
#        HanoiTower/tower_main.h
#        MacroFunc/macro_function.c
        LICENSE
        README.md)
