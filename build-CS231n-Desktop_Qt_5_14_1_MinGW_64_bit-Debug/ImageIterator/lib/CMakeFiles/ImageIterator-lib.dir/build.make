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
include ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/depend.make

# Include the progress variables for this target.
include ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/progress.make

# Include the compile flags for this target's objects.
include ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/flags.make

ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/ImageIterator.cpp.obj: ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/flags.make
ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/ImageIterator.cpp.obj: ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/includes_CXX.rsp
ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/ImageIterator.cpp.obj: C:/Users/asafa/Desktop/anter/projects/CS231n/ImageIterator/lib/ImageIterator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/ImageIterator.cpp.obj"
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\lib && C:\Qt\Tools\mingw730_64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ImageIterator-lib.dir\ImageIterator.cpp.obj -c C:\Users\asafa\Desktop\anter\projects\CS231n\ImageIterator\lib\ImageIterator.cpp

ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/ImageIterator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ImageIterator-lib.dir/ImageIterator.cpp.i"
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\lib && C:\Qt\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\asafa\Desktop\anter\projects\CS231n\ImageIterator\lib\ImageIterator.cpp > CMakeFiles\ImageIterator-lib.dir\ImageIterator.cpp.i

ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/ImageIterator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ImageIterator-lib.dir/ImageIterator.cpp.s"
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\lib && C:\Qt\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\asafa\Desktop\anter\projects\CS231n\ImageIterator\lib\ImageIterator.cpp -o CMakeFiles\ImageIterator-lib.dir\ImageIterator.cpp.s

# Object files for target ImageIterator-lib
ImageIterator__lib_OBJECTS = \
"CMakeFiles/ImageIterator-lib.dir/ImageIterator.cpp.obj"

# External object files for target ImageIterator-lib
ImageIterator__lib_EXTERNAL_OBJECTS =

ImageIterator/lib/libImageIterator-lib.a: ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/ImageIterator.cpp.obj
ImageIterator/lib/libImageIterator-lib.a: ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/build.make
ImageIterator/lib/libImageIterator-lib.a: ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libImageIterator-lib.a"
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\lib && $(CMAKE_COMMAND) -P CMakeFiles\ImageIterator-lib.dir\cmake_clean_target.cmake
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ImageIterator-lib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/build: ImageIterator/lib/libImageIterator-lib.a

.PHONY : ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/build

ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/clean:
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\lib && $(CMAKE_COMMAND) -P CMakeFiles\ImageIterator-lib.dir\cmake_clean.cmake
.PHONY : ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/clean

ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\asafa\Desktop\anter\projects\CS231n C:\Users\asafa\Desktop\anter\projects\CS231n\ImageIterator\lib C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\lib C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\ImageIterator\lib\CMakeFiles\ImageIterator-lib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : ImageIterator/lib/CMakeFiles/ImageIterator-lib.dir/depend

