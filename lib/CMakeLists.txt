set(BUILD_SHARED_LIBS true)

set(LIBSRC
   hello.c)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/hello_config.h.in
   ${CMAKE_CURRENT_BINARY_DIR}/hello_config.h)

include_directories(${EINA_INCLUDE_DIRS}
   ${CMAKE_CURRENT_BINARY_DIR})

link_directories(${EINA_LIBRARY_DIRS})

add_library(hello SHARED ${LIBSRC})

target_link_libraries(hello ${LIB_LINK_LIBS})

# Pkg-config lib support
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/hello.pc.in
   ${CMAKE_CURRENT_BINARY_DIR}/hello.pc @ONLY)

install(TARGETS hello
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib/static)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/hello.h DESTINATION include)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/hello.pc DESTINATION lib/pkgconfig)

