cmake_minimum_required(VERSION 3.19)

project(spotify-fltk LANGUAGES CXX)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Glob source files
file(GLOB MAIN_SRC "src/*.[hc]pp")

add_executable(spotify-fltk ${MAIN_SRC})

set(FLTK_BUILD_TEST OFF)
set(OPTION_USE_SVG ON)
add_subdirectory(fltk)
include_directories(fltk)

target_link_libraries(spotify-fltk PRIVATE fltk fltk_images)