# Creating static library
add_library(Core STATIC src/core.cpp)
# Include is marked public to access via app
target_include_directories(Core PUBLIC include)