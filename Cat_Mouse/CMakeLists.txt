cmake_minimum_required(VERSION 3.0.0)
project(Cat_Mouse VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories(.)
add_subdirectory(Library)
add_executable(Cat_Mouse main.cpp)
