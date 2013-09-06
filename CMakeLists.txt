cmake_minimum_required(VERSION 2.8)
project(hello C)

set(PROJECT_DESCRIPTION "A wonderful description")
set(PROJECT_URL "http://jeanguyomarch.github.io/cmake_skeleton/")

set(hello_VERSION_MAJOR 0)
set(hello_VERSION_MINOR 1)

set(CMAKE_COLOR_MAKEFILE ON)
set(CMAKE_VERBOSE_MAKEFILE OFF)

# Compiler configuration
add_definitions(-std=c99)
add_definitions(-Wall)
add_definitions(-W)
add_definitions(-g)
add_definitions(-Wshadow)
add_definitions(-Wmissing-declarations)

# Check external libraries
find_package(PkgConfig)
pkg_check_modules(EINA REQUIRED eina)

set(LIB_INCLUDE_DIRS
   ${EINA_INCLUDE_DIRS}
   ${hello_SOURCE_DIR}/lib
   )

set(LIB_LINK_DIRS
   ${EINA_LIBRARY_DIRS}
   ${hello_BINARY_DIR}/lib
   )

set(LIB_LINK_LIBS
   ${EINA_LIBRARIES}
   )

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
add_subdirectory(doc)
add_subdirectory(edje)

