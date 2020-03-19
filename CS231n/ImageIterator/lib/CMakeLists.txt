cmake_minimum_required(VERSION 3.5)

file(GLOB SOURCE_FILES
    "*.h"
    "*.cpp")

add_library(ImageIterator-lib ${SOURCE_FILES})
target_link_libraries(ImageIterator-lib Image-lib)
target_include_directories(ImageIterator-lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
