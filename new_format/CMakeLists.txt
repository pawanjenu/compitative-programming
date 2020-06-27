cmake_minimum_required(VERSION 3.16)
project(new_format)

set(CMAKE_CXX_STANDARD 20)

add_executable(sol leetcode/1221/solution.cpp)
set_target_properties(sol PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/leetcode/1221/")
