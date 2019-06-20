cmake_minimum_required(VERSION 2.8.3)
project(libelas_catkin)
set(CMAKE_BUILD_TYPE Release)

# use sse3 instruction set
add_definitions(-msse3)

find_package(catkin_simple REQUIRED)

catkin_simple()

cs_add_library(libelas_catkin src/descriptor.cpp src/elas.cpp src/filter.cpp src/matrix.cpp src/triangle.cpp)

cs_install()

cs_export()
