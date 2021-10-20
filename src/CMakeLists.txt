cmake_minimum_required(VERSION 3.19)

add_executable(25_4 main.cpp ${main_folder}/all_functions.h surgeon.cpp standard.cpp)
target_include_directories(25_4 PUBLIC ${main_folder})