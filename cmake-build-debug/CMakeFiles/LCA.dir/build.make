# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/cloudlz/Codes/LCA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/cloudlz/Codes/LCA/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LCA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LCA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LCA.dir/flags.make

CMakeFiles/LCA.dir/main.cpp.o: CMakeFiles/LCA.dir/flags.make
CMakeFiles/LCA.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cloudlz/Codes/LCA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LCA.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LCA.dir/main.cpp.o -c /Users/cloudlz/Codes/LCA/main.cpp

CMakeFiles/LCA.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LCA.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cloudlz/Codes/LCA/main.cpp > CMakeFiles/LCA.dir/main.cpp.i

CMakeFiles/LCA.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LCA.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cloudlz/Codes/LCA/main.cpp -o CMakeFiles/LCA.dir/main.cpp.s

CMakeFiles/LCA.dir/array/src/array.cc.o: CMakeFiles/LCA.dir/flags.make
CMakeFiles/LCA.dir/array/src/array.cc.o: ../array/src/array.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cloudlz/Codes/LCA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LCA.dir/array/src/array.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LCA.dir/array/src/array.cc.o -c /Users/cloudlz/Codes/LCA/array/src/array.cc

CMakeFiles/LCA.dir/array/src/array.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LCA.dir/array/src/array.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cloudlz/Codes/LCA/array/src/array.cc > CMakeFiles/LCA.dir/array/src/array.cc.i

CMakeFiles/LCA.dir/array/src/array.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LCA.dir/array/src/array.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cloudlz/Codes/LCA/array/src/array.cc -o CMakeFiles/LCA.dir/array/src/array.cc.s

CMakeFiles/LCA.dir/array/src/list_types.cc.o: CMakeFiles/LCA.dir/flags.make
CMakeFiles/LCA.dir/array/src/list_types.cc.o: ../array/src/list_types.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cloudlz/Codes/LCA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LCA.dir/array/src/list_types.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LCA.dir/array/src/list_types.cc.o -c /Users/cloudlz/Codes/LCA/array/src/list_types.cc

CMakeFiles/LCA.dir/array/src/list_types.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LCA.dir/array/src/list_types.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cloudlz/Codes/LCA/array/src/list_types.cc > CMakeFiles/LCA.dir/array/src/list_types.cc.i

CMakeFiles/LCA.dir/array/src/list_types.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LCA.dir/array/src/list_types.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cloudlz/Codes/LCA/array/src/list_types.cc -o CMakeFiles/LCA.dir/array/src/list_types.cc.s

CMakeFiles/LCA.dir/array/src/string_type.cc.o: CMakeFiles/LCA.dir/flags.make
CMakeFiles/LCA.dir/array/src/string_type.cc.o: ../array/src/string_type.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cloudlz/Codes/LCA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/LCA.dir/array/src/string_type.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LCA.dir/array/src/string_type.cc.o -c /Users/cloudlz/Codes/LCA/array/src/string_type.cc

CMakeFiles/LCA.dir/array/src/string_type.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LCA.dir/array/src/string_type.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cloudlz/Codes/LCA/array/src/string_type.cc > CMakeFiles/LCA.dir/array/src/string_type.cc.i

CMakeFiles/LCA.dir/array/src/string_type.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LCA.dir/array/src/string_type.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cloudlz/Codes/LCA/array/src/string_type.cc -o CMakeFiles/LCA.dir/array/src/string_type.cc.s

# Object files for target LCA
LCA_OBJECTS = \
"CMakeFiles/LCA.dir/main.cpp.o" \
"CMakeFiles/LCA.dir/array/src/array.cc.o" \
"CMakeFiles/LCA.dir/array/src/list_types.cc.o" \
"CMakeFiles/LCA.dir/array/src/string_type.cc.o"

# External object files for target LCA
LCA_EXTERNAL_OBJECTS =

LCA: CMakeFiles/LCA.dir/main.cpp.o
LCA: CMakeFiles/LCA.dir/array/src/array.cc.o
LCA: CMakeFiles/LCA.dir/array/src/list_types.cc.o
LCA: CMakeFiles/LCA.dir/array/src/string_type.cc.o
LCA: CMakeFiles/LCA.dir/build.make
LCA: CMakeFiles/LCA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/cloudlz/Codes/LCA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable LCA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LCA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LCA.dir/build: LCA

.PHONY : CMakeFiles/LCA.dir/build

CMakeFiles/LCA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LCA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LCA.dir/clean

CMakeFiles/LCA.dir/depend:
	cd /Users/cloudlz/Codes/LCA/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/cloudlz/Codes/LCA /Users/cloudlz/Codes/LCA /Users/cloudlz/Codes/LCA/cmake-build-debug /Users/cloudlz/Codes/LCA/cmake-build-debug /Users/cloudlz/Codes/LCA/cmake-build-debug/CMakeFiles/LCA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LCA.dir/depend

