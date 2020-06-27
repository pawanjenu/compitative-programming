cmake_minimum_required(VERSION 3.16)
project(cses)

set(CMAKE_CXX_STANDARD 20)

add_executable(solution Dynamic_Programming/temphk2/solution.cpp)
set_target_properties(solution PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Programming/temphk2/")
