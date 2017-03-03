cmake_minimum_required(VERSION 3.6)
project(Numbers)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Complex.cpp Complex.h)
add_executable(Numbers ${SOURCE_FILES})