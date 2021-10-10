cmake_minimum_required(VERSION 3.20)
project(Interviews_src)

set(CMAKE_CXX_STANDARD 23)

include_directories(${CMAKE_PROJECT_INCLUDE})

add_executable(Interviews_src main.cpp bits/CalBits.cpp)