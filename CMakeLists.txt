cmake_minimum_required(VERSION 3.16)
project(online_coding)

set(CMAKE_CXX_STANDARD 20)
include_directories(new_format/*)
add_executable(fibo fibo.cpp)
set_target_properties(fibo PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/")
add_executable(solution 11/solution.cpp)
set_target_properties(solution PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/11/")
