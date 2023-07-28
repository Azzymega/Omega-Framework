cmake_minimum_required(VERSION 3.25)
project(runtime)

set(CMAKE_CXX_STANDARD 17)

add_executable(runtime main.cpp cpu.cpp cpu.h microcode.cpp microcode.h)
