# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/cxf/dds_chatter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cxf/dds_chatter/build

# Include any dependencies generated for this target.
include CMakeFiles/discovery.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/discovery.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/discovery.dir/flags.make

CMakeFiles/discovery.dir/src/Discovery.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/src/Discovery.cpp.o: ../src/Discovery.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cxf/dds_chatter/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/src/Discovery.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/src/Discovery.cpp.o -c /home/cxf/dds_chatter/src/Discovery.cpp

CMakeFiles/discovery.dir/src/Discovery.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/src/Discovery.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cxf/dds_chatter/src/Discovery.cpp > CMakeFiles/discovery.dir/src/Discovery.cpp.i

CMakeFiles/discovery.dir/src/Discovery.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/src/Discovery.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cxf/dds_chatter/src/Discovery.cpp -o CMakeFiles/discovery.dir/src/Discovery.cpp.s

CMakeFiles/discovery.dir/src/Discovery.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/src/Discovery.cpp.o.requires

CMakeFiles/discovery.dir/src/Discovery.cpp.o.provides: CMakeFiles/discovery.dir/src/Discovery.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/src/Discovery.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/src/Discovery.cpp.o.provides

CMakeFiles/discovery.dir/src/Discovery.cpp.o.provides.build: CMakeFiles/discovery.dir/src/Discovery.cpp.o

CMakeFiles/discovery.dir/src/CheckStatus.cpp.o: CMakeFiles/discovery.dir/flags.make
CMakeFiles/discovery.dir/src/CheckStatus.cpp.o: ../src/CheckStatus.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cxf/dds_chatter/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/discovery.dir/src/CheckStatus.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/discovery.dir/src/CheckStatus.cpp.o -c /home/cxf/dds_chatter/src/CheckStatus.cpp

CMakeFiles/discovery.dir/src/CheckStatus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/discovery.dir/src/CheckStatus.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cxf/dds_chatter/src/CheckStatus.cpp > CMakeFiles/discovery.dir/src/CheckStatus.cpp.i

CMakeFiles/discovery.dir/src/CheckStatus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/discovery.dir/src/CheckStatus.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cxf/dds_chatter/src/CheckStatus.cpp -o CMakeFiles/discovery.dir/src/CheckStatus.cpp.s

CMakeFiles/discovery.dir/src/CheckStatus.cpp.o.requires:
.PHONY : CMakeFiles/discovery.dir/src/CheckStatus.cpp.o.requires

CMakeFiles/discovery.dir/src/CheckStatus.cpp.o.provides: CMakeFiles/discovery.dir/src/CheckStatus.cpp.o.requires
	$(MAKE) -f CMakeFiles/discovery.dir/build.make CMakeFiles/discovery.dir/src/CheckStatus.cpp.o.provides.build
.PHONY : CMakeFiles/discovery.dir/src/CheckStatus.cpp.o.provides

CMakeFiles/discovery.dir/src/CheckStatus.cpp.o.provides.build: CMakeFiles/discovery.dir/src/CheckStatus.cpp.o

# Object files for target discovery
discovery_OBJECTS = \
"CMakeFiles/discovery.dir/src/Discovery.cpp.o" \
"CMakeFiles/discovery.dir/src/CheckStatus.cpp.o"

# External object files for target discovery
discovery_EXTERNAL_OBJECTS =

../bin/discovery: CMakeFiles/discovery.dir/src/Discovery.cpp.o
../bin/discovery: CMakeFiles/discovery.dir/src/CheckStatus.cpp.o
../bin/discovery: CMakeFiles/discovery.dir/build.make
../bin/discovery: /home/cxf/HDE/x86_64.linux/lib/libddskernel.so
../bin/discovery: /home/cxf/HDE/x86_64.linux/lib/libdcpsisocpp.so
../bin/discovery: /home/cxf/HDE/x86_64.linux/lib/libdcpssacpp.so
../bin/discovery: CMakeFiles/discovery.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/discovery"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/discovery.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/discovery.dir/build: ../bin/discovery
.PHONY : CMakeFiles/discovery.dir/build

CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/src/Discovery.cpp.o.requires
CMakeFiles/discovery.dir/requires: CMakeFiles/discovery.dir/src/CheckStatus.cpp.o.requires
.PHONY : CMakeFiles/discovery.dir/requires

CMakeFiles/discovery.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/discovery.dir/cmake_clean.cmake
.PHONY : CMakeFiles/discovery.dir/clean

CMakeFiles/discovery.dir/depend:
	cd /home/cxf/dds_chatter/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cxf/dds_chatter /home/cxf/dds_chatter /home/cxf/dds_chatter/build /home/cxf/dds_chatter/build /home/cxf/dds_chatter/build/CMakeFiles/discovery.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/discovery.dir/depend
