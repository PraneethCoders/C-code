cmake_minimum_required(VERSION 3.10)
project(C-code C)

# Set C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Collect all C source files from Basic directory
file(GLOB C_SOURCES 
    "Basic/*.c"
)

# Create separate executable for each C file
foreach(C_SOURCE ${C_SOURCES})
    # Get the filename without extension to use as executable name
    get_filename_component(EXECUTABLE_NAME ${C_SOURCE} NAME_WE)
    
    # Create executable for each source file
    add_executable(${EXECUTABLE_NAME} ${C_SOURCE})
    
    # Link math library only on Unix-like systems
    if(UNIX)
        target_link_libraries(${EXECUTABLE_NAME} PRIVATE m)
    endif()
    
    # Optional: Add to list for testing
    list(APPEND EXECUTABLES ${EXECUTABLE_NAME})
endforeach()

# Enable testing
enable_testing()

# Add tests for each executable (optional: run only the first one to avoid long test times)
list(LENGTH EXECUTABLES NUM_EXECUTABLES)
if(NUM_EXECUTABLES GREATER 0)
    # Run only the first executable as a quick test
    list(GET EXECUTABLES 0 FIRST_EXECUTABLE)
    add_test(NAME BasicTest COMMAND ${FIRST_EXECUTABLE})
endif()
