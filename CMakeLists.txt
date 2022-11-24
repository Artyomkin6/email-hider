cmake_minimum_required(VERSION 3.14)
project(project)

set(CMAKE_CXX_STANDARD 17)

add_library(editor STATIC editor.cpp)

add_executable(main main.cpp)

target_link_libraries(main editor)