cmake_minimum_required (VERSION 2.6)
project (computePower)

include_directories(
    ${CMAKE_SOURCE_DIR}/include/
)

add_executable(computePower
    src/main.cpp
    src/powercaltr.cpp
)

add_subdirectory(test)
add_subdirectory(include/googletest)
