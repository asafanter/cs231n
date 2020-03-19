cmake_minimum_required(VERSION 3.5)

project(CS231n LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(CSV)
add_subdirectory(Image)
add_subdirectory(ImageIterator)
add_subdirectory(Classifier)
