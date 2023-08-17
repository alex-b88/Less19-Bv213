cmake_minimum_required(VERSION 3.26)
project(Less19_Bv213)

set(CMAKE_CXX_STANDARD 14)

include_directories(Less19-Bv213)

add_executable(Less19_Bv213
        Less19-Bv213/Department.cpp
        Less19-Bv213/Department.h
        Less19-Bv213/Employee.cpp
        Less19-Bv213/Employee.h
        Less19-Bv213/Less19-Bv213.cpp
        Less19-Bv213/Outstaff.cpp
        Less19-Bv213/Outstaff.h
        Less19-Bv213/Staff.cpp
        Less19-Bv213/Staff.h)
