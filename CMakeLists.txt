cmake_minimum_required(VERSION 3.30)

# Project Definition
project(
    CppTemplate
    VERSION 1.0
    LANGUAGES CXX
)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add subdirectories for source and tests
add_subdirectory(app)
add_subdirectory(core)
add_subdirectory(tests)