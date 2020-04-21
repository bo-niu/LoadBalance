cmake_minimum_required(VERSION 3.15)
project(Random)

set(CMAKE_CXX_STANDARD 11)

add_executable(Random main.cpp Node.cpp Node.h WeightRandom.cpp WeightRandom.h)