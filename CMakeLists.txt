cmake_minimum_required(VERSION 3.25)
project(learn_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(learn_cpp
        chapter_15.cpp primer/ch03/chapter_03-4-0.cpp)
