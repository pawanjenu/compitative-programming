# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/pavan/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.6948.80/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/pavan/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.6948.80/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pavan/Persnal/online_coding/compitative-programming

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pavan/Persnal/online_coding/compitative-programming/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/solution.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/solution.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/solution.dir/flags.make

CMakeFiles/solution.dir/11/solution.cpp.o: CMakeFiles/solution.dir/flags.make
CMakeFiles/solution.dir/11/solution.cpp.o: ../11/solution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pavan/Persnal/online_coding/compitative-programming/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/solution.dir/11/solution.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/solution.dir/11/solution.cpp.o -c /home/pavan/Persnal/online_coding/compitative-programming/11/solution.cpp

CMakeFiles/solution.dir/11/solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/solution.dir/11/solution.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pavan/Persnal/online_coding/compitative-programming/11/solution.cpp > CMakeFiles/solution.dir/11/solution.cpp.i

CMakeFiles/solution.dir/11/solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/solution.dir/11/solution.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pavan/Persnal/online_coding/compitative-programming/11/solution.cpp -o CMakeFiles/solution.dir/11/solution.cpp.s

# Object files for target solution
solution_OBJECTS = \
"CMakeFiles/solution.dir/11/solution.cpp.o"

# External object files for target solution
solution_EXTERNAL_OBJECTS =

../11/solution: CMakeFiles/solution.dir/11/solution.cpp.o
../11/solution: CMakeFiles/solution.dir/build.make
../11/solution: CMakeFiles/solution.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pavan/Persnal/online_coding/compitative-programming/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../11/solution"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/solution.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/solution.dir/build: ../11/solution

.PHONY : CMakeFiles/solution.dir/build

CMakeFiles/solution.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/solution.dir/cmake_clean.cmake
.PHONY : CMakeFiles/solution.dir/clean

CMakeFiles/solution.dir/depend:
	cd /home/pavan/Persnal/online_coding/compitative-programming/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pavan/Persnal/online_coding/compitative-programming /home/pavan/Persnal/online_coding/compitative-programming /home/pavan/Persnal/online_coding/compitative-programming/cmake-build-debug /home/pavan/Persnal/online_coding/compitative-programming/cmake-build-debug /home/pavan/Persnal/online_coding/compitative-programming/cmake-build-debug/CMakeFiles/solution.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/solution.dir/depend

