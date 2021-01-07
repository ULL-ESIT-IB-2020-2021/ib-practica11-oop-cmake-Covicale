cmake_minimum_required(VERSION 3.1)

project(racional
    VERSION 1.0
    DESCRIPTION "Allows to represent dates and modify it."
    LANGUAGES CXX)

add_executable(racional
    src/racional.cc
    src/racional.h
    src/racional_main.cc
    src/tools.cc
    src/tools.h)