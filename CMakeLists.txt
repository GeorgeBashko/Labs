cmake_minimum_required(VERSION 3.20)
project(untitled5)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled5 main.cpp test1.cpp)
project(untitled5)

# 'lib' is the folder with Google Test sources
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 'Google_Tests_run' is the target name
# 'test1.cpp tests2.cpp' are source files with tests
add_executable(Google_Tests_run test1.cpp drob.h drob.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)

