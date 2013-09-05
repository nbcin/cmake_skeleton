set(BUILD_SHARED_LIBS true)

set(LIBSRC
   hello.c)

add_library(hello SHARED ${LIBSRC})

install(TARGETS hello
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib/static)

install(FILES hello.h DESTINATION include)

