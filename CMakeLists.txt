cmake_minimum_required(VERSION 4.1)
project(Student_Record_Manager_Project)

set(CMAKE_CXX_STANDARD 20)

add_executable(Student_Record_Manager_Project main.cpp
        Student.cpp
        Student.h
        StudentManager.cpp
        StudentManager.h)
