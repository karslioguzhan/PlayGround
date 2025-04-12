# Enable testing
enable_testing()

# Fetch GoogleTest
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.14.0 
)

# Disable GoogleMock
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE) 
# Don't install GTest
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE) 
FetchContent_MakeAvailable(googletest)

# Add the test executable
add_executable(test_app test_app.cpp)

# Link the Core library and GoogleTest
target_link_libraries(test_app PRIVATE Core gtest)

# Register tests
add_test(NAME CoreTests COMMAND test_app)