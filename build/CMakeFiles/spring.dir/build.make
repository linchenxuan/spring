# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/lcx/spring

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lcx/spring/build

# Include any dependencies generated for this target.
include CMakeFiles/spring.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/spring.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/spring.dir/flags.make

CMakeFiles/spring.dir/main.cpp.o: CMakeFiles/spring.dir/flags.make
CMakeFiles/spring.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lcx/spring/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/spring.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/spring.dir/main.cpp.o -c /home/lcx/spring/main.cpp

CMakeFiles/spring.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spring.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lcx/spring/main.cpp > CMakeFiles/spring.dir/main.cpp.i

CMakeFiles/spring.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spring.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lcx/spring/main.cpp -o CMakeFiles/spring.dir/main.cpp.s

CMakeFiles/spring.dir/dependcy/tgaimage.cpp.o: CMakeFiles/spring.dir/flags.make
CMakeFiles/spring.dir/dependcy/tgaimage.cpp.o: ../dependcy/tgaimage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lcx/spring/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/spring.dir/dependcy/tgaimage.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/spring.dir/dependcy/tgaimage.cpp.o -c /home/lcx/spring/dependcy/tgaimage.cpp

CMakeFiles/spring.dir/dependcy/tgaimage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spring.dir/dependcy/tgaimage.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lcx/spring/dependcy/tgaimage.cpp > CMakeFiles/spring.dir/dependcy/tgaimage.cpp.i

CMakeFiles/spring.dir/dependcy/tgaimage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spring.dir/dependcy/tgaimage.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lcx/spring/dependcy/tgaimage.cpp -o CMakeFiles/spring.dir/dependcy/tgaimage.cpp.s

CMakeFiles/spring.dir/math/vector/Vector2.cpp.o: CMakeFiles/spring.dir/flags.make
CMakeFiles/spring.dir/math/vector/Vector2.cpp.o: ../math/vector/Vector2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lcx/spring/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/spring.dir/math/vector/Vector2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/spring.dir/math/vector/Vector2.cpp.o -c /home/lcx/spring/math/vector/Vector2.cpp

CMakeFiles/spring.dir/math/vector/Vector2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spring.dir/math/vector/Vector2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lcx/spring/math/vector/Vector2.cpp > CMakeFiles/spring.dir/math/vector/Vector2.cpp.i

CMakeFiles/spring.dir/math/vector/Vector2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spring.dir/math/vector/Vector2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lcx/spring/math/vector/Vector2.cpp -o CMakeFiles/spring.dir/math/vector/Vector2.cpp.s

CMakeFiles/spring.dir/render/brush/IBrush.cpp.o: CMakeFiles/spring.dir/flags.make
CMakeFiles/spring.dir/render/brush/IBrush.cpp.o: ../render/brush/IBrush.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lcx/spring/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/spring.dir/render/brush/IBrush.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/spring.dir/render/brush/IBrush.cpp.o -c /home/lcx/spring/render/brush/IBrush.cpp

CMakeFiles/spring.dir/render/brush/IBrush.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spring.dir/render/brush/IBrush.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lcx/spring/render/brush/IBrush.cpp > CMakeFiles/spring.dir/render/brush/IBrush.cpp.i

CMakeFiles/spring.dir/render/brush/IBrush.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spring.dir/render/brush/IBrush.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lcx/spring/render/brush/IBrush.cpp -o CMakeFiles/spring.dir/render/brush/IBrush.cpp.s

CMakeFiles/spring.dir/render/brush/MeshBrush.cpp.o: CMakeFiles/spring.dir/flags.make
CMakeFiles/spring.dir/render/brush/MeshBrush.cpp.o: ../render/brush/MeshBrush.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lcx/spring/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/spring.dir/render/brush/MeshBrush.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/spring.dir/render/brush/MeshBrush.cpp.o -c /home/lcx/spring/render/brush/MeshBrush.cpp

CMakeFiles/spring.dir/render/brush/MeshBrush.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/spring.dir/render/brush/MeshBrush.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lcx/spring/render/brush/MeshBrush.cpp > CMakeFiles/spring.dir/render/brush/MeshBrush.cpp.i

CMakeFiles/spring.dir/render/brush/MeshBrush.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/spring.dir/render/brush/MeshBrush.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lcx/spring/render/brush/MeshBrush.cpp -o CMakeFiles/spring.dir/render/brush/MeshBrush.cpp.s

# Object files for target spring
spring_OBJECTS = \
"CMakeFiles/spring.dir/main.cpp.o" \
"CMakeFiles/spring.dir/dependcy/tgaimage.cpp.o" \
"CMakeFiles/spring.dir/math/vector/Vector2.cpp.o" \
"CMakeFiles/spring.dir/render/brush/IBrush.cpp.o" \
"CMakeFiles/spring.dir/render/brush/MeshBrush.cpp.o"

# External object files for target spring
spring_EXTERNAL_OBJECTS =

spring: CMakeFiles/spring.dir/main.cpp.o
spring: CMakeFiles/spring.dir/dependcy/tgaimage.cpp.o
spring: CMakeFiles/spring.dir/math/vector/Vector2.cpp.o
spring: CMakeFiles/spring.dir/render/brush/IBrush.cpp.o
spring: CMakeFiles/spring.dir/render/brush/MeshBrush.cpp.o
spring: CMakeFiles/spring.dir/build.make
spring: CMakeFiles/spring.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lcx/spring/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable spring"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/spring.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/spring.dir/build: spring

.PHONY : CMakeFiles/spring.dir/build

CMakeFiles/spring.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/spring.dir/cmake_clean.cmake
.PHONY : CMakeFiles/spring.dir/clean

CMakeFiles/spring.dir/depend:
	cd /home/lcx/spring/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lcx/spring /home/lcx/spring /home/lcx/spring/build /home/lcx/spring/build /home/lcx/spring/build/CMakeFiles/spring.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/spring.dir/depend

