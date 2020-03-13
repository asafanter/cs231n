cmake_minimum_required(VERSION 3.5)

file(GLOB SOURCE_FILES
    "*.h"
    "*.cpp")

add_library(CSV-lib ${SOURCE_FILES})

