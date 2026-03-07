cmake_minimum_required(VERSION 3.16)

# Set Project
project(Singletons VERSION 1.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)


# Executable
file(GLOB SOURCES_FILES ./*.cpp)
add_executable(${PROJECT_NAME} ${SOURCES_FILES})

# Library
add_library(${PROJECT_NAME}_lib STATIC ./Singletons.cpp)


