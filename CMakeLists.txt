cmake_minimum_required(VERSION 3.20)
project(Interviews)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(tests)

add_executable(Interviews main.cpp src/bits/CalBits.cpp src/bits/CalBits.h)
