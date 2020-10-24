cmake_minimum_required(VERSION 3.17)
project(Dynamic_prog)

set(CMAKE_CXX_STANDARD 14)

add_executable(Dynamic_prog main.cpp)


add_executable(solution "n queens/solution.cpp")
set_target_properties(solution PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/n queens/")
