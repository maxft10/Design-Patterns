cmake_minimum_required(VERSION 3.16)

# Set Project
project(Design_Patterns VERSION 1.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Add subdirectories
add_subdirectory(src/creational_patterns/singleton)
add_subdirectory(src/creational_patterns/factory)
add_subdirectory(src/creational_patterns/builder)

# Executable
add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC Singletons_lib)
target_include_directories(${PROJECT_NAME} PUBLIC src/creational_patterns/singleton)





