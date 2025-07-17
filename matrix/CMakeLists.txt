cmake_minimum_required(VERSION 3.10)

project(matrix)

add_executable(${PROJECT_NAME} main.cpp matrix.cpp)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)