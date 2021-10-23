cmake_minimum_required(VERSION 3.19)
project(27.4 VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)

set(INCLUDE_FOLDER ${CMAKE_SOURCE_DIR}/include)
set(CLASS_FOLDER ${CMAKE_SOURCE_DIR}include/classes)
set(HEADLINES_FOLDER ${CMAKE_SOURCE_DIR}include/Headlines)

add_subdirectory(src)