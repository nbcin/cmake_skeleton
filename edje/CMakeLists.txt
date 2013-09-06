# Don't compile edje themes if binary is not required
if(WITH_BINARY)

   find_program(EDJE_CC edje_cc)
   message(STATUS "Checking for edje_cc")
   if(EDJE_CC STREQUAL EDJE_CC-NOTFOUND)
      message(FATAL_ERROR "edje_cc not found")
   else()
      message(STATUS "  found ${EDJE_CC}")
   endif()

   set(EDJE_FLAGS -v -id ${CMAKE_CURRENT_SOURCE_DIR} -fd ${CMAKE_CURRENT_SOURCE_DIR})
   set(EDJE ${EDJE_CC} ${EDJE_FLAGS})

   add_custom_target(edje
      ${EDJE} ${CMAKE_CURRENT_SOURCE_DIR}/default.edc ${CMAKE_CURRENT_BINARY_DIR}/default.edj
      COMMENT "Compiling Edje themes..."
      )

endif(WITH_BINARY)

