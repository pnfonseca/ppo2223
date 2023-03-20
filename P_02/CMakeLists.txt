cmake_minimum_required(VERSION 3.0)

project(ex01)

add_executable(ex01 ex01.cpp User.cpp User.h Book.cpp Book.h Library.cpp Library.h)
add_executable(tbook Book.cpp Book.h)

add_executable(testLibrary testLibrary.cpp User.cpp User.h Book.h Book.cpp Library.cpp Library.h)