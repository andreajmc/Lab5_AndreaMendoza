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
CMAKE_COMMAND = /home/andrea/clion-2018.2.6/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/andrea/clion-2018.2.6/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/andrea/Lab5_AndreaMendoza

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andrea/Lab5_AndreaMendoza/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab5_AndreaMendoza.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab5_AndreaMendoza.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab5_AndreaMendoza.dir/flags.make

CMakeFiles/Lab5_AndreaMendoza.dir/main.cpp.o: CMakeFiles/Lab5_AndreaMendoza.dir/flags.make
CMakeFiles/Lab5_AndreaMendoza.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrea/Lab5_AndreaMendoza/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab5_AndreaMendoza.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab5_AndreaMendoza.dir/main.cpp.o -c /home/andrea/Lab5_AndreaMendoza/main.cpp

CMakeFiles/Lab5_AndreaMendoza.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab5_AndreaMendoza.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrea/Lab5_AndreaMendoza/main.cpp > CMakeFiles/Lab5_AndreaMendoza.dir/main.cpp.i

CMakeFiles/Lab5_AndreaMendoza.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab5_AndreaMendoza.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrea/Lab5_AndreaMendoza/main.cpp -o CMakeFiles/Lab5_AndreaMendoza.dir/main.cpp.s

CMakeFiles/Lab5_AndreaMendoza.dir/Playlist.cpp.o: CMakeFiles/Lab5_AndreaMendoza.dir/flags.make
CMakeFiles/Lab5_AndreaMendoza.dir/Playlist.cpp.o: ../Playlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrea/Lab5_AndreaMendoza/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Lab5_AndreaMendoza.dir/Playlist.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab5_AndreaMendoza.dir/Playlist.cpp.o -c /home/andrea/Lab5_AndreaMendoza/Playlist.cpp

CMakeFiles/Lab5_AndreaMendoza.dir/Playlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab5_AndreaMendoza.dir/Playlist.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrea/Lab5_AndreaMendoza/Playlist.cpp > CMakeFiles/Lab5_AndreaMendoza.dir/Playlist.cpp.i

CMakeFiles/Lab5_AndreaMendoza.dir/Playlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab5_AndreaMendoza.dir/Playlist.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrea/Lab5_AndreaMendoza/Playlist.cpp -o CMakeFiles/Lab5_AndreaMendoza.dir/Playlist.cpp.s

CMakeFiles/Lab5_AndreaMendoza.dir/Song.cpp.o: CMakeFiles/Lab5_AndreaMendoza.dir/flags.make
CMakeFiles/Lab5_AndreaMendoza.dir/Song.cpp.o: ../Song.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrea/Lab5_AndreaMendoza/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Lab5_AndreaMendoza.dir/Song.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab5_AndreaMendoza.dir/Song.cpp.o -c /home/andrea/Lab5_AndreaMendoza/Song.cpp

CMakeFiles/Lab5_AndreaMendoza.dir/Song.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab5_AndreaMendoza.dir/Song.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrea/Lab5_AndreaMendoza/Song.cpp > CMakeFiles/Lab5_AndreaMendoza.dir/Song.cpp.i

CMakeFiles/Lab5_AndreaMendoza.dir/Song.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab5_AndreaMendoza.dir/Song.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrea/Lab5_AndreaMendoza/Song.cpp -o CMakeFiles/Lab5_AndreaMendoza.dir/Song.cpp.s

CMakeFiles/Lab5_AndreaMendoza.dir/Artist.cpp.o: CMakeFiles/Lab5_AndreaMendoza.dir/flags.make
CMakeFiles/Lab5_AndreaMendoza.dir/Artist.cpp.o: ../Artist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrea/Lab5_AndreaMendoza/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Lab5_AndreaMendoza.dir/Artist.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab5_AndreaMendoza.dir/Artist.cpp.o -c /home/andrea/Lab5_AndreaMendoza/Artist.cpp

