# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/steve/git/Stroustrup_3rdEdition/Chapter4/ex4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/steve/git/Stroustrup_3rdEdition/Chapter4/ex4

# Include any dependencies generated for this target.
include CMakeFiles/ex4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex4.dir/flags.make

CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o: ex4_LettersNumbers.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/steve/git/Stroustrup_3rdEdition/Chapter4/ex4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o -c /home/steve/git/Stroustrup_3rdEdition/Chapter4/ex4/ex4_LettersNumbers.cpp

CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/steve/git/Stroustrup_3rdEdition/Chapter4/ex4/ex4_LettersNumbers.cpp > CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.i

CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/steve/git/Stroustrup_3rdEdition/Chapter4/ex4/ex4_LettersNumbers.cpp -o CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.s

CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o.requires:

.PHONY : CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o.requires

CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o.provides: CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex4.dir/build.make CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o.provides.build
.PHONY : CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o.provides

CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o.provides.build: CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o


# Object files for target ex4
ex4_OBJECTS = \
"CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o"

# External object files for target ex4
ex4_EXTERNAL_OBJECTS =

ex4: CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o
ex4: CMakeFiles/ex4.dir/build.make
ex4: CMakeFiles/ex4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/steve/git/Stroustrup_3rdEdition/Chapter4/ex4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex4.dir/build: ex4

.PHONY : CMakeFiles/ex4.dir/build

CMakeFiles/ex4.dir/requires: CMakeFiles/ex4.dir/ex4_LettersNumbers.cpp.o.requires

.PHONY : CMakeFiles/ex4.dir/requires

CMakeFiles/ex4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex4.dir/clean

CMakeFiles/ex4.dir/depend:
	cd /home/steve/git/Stroustrup_3rdEdition/Chapter4/ex4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/steve/git/Stroustrup_3rdEdition/Chapter4/ex4 /home/steve/git/Stroustrup_3rdEdition/Chapter4/ex4 /home/steve/git/Stroustrup_3rdEdition/Chapter4/ex4 /home/steve/git/Stroustrup_3rdEdition/Chapter4/ex4 /home/steve/git/Stroustrup_3rdEdition/Chapter4/ex4/CMakeFiles/ex4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex4.dir/depend

