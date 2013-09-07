# Don't compile edje themes if binary is not required
if(WITH_BINARY)

   configure_file(${CMAKE_CURRENT_SOURCE_DIR}/hello.desktop.in
      ${CMAKE_CURRENT_BINARY_DIR}/hello.desktop @ONLY)

   install(FILES ${CMAKE_CURRENT_BINARY_DIR}/hello.desktop DESTINATION share/applications)
   install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/icon.png DESTINATION share/hello)

endif(WITH_BINARY)

