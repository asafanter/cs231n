# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Qt\Tools\CMake_64\bin\cmake.exe

# The command to remove a file.
RM = C:\Qt\Tools\CMake_64\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\asafa\Desktop\anter\projects\CS231n

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug

# Include any dependencies generated for this target.
include ImageIterator/test/CMakeFiles/ImageIterator-test.dir/depend.make

# Include the progress variables for this target.
include ImageIterator/test/CMakeFiles/ImageIterator-test.dir/progress.make

# Include the compile flags for this target's objects.
include ImageIterator/test/CMakeFiles/ImageIterator-test.dir/flags.make

ImageIterator/test/CMakeFiles/ImageIterator-test.dir/main.cpp.obj: ImageIterator/test/CMakeFiles/ImageIterator-test.dir/flags.make
ImageIterator/test/CMakeFiles/ImageIterator-test.dir/main.cpp.obj: ImageIterator/test/CMakeFiles/ImageIterator-test.dir/includes_CXX.rsp
ImageIterator/test/CMakeFiles/ImageIterator-test.dir/main.cpp.obj: C:/Users/asafa/Desktop/anter/projects/CS231n/ImageIterator/test/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object ImageIterator/test/CMakeFiles/ImageIterator-test.dir/main.cpp.obj"
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\test && C:\Qt\Tools\mingw730_64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ImageIterator-test.dir\main.cpp.obj -c C:\Users\asafa\Desktop\anter\projects\CS231n\ImageIterator\test\main.cpp

ImageIterator/test/CMakeFiles/ImageIterator-test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImageIterator-test.dir/main.cpp.i"
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\test && C:\Qt\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\asafa\Desktop\anter\projects\CS231n\ImageIterator\test\main.cpp > CMakeFiles\ImageIterator-test.dir\main.cpp.i

ImageIterator/test/CMakeFiles/ImageIterator-test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImageIterator-test.dir/main.cpp.s"
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\test && C:\Qt\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\asafa\Desktop\anter\projects\CS231n\ImageIterator\test\main.cpp -o CMakeFiles\ImageIterator-test.dir\main.cpp.s

# Object files for target ImageIterator-test
ImageIterator__test_OBJECTS = \
"CMakeFiles/ImageIterator-test.dir/main.cpp.obj"

# External object files for target ImageIterator-test
ImageIterator__test_EXTERNAL_OBJECTS =

ImageIterator/test/ImageIterator-test.exe: ImageIterator/test/CMakeFiles/ImageIterator-test.dir/main.cpp.obj
ImageIterator/test/ImageIterator-test.exe: ImageIterator/test/CMakeFiles/ImageIterator-test.dir/build.make
ImageIterator/test/ImageIterator-test.exe: ImageIterator/lib/libImageIterator-lib.a
ImageIterator/test/ImageIterator-test.exe: Image/lib/libImage-lib.a
ImageIterator/test/ImageIterator-test.exe: C:/Users/asafa/Desktop/OpenCv/build_minGw/bin/libopencv_calib3d420.dll
ImageIterator/test/ImageIterator-test.exe: C:/Users/asafa/Desktop/OpenCv/build_minGw/bin/libopencv_core420.dll
ImageIterator/test/ImageIterator-test.exe: C:/Users/asafa/Desktop/OpenCv/build_minGw/bin/libopencv_highgui420.dll
ImageIterator/test/ImageIterator-test.exe: C:/Users/asafa/Desktop/OpenCv/build_minGw/bin/libopencv_imgcodecs420.dll
ImageIterator/test/ImageIterator-test.exe: C:/Users/asafa/Desktop/OpenCv/build_minGw/bin/libopencv_imgproc420.dll
ImageIterator/test/ImageIterator-test.exe: ImageIterator/test/CMakeFiles/ImageIterator-test.dir/linklibs.rsp
ImageIterator/test/ImageIterator-test.exe: ImageIterator/test/CMakeFiles/ImageIterator-test.dir/objects1.rsp
ImageIterator/test/ImageIterator-test.exe: ImageIterator/test/CMakeFiles/ImageIterator-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ImageIterator-test.exe"
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ImageIterator-test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ImageIterator/test/CMakeFiles/ImageIterator-test.dir/build: ImageIterator/test/ImageIterator-test.exe

.PHONY : ImageIterator/test/CMakeFiles/ImageIterator-test.dir/build

ImageIterator/test/CMakeFiles/ImageIterator-test.dir/clean:
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\test && $(CMAKE_COMMAND) -P CMakeFiles\ImageIterator-test.dir\cmake_clean.cmake
.PHONY : ImageIterator/test/CMakeFiles/ImageIterator-test.dir/clean

ImageIterator/test/CMakeFiles/ImageIterator-test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\asafa\Desktop\anter\projects\CS231n C:\Users\asafa\Desktop\anter\projects\CS231n\ImageIterator\test C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\test C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\test\CMakeFiles\ImageIterator-test.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : ImageIterator/test/CMakeFiles/ImageIterator-test.dir/depend
