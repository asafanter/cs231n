cmake_minimum_required(VERSION 3.5)

file(GLOB SOURCE_FILES
    "*.h"
    "*.cpp")

add_library(Image-lib ${SOURCE_FILES})

target_link_libraries(Image-lib
    "C:/Users/asafa/Desktop/OpenCv/build_minGw/bin/libopencv_calib3d420.dll"
    "C:/Users/asafa/Desktop/OpenCv/build_minGw/bin/libopencv_core420.dll"
    "C:/Users/asafa/Desktop/OpenCv/build_minGw/bin/libopencv_highgui420.dll"
    "C:/Users/asafa/Desktop/OpenCv/build_minGw/bin/libopencv_imgcodecs420.dll"
    "C:/Users/asafa/Desktop/OpenCv/build_minGw/bin/libopencv_imgproc420.dll")

target_include_directories(Image-lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    "C:/Users/asafa/Desktop/OpenCv/build_minGw/install/include/")
