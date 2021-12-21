cmake_minimum_required(VERSION 3.20)
project(untitled7)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled7 main.cpp class.h class.cpp)
project(untitled7)
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_executable(Google_Tests_run test1.cpp class.h class.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)