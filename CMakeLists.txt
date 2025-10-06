cmake_minimum_required(VERSION 3.10)
project(Calculator CXX)

set(CMAKE_CXX_STANDARD 17)

add_library(calc STATIC calculator.cpp)

add_executable(calc_app main.cpp)

target_link_libraries(calc_app PRIVATE calc)
