cmake_minimum_required(VERSION 3.6)
project(Homework_1)

set(extra_flags = -Wall -O3 -DNDEBUG -static -std=c99 -pipe -lm)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} $(extra_flags)")

set(SOURCE_FILES Problem_1.c Problem_2.c Problem_3.c Problem_4.c Problem_5.c Problem_6.c)
add_executable(Homework_1 ${SOURCE_FILES})