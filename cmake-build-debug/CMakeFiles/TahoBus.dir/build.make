# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\97252\CLionProjects\ultraBus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\97252\CLionProjects\ultraBus\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TahoBus.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TahoBus.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TahoBus.dir/flags.make

CMakeFiles/TahoBus.dir/main.cpp.obj: CMakeFiles/TahoBus.dir/flags.make
CMakeFiles/TahoBus.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\97252\CLionProjects\ultraBus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TahoBus.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TahoBus.dir\main.cpp.obj -c C:\Users\97252\CLionProjects\ultraBus\main.cpp

CMakeFiles/TahoBus.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TahoBus.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\97252\CLionProjects\ultraBus\main.cpp > CMakeFiles\TahoBus.dir\main.cpp.i

CMakeFiles/TahoBus.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TahoBus.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\97252\CLionProjects\ultraBus\main.cpp -o CMakeFiles\TahoBus.dir\main.cpp.s

CMakeFiles/TahoBus.dir/myNode.cpp.obj: CMakeFiles/TahoBus.dir/flags.make
CMakeFiles/TahoBus.dir/myNode.cpp.obj: ../myNode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\97252\CLionProjects\ultraBus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TahoBus.dir/myNode.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TahoBus.dir\myNode.cpp.obj -c C:\Users\97252\CLionProjects\ultraBus\myNode.cpp

CMakeFiles/TahoBus.dir/myNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TahoBus.dir/myNode.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\97252\CLionProjects\ultraBus\myNode.cpp > CMakeFiles\TahoBus.dir\myNode.cpp.i

CMakeFiles/TahoBus.dir/myNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TahoBus.dir/myNode.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\97252\CLionProjects\ultraBus\myNode.cpp -o CMakeFiles\TahoBus.dir\myNode.cpp.s

# Object files for target TahoBus
TahoBus_OBJECTS = \
"CMakeFiles/TahoBus.dir/main.cpp.obj" \
"CMakeFiles/TahoBus.dir/myNode.cpp.obj"

# External object files for target TahoBus
TahoBus_EXTERNAL_OBJECTS =

TahoBus.exe: CMakeFiles/TahoBus.dir/main.cpp.obj
TahoBus.exe: CMakeFiles/TahoBus.dir/myNode.cpp.obj
TahoBus.exe: CMakeFiles/TahoBus.dir/build.make
TahoBus.exe: CMakeFiles/TahoBus.dir/linklibs.rsp
TahoBus.exe: CMakeFiles/TahoBus.dir/objects1.rsp
TahoBus.exe: CMakeFiles/TahoBus.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\97252\CLionProjects\ultraBus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable TahoBus.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TahoBus.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TahoBus.dir/build: TahoBus.exe

.PHONY : CMakeFiles/TahoBus.dir/build

CMakeFiles/TahoBus.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TahoBus.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TahoBus.dir/clean

CMakeFiles/TahoBus.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\97252\CLionProjects\ultraBus C:\Users\97252\CLionProjects\ultraBus C:\Users\97252\CLionProjects\ultraBus\cmake-build-debug C:\Users\97252\CLionProjects\ultraBus\cmake-build-debug C:\Users\97252\CLionProjects\ultraBus\cmake-build-debug\CMakeFiles\TahoBus.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TahoBus.dir/depend

