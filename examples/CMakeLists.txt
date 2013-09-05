if (WITH_EXAMPLES)
   include_directories(${LIB_INCLUDE_DIRS})
   link_directories(${LIB_LINK_DIRS})

   set(EXSRC
      test.c)

   add_executable(test ${EXSRC})

   target_link_libraries(test
      hello ${LIB_LINK_LIBS})

   install(TARGETS test
      RUNTIME DESTINATION bin)
endif(WITH_EXAMPLES)

