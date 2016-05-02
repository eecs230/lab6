cmake_minimum_required(VERSION 3.3)
project(lab6 CXX)
include(.eecs230/CMakeLists.txt)

set(SOURCE_FILES
    src/main.cpp
    src/Student.cpp
    src/Student.h
    src/Catalog.cpp
    src/Catalog.h
    src/Enroll.cpp
    src/Enroll.h
    src/Course.cpp
    src/Course.h)
add_program(lab6 ${SOURCE_FILES})
