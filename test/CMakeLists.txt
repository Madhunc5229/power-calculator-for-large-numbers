cmake_minimum_required (VERSION 2.6)
set(GTEST_SHUFFLE 1)

include_directories(
    ${CMAKE_SOURCE_DIR}/include/
)
add_executable(unittest
    main.cpp
    ../src/powercaltr.cpp
    unitest.cpp
)

target_link_libraries(unittest
    PUBLIC gtest
)
