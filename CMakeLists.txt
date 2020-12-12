cmake_minimum_required(VERSION 3.19)
project(spotify-fltk)

# C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Glob source files
file(GLOB MAIN_SRC "src/*.[hc]pp")

add_executable(spotify-fltk ${MAIN_SRC})

set(FLTK_BUILD_TEST OFF)
add_subdirectory(fltk)

target_link_libraries(spotify-fltk PRIVATE fltk)
include_directories(fltk)