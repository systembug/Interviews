cmake_minimum_required(VERSION 3.20)
project(Interviews_tests)

set(CMAKE_CXX_STANDARD 23)

include_directories(${CMAKE_PROJECT_INCLUDE}/googletest/googletest/include)

add_executable(Interviews_tests main.cpp bits/CalBits.cpp bits/CalBits.h main.cpp)
target_link_libraries(Interviews_tests gtest)