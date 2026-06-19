
add_executable (bez1lab "orekhva2.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET bez1lab PROPERTY CXX_STANDARD 20)
endif()
