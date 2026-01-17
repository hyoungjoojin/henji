cmake_minimum_required(VERSION 4.2)

project(
  henji
  VERSION 0.1.0
  DESCRIPTION ""
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(henji_lib STATIC)
target_include_directories(henji_lib PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
)

add_subdirectory(src/henji)

add_executable(henji src/main.cpp)
target_link_libraries(henji PRIVATE henji_lib)
