cmake_minimum_required(VERSION 3.9)
project(Float C)

set(CMAKE_C_STANDARD 99)

add_executable(Float main.c Float.c Float.h Tests.c Tests.h Double.c Double.h)