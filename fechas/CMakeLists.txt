cmake_minimum_required(VERSION 3.1)

project(fecha
    VERSION 1.0
    DESCRIPTION "Allows to represent dates and modify it."
    LANGUAGES CXX)

add_executable(fecha
    src/fecha.cc
    src/fecha.h
    src/fechas.cc
    src/tools.cc
    src/tools.h)