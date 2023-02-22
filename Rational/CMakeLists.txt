cmake_minimum_required(VERSION 3.0.0)
project("Rational")

include(CTest)
enable_testing()

add_subdirectory(Rational_library)

include_directories(.)

add_executable(Rational main.cpp)

target_link_libraries(Rational Rational_library)
