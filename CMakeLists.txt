cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

project(rtos_generator)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SRC
    "src/*.hpp"
    "src/*.cpp"
    "src/**/*.hpp"
    "src/**/*.cpp"
)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/bin)
add_executable(rtos_generator ${SRC})