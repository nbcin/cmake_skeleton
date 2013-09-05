if (WITH_EXAMPLES)
   include_directories(${Hello_SOURCE_DIR}/lib)
   link_directories(${Hello_BINARY_DIR}/lib)

   set(EXSRC
      test.c)

   add_executable(test ${EXSRC})

   target_link_libraries(test hello)

   install(TARGETS test
      RUNTIME DESTINATION bin)
endif(WITH_EXAMPLES)

