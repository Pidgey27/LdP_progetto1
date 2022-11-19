cmake_minimum_required(VERSION 3.23)
project(LdP_progetto1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(LdP_progetto1
        Book.h
        Date.h
        Book.cpp
        Date.cpp
        main.cpp)
