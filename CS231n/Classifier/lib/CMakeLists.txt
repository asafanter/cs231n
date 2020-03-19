cmake_minimum_required(VERSION 3.5)

file(GLOB SOURCE_FILES
    "*.h"
    "*.cpp")

add_library(Classifier-lib ${SOURCE_FILES})
target_include_directories(Classifier-lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Classifier-lib Image-lib)
