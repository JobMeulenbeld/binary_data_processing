# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Testing_encoding.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Testing_encoding.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Testing_encoding.dir/flags.make

CMakeFiles/Testing_encoding.dir/main.cpp.o: CMakeFiles/Testing_encoding.dir/flags.make
CMakeFiles/Testing_encoding.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Testing_encoding.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Testing_encoding.dir/main.cpp.o -c "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/main.cpp"

CMakeFiles/Testing_encoding.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Testing_encoding.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/main.cpp" > CMakeFiles/Testing_encoding.dir/main.cpp.i

CMakeFiles/Testing_encoding.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Testing_encoding.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/main.cpp" -o CMakeFiles/Testing_encoding.dir/main.cpp.s

CMakeFiles/Testing_encoding.dir/Encoding/Encoder.cpp.o: CMakeFiles/Testing_encoding.dir/flags.make
CMakeFiles/Testing_encoding.dir/Encoding/Encoder.cpp.o: ../Encoding/Encoder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Testing_encoding.dir/Encoding/Encoder.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Testing_encoding.dir/Encoding/Encoder.cpp.o -c "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/Encoding/Encoder.cpp"

CMakeFiles/Testing_encoding.dir/Encoding/Encoder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Testing_encoding.dir/Encoding/Encoder.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/Encoding/Encoder.cpp" > CMakeFiles/Testing_encoding.dir/Encoding/Encoder.cpp.i

CMakeFiles/Testing_encoding.dir/Encoding/Encoder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Testing_encoding.dir/Encoding/Encoder.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/Encoding/Encoder.cpp" -o CMakeFiles/Testing_encoding.dir/Encoding/Encoder.cpp.s

CMakeFiles/Testing_encoding.dir/Decoding/Decoder.cpp.o: CMakeFiles/Testing_encoding.dir/flags.make
CMakeFiles/Testing_encoding.dir/Decoding/Decoder.cpp.o: ../Decoding/Decoder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Testing_encoding.dir/Decoding/Decoder.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Testing_encoding.dir/Decoding/Decoder.cpp.o -c "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/Decoding/Decoder.cpp"

CMakeFiles/Testing_encoding.dir/Decoding/Decoder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Testing_encoding.dir/Decoding/Decoder.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/Decoding/Decoder.cpp" > CMakeFiles/Testing_encoding.dir/Decoding/Decoder.cpp.i

CMakeFiles/Testing_encoding.dir/Decoding/Decoder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Testing_encoding.dir/Decoding/Decoder.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/Decoding/Decoder.cpp" -o CMakeFiles/Testing_encoding.dir/Decoding/Decoder.cpp.s

# Object files for target Testing_encoding
Testing_encoding_OBJECTS = \
"CMakeFiles/Testing_encoding.dir/main.cpp.o" \
"CMakeFiles/Testing_encoding.dir/Encoding/Encoder.cpp.o" \
"CMakeFiles/Testing_encoding.dir/Decoding/Decoder.cpp.o"

# External object files for target Testing_encoding
Testing_encoding_EXTERNAL_OBJECTS =

Testing_encoding: CMakeFiles/Testing_encoding.dir/main.cpp.o
Testing_encoding: CMakeFiles/Testing_encoding.dir/Encoding/Encoder.cpp.o
Testing_encoding: CMakeFiles/Testing_encoding.dir/Decoding/Decoder.cpp.o
Testing_encoding: CMakeFiles/Testing_encoding.dir/build.make
Testing_encoding: CMakeFiles/Testing_encoding.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Testing_encoding"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Testing_encoding.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Testing_encoding.dir/build: Testing_encoding
.PHONY : CMakeFiles/Testing_encoding.dir/build

CMakeFiles/Testing_encoding.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Testing_encoding.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Testing_encoding.dir/clean

CMakeFiles/Testing_encoding.dir/depend:
	cd "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding" "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding" "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/cmake-build-debug" "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/cmake-build-debug" "/mnt/c/Users/meule/Documents/School/APC/Binary data processing/Testing encoding/cmake-build-debug/CMakeFiles/Testing_encoding.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Testing_encoding.dir/depend

