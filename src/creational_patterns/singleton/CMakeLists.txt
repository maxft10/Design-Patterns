cmake_minimum_required(VERSION 3.16)

# Set Project
project(Singletons VERSION 1.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

# Executable
add_executable(${PROJECT_NAME} ./main.cpp)

# Library
add_library(${PROJECT_NAME}_lib STATIC ./Singletons.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC ${PROJECT_NAME}_lib)

