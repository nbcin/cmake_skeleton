# Don't compile edje themes if binary is not required
if(WITH_BINARY)

   find_program(EDJE_CC edje_cc)
   message(STATUS "Checking for edje_cc")
   if(EDJE_CC STREQUAL EDJE_CC-NOTFOUND)
      message(FATAL_ERROR "edje_cc not found")
   else()
      message(STATUS "  found ${EDJE_CC}")
   endif()

endif(WITH_BINARY)