CMakeFiles/Lab5_AndreaMendoza.dir/Artist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab5_AndreaMendoza.dir/Artist.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrea/Lab5_AndreaMendoza/Artist.cpp > CMakeFiles/Lab5_AndreaMendoza.dir/Artist.cpp.i

CMakeFiles/Lab5_AndreaMendoza.dir/Artist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab5_AndreaMendoza.dir/Artist.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrea/Lab5_AndreaMendoza/Artist.cpp -o CMakeFiles/Lab5_AndreaMendoza.dir/Artist.cpp.s

CMakeFiles/Lab5_AndreaMendoza.dir/Radio.cpp.o: CMakeFiles/Lab5_AndreaMendoza.dir/flags.make
CMakeFiles/Lab5_AndreaMendoza.dir/Radio.cpp.o: ../Radio.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andrea/Lab5_AndreaMendoza/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Lab5_AndreaMendoza.dir/Radio.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab5_AndreaMendoza.dir/Radio.cpp.o -c /home/andrea/Lab5_AndreaMendoza/Radio.cpp

CMakeFiles/Lab5_AndreaMendoza.dir/Radio.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab5_AndreaMendoza.dir/Radio.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andrea/Lab5_AndreaMendoza/Radio.cpp > CMakeFiles/Lab5_AndreaMendoza.dir/Radio.cpp.i

CMakeFiles/Lab5_AndreaMendoza.dir/Radio.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab5_AndreaMendoza.dir/Radio.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andrea/Lab5_AndreaMendoza/Radio.cpp -o CMakeFiles/Lab5_AndreaMendoza.dir/Radio.cpp.s

# Object files for target Lab5_AndreaMendoza
Lab5_AndreaMendoza_OBJECTS = \
"CMakeFiles/Lab5_AndreaMendoza.dir/main.cpp.o" \
"CMakeFiles/Lab5_AndreaMendoza.dir/Playlist.cpp.o" \
"CMakeFiles/Lab5_AndreaMendoza.dir/Song.cpp.o" \
"CMakeFiles/Lab5_AndreaMendoza.dir/Artist.cpp.o" \
"CMakeFiles/Lab5_AndreaMendoza.dir/Radio.cpp.o"

# External object files for target Lab5_AndreaMendoza
Lab5_AndreaMendoza_EXTERNAL_OBJECTS =

Lab5_AndreaMendoza: CMakeFiles/Lab5_AndreaMendoza.dir/main.cpp.o
Lab5_AndreaMendoza: CMakeFiles/Lab5_AndreaMendoza.dir/Playlist.cpp.o
Lab5_AndreaMendoza: CMakeFiles/Lab5_AndreaMendoza.dir/Song.cpp.o
Lab5_AndreaMendoza: CMakeFiles/Lab5_AndreaMendoza.dir/Artist.cpp.o
Lab5_AndreaMendoza: CMakeFiles/Lab5_AndreaMendoza.dir/Radio.cpp.o
Lab5_AndreaMendoza: CMakeFiles/Lab5_AndreaMendoza.dir/build.make
Lab5_AndreaMendoza: CMakeFiles/Lab5_AndreaMendoza.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/andrea/Lab5_AndreaMendoza/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Lab5_AndreaMendoza"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab5_AndreaMendoza.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab5_AndreaMendoza.dir/build: Lab5_AndreaMendoza

.PHONY : CMakeFiles/Lab5_AndreaMendoza.dir/build

CMakeFiles/Lab5_AndreaMendoza.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab5_AndreaMendoza.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab5_AndreaMendoza.dir/clean

CMakeFiles/Lab5_AndreaMendoza.dir/depend:
	cd /home/andrea/Lab5_AndreaMendoza/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andrea/Lab5_AndreaMendoza /home/andrea/Lab5_AndreaMendoza /home/andrea/Lab5_AndreaMendoza/cmake-build-debug /home/andrea/Lab5_AndreaMendoza/cmake-build-debug /home/andrea/Lab5_AndreaMendoza/cmake-build-debug/CMakeFiles/Lab5_AndreaMendoza.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab5_AndreaMendoza.dir/depend
