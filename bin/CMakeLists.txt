if (WITH_BINARY)

   include_directories(${Hello_SOURCE_DIR}/lib)
   link_directories(${Hello_BINARY_DIR}/lib)

   set(BINSRC
      main.c)

   add_executable(binary ${BINSRC})

   target_link_libraries(binary hello)

   install(TARGETS binary
      RUNTIME DESTINATION bin)
endif(WITH_BINARY)
