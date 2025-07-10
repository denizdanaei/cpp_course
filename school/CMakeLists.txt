cmake_minimum_required(VERSION 3.10)

project(school)
add_executable(${PROJECT_NAME} main.cpp student.cpp course.cpp school.cpp)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)