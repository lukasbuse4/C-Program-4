cmake_minimum_required(VERSION 3.12)
project(program4)

set(CMAKE_CXX_STANDARD 14)

add_executable(program4 main.cpp Bidder.h Sneaker.h Sneaker.cpp Bidder.cpp)