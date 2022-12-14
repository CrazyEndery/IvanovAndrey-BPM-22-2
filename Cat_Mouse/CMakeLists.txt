cmake_minimum_required(VERSION 3.8)
project("Cat_Mouse")

include(CTest)
enable_testing()

add_subdirectory(Vector)

include_directories(.)

add_executable(Cat_Mouse main.cpp)

target_link_libraries(Cat_Mouse Vector)