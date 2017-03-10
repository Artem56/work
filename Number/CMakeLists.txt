cmake_minimum_required(VERSION 3.6)
project(Number)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Complex.cpp Complex.h Main.cpp Real.cpp Real.h)
add_executable(Number ${SOURCE_FILES})