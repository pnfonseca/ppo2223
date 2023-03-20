cmake_minimum_required(VERSION 3.23)
project(P_05)

set(CMAKE_CXX_STANDARD 17)

add_executable(PointTest PointTest.cpp Point.cpp Point.h)

add_executable(FigureTest FigureTest.cpp Point.cpp Point.h Figure.cpp Figure.h)

add_executable(CircleTest CircleTest.cpp Point.cpp Point.h Figure.cpp Figure.h Circle.cpp Circle.h)

add_executable(RectTest Point.cpp Point.h Figure.cpp Figure.h Rectangle.cpp Rectangle.h RectTest.cpp)