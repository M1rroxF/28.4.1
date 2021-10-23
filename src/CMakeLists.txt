cmake_minimum_required(VERSION 3.19)

add_executable(27.4 main.cpp
        ${INCLUDE_FOLDER}/Tree.h
        ${INCLUDE_FOLDER}/Home.h)

target_include_directories(27.4 PUBLIC ${INCLUDE_FOLDER})
target_include_directories(27.4 PUBLIC ${CLASS_FOLDER})