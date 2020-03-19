cmake_minimum_required(VERSION 3.5)

file(GLOB SOURCE_FILES
    "*.h"
    "*.cpp")

add_executable(Classifier-test ${SOURCE_FILES})
target_link_libraries(Classifier-test Classifier-lib ImageIterator-lib)
