cmake_minimum_required(VERSION 3.0.0)
project(example VERSION 0.1.0)

enable_testing()
include(GoogleTest)
add_subdirectory(tests)

add_library(example src/example.cpp src/example.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

