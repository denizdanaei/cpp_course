cmake_minimum_required(VERSION 3.10)
project(functions-fahrenheit)

# Create a library with the functions to test
add_library(fahrenheit_lib
    fahrenheit.cpp
)

# Main executable
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} fahrenheit_lib)

# Enable testing
enable_testing()

# Find Google Test
find_package(GTest REQUIRED)

# Create test executable
add_executable(fahrenheit_tests
    test_fahrenheit.cpp
)

target_link_libraries(fahrenheit_tests
    fahrenheit_lib
    GTest::gtest
    GTest::gtest_main
)

# Register tests with CTest
add_test(NAME FahrenheitTests COMMAND fahrenheit_tests)