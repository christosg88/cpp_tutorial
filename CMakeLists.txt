cmake_minimum_required(VERSION 3.16)
project(cpp_tutorial)

add_library(vector_math src/vector_math.cpp src/vector_helpers.cpp)
target_include_directories(vector_math PRIVATE include)

add_executable(main src/main.cpp)
target_include_directories(main PRIVATE include)
target_link_libraries(main vector_math)

install(TARGETS main vector_math
  RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin
  ARCHIVE DESTINATION ${CMAKE_SOURCE_DIR}/lib
)

