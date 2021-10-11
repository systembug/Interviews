cmake_minimum_required(VERSION 3.20)
project(Interviews_tests)

set(CMAKE_CXX_STANDARD 23)

include_directories(${PROJECT_SOURCE_DIR}/../Interviews)
include_directories(${PROJECT_SOURCE_DIR}/3rdparty/googletest/googletest/include)

message(STATUS ${PROJECT_SOURCE_DIR})
message(STATUS ${CMAKE_PROJECT_INCLUDE})

add_executable(Interviews_tests main.cpp bits/CalBits.cpp main.cpp)
target_link_libraries(Interviews_tests Interviews_lib gtest)