cmake_minimum_required(VERSION 3.17)
project(DnD)

set(CMAKE_CXX_STANDARD 20)

add_executable(DnD main.cpp character.h races.h dnd.cpp specialization.h)