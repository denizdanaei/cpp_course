cmake_minimum_required(VERSION 3.22)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

project(all)

add_subdirectory(functions-fahrenheit)
add_subdirectory(time-conversion)
add_subdirectory(q-and-a)
add_subdirectory(student)
add_subdirectory(school)
add_subdirectory(music-player)
add_subdirectory(matrix)
# add_subdirectory(vector)