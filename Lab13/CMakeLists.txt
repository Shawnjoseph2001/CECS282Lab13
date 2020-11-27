cmake_minimum_required(VERSION 3.19)
project(Lab13)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab13 main.cpp pointType.h PointTypeImp.cpp circleType.h circleTypeImp.cpp cylinderType.h cylinderType.cpp)