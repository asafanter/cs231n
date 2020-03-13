cmake_minimum_required(VERSION 3.5)

file(GLOB SOURCE_FILES
	"*.h"
	"*.cpp")

add_executable(CSV-test ${SOURCE_FILES})
target_link_libraries(CSV-test CSV-lib)

