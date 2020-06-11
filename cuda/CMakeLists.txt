cmake_minimum_required(VERSION 3.10)
project(cuda_raytracing)

# option(USE_CUDA "Use CUDA" ON)
find_package(CUDA REQUIRED)

# Chapter 2
cuda_add_executable(02_cuda_outputimage 02_outputimage.cu)
