cmake_minimum_required(VERSION 3.5)

file(GLOB SOURCE_FILES
    "*.h"
    "*.cpp")

add_executable(Image-test ${SOURCE_FILES})
target_link_libraries(Image-test Image-lib)

