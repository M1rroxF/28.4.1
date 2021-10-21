cmake_minimum_required(VERSION 3.19)

add_executable(25_4 main.cpp ${INCLUDE_FOLDER}/music.h ${INCLUDE_FOLDER}/Tracks.h)
target_include_directories(25_4 PUBLIC ${INCLUDE_FOLDER})