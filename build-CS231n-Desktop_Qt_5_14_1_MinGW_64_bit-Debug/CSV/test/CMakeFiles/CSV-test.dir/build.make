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
include CSV/test/CMakeFiles/CSV-test.dir/depend.make

# Include the progress variables for this target.
include CSV/test/CMakeFiles/CSV-test.dir/progress.make

# Include the compile flags for this target's objects.
include CSV/test/CMakeFiles/CSV-test.dir/flags.make

CSV/test/CMakeFiles/CSV-test.dir/main.cpp.obj: CSV/test/CMakeFiles/CSV-test.dir/flags.make
CSV/test/CMakeFiles/CSV-test.dir/main.cpp.obj: CSV/test/CMakeFiles/CSV-test.dir/includes_CXX.rsp
CSV/test/CMakeFiles/CSV-test.dir/main.cpp.obj: C:/Users/asafa/Desktop/anter/projects/CS231n/CSV/test/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CSV/test/CMakeFiles/CSV-test.dir/main.cpp.obj"
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\CSV\test && C:\Qt\Tools\mingw730_64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CSV-test.dir\main.cpp.obj -c C:\Users\asafa\Desktop\anter\projects\CS231n\CSV\test\main.cpp

CSV/test/CMakeFiles/CSV-test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSV-test.dir/main.cpp.i"
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\CSV\test && C:\Qt\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\asafa\Desktop\anter\projects\CS231n\CSV\test\main.cpp > CMakeFiles\CSV-test.dir\main.cpp.i

CSV/test/CMakeFiles/CSV-test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSV-test.dir/main.cpp.s"
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\CSV\test && C:\Qt\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\asafa\Desktop\anter\projects\CS231n\CSV\test\main.cpp -o CMakeFiles\CSV-test.dir\main.cpp.s

# Object files for target CSV-test
CSV__test_OBJECTS = \
"CMakeFiles/CSV-test.dir/main.cpp.obj"

# External object files for target CSV-test
CSV__test_EXTERNAL_OBJECTS =

CSV/test/CSV-test.exe: CSV/test/CMakeFiles/CSV-test.dir/main.cpp.obj
CSV/test/CSV-test.exe: CSV/test/CMakeFiles/CSV-test.dir/build.make
CSV/test/CSV-test.exe: CSV/lib/libCSV-lib.a
CSV/test/CSV-test.exe: CSV/test/CMakeFiles/CSV-test.dir/linklibs.rsp
CSV/test/CSV-test.exe: CSV/test/CMakeFiles/CSV-test.dir/objects1.rsp
CSV/test/CSV-test.exe: CSV/test/CMakeFiles/CSV-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CSV-test.exe"
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\CSV\test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CSV-test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CSV/test/CMakeFiles/CSV-test.dir/build: CSV/test/CSV-test.exe

.PHONY : CSV/test/CMakeFiles/CSV-test.dir/build

CSV/test/CMakeFiles/CSV-test.dir/clean:
	cd /d C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\CSV\test && $(CMAKE_COMMAND) -P CMakeFiles\CSV-test.dir\cmake_clean.cmake
.PHONY : CSV/test/CMakeFiles/CSV-test.dir/clean

CSV/test/CMakeFiles/CSV-test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\asafa\Desktop\anter\projects\CS231n C:\Users\asafa\Desktop\anter\projects\CS231n\CSV\test C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\CSV\test C:\Users\asafa\Desktop\anter\projects\build-CS231n-Desktop_Qt_5_14_1_MinGW_64_bit-Debug\CSV\test\CMakeFiles\CSV-test.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CSV/test/CMakeFiles/CSV-test.dir/depend

