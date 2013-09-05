if (WITH_BINARY)

   include_directories(${LIB_INCLUDE_DIRS})
   link_directories(${LIB_LINK_DIRS})

   set(BINSRC
      main.c)

   add_executable(binary ${BINSRC})

   target_link_libraries(binary
      hello ${LIB_LINK_LIBS})

   install(TARGETS binary
      RUNTIME DESTINATION bin)
endif(WITH_BINARY)
