set(BUILD_SHARED_LIBS true)

set(LIBSRC
   hello.c)

include_directories(${EINA_INCLUDE_DIRS})
link_directories(${EINA_LIBRARY_DIRS})

add_library(hello SHARED ${LIBSRC})

target_link_libraries(hello ${LIB_LINK_LIBS})

install(TARGETS hello
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib/static)

install(FILES hello.h DESTINATION include)

