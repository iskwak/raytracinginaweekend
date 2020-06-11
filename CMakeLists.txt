cmake_minimum_required(VERSION 3.10)
project(raytracing)

# chapter 2
add_executable(02_outputimage 02_outputimage.cpp)

# chapter 3
include_directories(${CMAKE_SOURCE_DIR}/include)
file(GLOB ray_src ${CMAKE_SOURCE_DIR}/src/*.cpp)
file(GLOB ray_h ${CMAKE_SOURCE_DIR}/include/*.h)
add_library(raylib ${ray_src} ${ray_h})
add_executable(03_vec3 03_vec3.cpp)
target_link_libraries(03_vec3 raylib)

MESSAGE(${ray_h})
