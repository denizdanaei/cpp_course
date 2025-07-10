cmake_minimum_required(VERSION 3.10)

project(student)
add_executable(${PROJECT_NAME} main.cpp student.cpp)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)