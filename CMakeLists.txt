cmake_minimum_required(VERSION 3.12)
project(LCA)

set(CMAKE_CXX_STANDARD 14)
include_directories(array/include)
add_executable(LCA main.cpp array/include/array.h array/src/array.cc array/include/list_types.h array/src/list_types.cc array/include/string_type.h array/src/string_type.cc)