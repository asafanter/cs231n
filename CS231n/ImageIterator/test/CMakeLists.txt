cmake_minimum_required(VERSION 3.5)

file(GLOB SOURCE_FILES
    "*.h"
    "*.cpp")

add_executable(ImageIterator-test ${SOURCE_FILES})
target_link_libraries(ImageIterator-test ImageIterator-lib)
