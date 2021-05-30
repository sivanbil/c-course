cmake_minimum_required(VERSION 3.19)

get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)

string(REPLACE " " "_" ProjectId ${ProjectId})
project(${ProjectId} C)

set(CMAKE_CXX_STANDARD 14)


include_directories(Calculator)
include_directories(HanoiTower)
include_directories(Mdb)
include_directories(MacroFunc)
include_directories(CompileCondition)
include_directories(Printlnf)
include_directories(ArrayBoundary)
include_directories(include)

add_executable(c_course
#        Calculator/main.c
#        Calculator/main.h
#        HanoiTower/tower_main.c
#        HanoiTower/tower_main.h
#        MacroFunc/macro_function.c
#        CompileCondition/main.c
#        Printlnf/main.c
#        Printlnf/main.h
        ArrayBoundary/main.c
        ArrayBoundary/main.h
        include/io_utils.h
        LICENSE
        README.md)
