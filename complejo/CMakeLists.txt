cmake_minimum_required(VERSION 3.1)

project(fecha
    VERSION 1.0
    DESCRIPTION "Representation of Complex Numbers."
    LANGUAGES CXX)

add_executable(complejo
    src/complejo_main.cc
    src/complejo.h
    src/complejo.cc)