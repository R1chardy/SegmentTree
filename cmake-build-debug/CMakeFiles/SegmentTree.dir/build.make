# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/yuanr/CLionProjects/SegmentTree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/yuanr/CLionProjects/SegmentTree/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SegmentTree.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SegmentTree.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SegmentTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SegmentTree.dir/flags.make

CMakeFiles/SegmentTree.dir/main.cpp.o: CMakeFiles/SegmentTree.dir/flags.make
CMakeFiles/SegmentTree.dir/main.cpp.o: /mnt/c/Users/yuanr/CLionProjects/SegmentTree/main.cpp
CMakeFiles/SegmentTree.dir/main.cpp.o: CMakeFiles/SegmentTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/yuanr/CLionProjects/SegmentTree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SegmentTree.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SegmentTree.dir/main.cpp.o -MF CMakeFiles/SegmentTree.dir/main.cpp.o.d -o CMakeFiles/SegmentTree.dir/main.cpp.o -c /mnt/c/Users/yuanr/CLionProjects/SegmentTree/main.cpp

CMakeFiles/SegmentTree.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SegmentTree.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/yuanr/CLionProjects/SegmentTree/main.cpp > CMakeFiles/SegmentTree.dir/main.cpp.i

CMakeFiles/SegmentTree.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SegmentTree.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/yuanr/CLionProjects/SegmentTree/main.cpp -o CMakeFiles/SegmentTree.dir/main.cpp.s

CMakeFiles/SegmentTree.dir/SegmentTree.cpp.o: CMakeFiles/SegmentTree.dir/flags.make
CMakeFiles/SegmentTree.dir/SegmentTree.cpp.o: /mnt/c/Users/yuanr/CLionProjects/SegmentTree/SegmentTree.cpp
CMakeFiles/SegmentTree.dir/SegmentTree.cpp.o: CMakeFiles/SegmentTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/yuanr/CLionProjects/SegmentTree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SegmentTree.dir/SegmentTree.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SegmentTree.dir/SegmentTree.cpp.o -MF CMakeFiles/SegmentTree.dir/SegmentTree.cpp.o.d -o CMakeFiles/SegmentTree.dir/SegmentTree.cpp.o -c /mnt/c/Users/yuanr/CLionProjects/SegmentTree/SegmentTree.cpp

CMakeFiles/SegmentTree.dir/SegmentTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SegmentTree.dir/SegmentTree.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/yuanr/CLionProjects/SegmentTree/SegmentTree.cpp > CMakeFiles/SegmentTree.dir/SegmentTree.cpp.i

CMakeFiles/SegmentTree.dir/SegmentTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SegmentTree.dir/SegmentTree.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/yuanr/CLionProjects/SegmentTree/SegmentTree.cpp -o CMakeFiles/SegmentTree.dir/SegmentTree.cpp.s

# Object files for target SegmentTree
SegmentTree_OBJECTS = \
"CMakeFiles/SegmentTree.dir/main.cpp.o" \
"CMakeFiles/SegmentTree.dir/SegmentTree.cpp.o"

# External object files for target SegmentTree
SegmentTree_EXTERNAL_OBJECTS =

SegmentTree: CMakeFiles/SegmentTree.dir/main.cpp.o
SegmentTree: CMakeFiles/SegmentTree.dir/SegmentTree.cpp.o
SegmentTree: CMakeFiles/SegmentTree.dir/build.make
SegmentTree: CMakeFiles/SegmentTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/yuanr/CLionProjects/SegmentTree/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable SegmentTree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SegmentTree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SegmentTree.dir/build: SegmentTree
.PHONY : CMakeFiles/SegmentTree.dir/build

CMakeFiles/SegmentTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SegmentTree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SegmentTree.dir/clean

CMakeFiles/SegmentTree.dir/depend:
	cd /mnt/c/Users/yuanr/CLionProjects/SegmentTree/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/yuanr/CLionProjects/SegmentTree /mnt/c/Users/yuanr/CLionProjects/SegmentTree /mnt/c/Users/yuanr/CLionProjects/SegmentTree/cmake-build-debug /mnt/c/Users/yuanr/CLionProjects/SegmentTree/cmake-build-debug /mnt/c/Users/yuanr/CLionProjects/SegmentTree/cmake-build-debug/CMakeFiles/SegmentTree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SegmentTree.dir/depend

