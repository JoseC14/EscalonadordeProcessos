# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Escalonador_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Escalonador_autogen.dir\\ParseCache.txt"
  "Escalonador_autogen"
  )
endif()
