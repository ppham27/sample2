project(sample2)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_subdirectory(src)


enable_testing()
add_subdirectory(test)
add_test(sample2Test test/bin/sample2_unittest)
