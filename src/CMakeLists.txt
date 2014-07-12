
include_directories(${sample2_SOURCE_DIR}/include)
add_executable(sample2-bin main.cpp)
add_library(sample2 sample2.cpp)
target_link_libraries(sample2-bin sample2)
set_target_properties(sample2-bin PROPERTIES OUTPUT_NAME sample2)
