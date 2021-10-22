cmake_minimum_required(VERSION 3.19)

add_executable(26.4 main.cpp
        ${INCLUDE_FOLDER}/Phone.h)
target_include_directories(26.4 PUBLIC ${INCLUDE_FOLDER})