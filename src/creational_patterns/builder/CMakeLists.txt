cmake_minimum_required(VERSION 3.16)

project(Builder VERSION 1.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

# Executable
add_executable(${PROJECT_NAME} ./main.cpp)

# Library
add_library(${PROJECT_NAME}_lib ./builder.cpp)
# target_include_directories(${PROJECT_NAME} PRIVATE .)
target_link_libraries(${PROJECT_NAME} STATIC ${PROJECT_NAME}_lib )
