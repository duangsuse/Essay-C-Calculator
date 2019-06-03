cmake_minimum_required(VERSION 3.0)

project(simplecalc LANGUAGES C)

add_executable(simplecalc main.c)

install(TARGETS simplecalc RUNTIME DESTINATION bin)
