cmake_minimum_required(VERSION 2.8)
project(Hello C)

set(Hello_VERSION_MAJOR 0)
set(Hello_VERSION_MINOR 1)

set(CMAKE_COLOR_MAKEFILE ON)
set(CMAKE_VERBOSE_MAKEFILE OFF)

# Compiler configuration
add_definitions(-std=c99)
add_definitions(-Wall)
add_definitions(-W)
add_definitions(-g)
add_definitions(-Wshadow)
add_definitions(-Wmissing-declarations)

# Is it 64bits?
if (CMAKE_SIZEOF_VOID_P EQUAL 4)
   set(64_BIT_PLATFORM 0)
else()
   set(64_BIT_PLATFORM 1)
endif()

# Options
option(WITH_EXAMPLES "Include examples" ON)
option(WITH_BINARY "Include the binary program" ON)

add_subdirectory(lib)
add_subdirectory(examples)
add_subdirectory(bin)
