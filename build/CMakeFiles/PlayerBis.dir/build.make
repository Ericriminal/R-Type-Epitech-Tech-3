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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build

# Include any dependencies generated for this target.
include CMakeFiles/PlayerBis.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PlayerBis.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PlayerBis.dir/flags.make

CMakeFiles/PlayerBis.dir/GameEngine/src/Entity/PlayerBis.cpp.o: CMakeFiles/PlayerBis.dir/flags.make
CMakeFiles/PlayerBis.dir/GameEngine/src/Entity/PlayerBis.cpp.o: ../GameEngine/src/Entity/PlayerBis.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PlayerBis.dir/GameEngine/src/Entity/PlayerBis.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PlayerBis.dir/GameEngine/src/Entity/PlayerBis.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/Entity/PlayerBis.cpp

CMakeFiles/PlayerBis.dir/GameEngine/src/Entity/PlayerBis.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PlayerBis.dir/GameEngine/src/Entity/PlayerBis.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/Entity/PlayerBis.cpp > CMakeFiles/PlayerBis.dir/GameEngine/src/Entity/PlayerBis.cpp.i

CMakeFiles/PlayerBis.dir/GameEngine/src/Entity/PlayerBis.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PlayerBis.dir/GameEngine/src/Entity/PlayerBis.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/Entity/PlayerBis.cpp -o CMakeFiles/PlayerBis.dir/GameEngine/src/Entity/PlayerBis.cpp.s

CMakeFiles/PlayerBis.dir/GameEngine/include/Core/EntityManager.cpp.o: CMakeFiles/PlayerBis.dir/flags.make
CMakeFiles/PlayerBis.dir/GameEngine/include/Core/EntityManager.cpp.o: ../GameEngine/include/Core/EntityManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PlayerBis.dir/GameEngine/include/Core/EntityManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PlayerBis.dir/GameEngine/include/Core/EntityManager.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/include/Core/EntityManager.cpp

CMakeFiles/PlayerBis.dir/GameEngine/include/Core/EntityManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PlayerBis.dir/GameEngine/include/Core/EntityManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/include/Core/EntityManager.cpp > CMakeFiles/PlayerBis.dir/GameEngine/include/Core/EntityManager.cpp.i

CMakeFiles/PlayerBis.dir/GameEngine/include/Core/EntityManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PlayerBis.dir/GameEngine/include/Core/EntityManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/include/Core/EntityManager.cpp -o CMakeFiles/PlayerBis.dir/GameEngine/include/Core/EntityManager.cpp.s

# Object files for target PlayerBis
PlayerBis_OBJECTS = \
"CMakeFiles/PlayerBis.dir/GameEngine/src/Entity/PlayerBis.cpp.o" \
"CMakeFiles/PlayerBis.dir/GameEngine/include/Core/EntityManager.cpp.o"

# External object files for target PlayerBis
PlayerBis_EXTERNAL_OBJECTS =

lib/libPlayerBis.so: CMakeFiles/PlayerBis.dir/GameEngine/src/Entity/PlayerBis.cpp.o
lib/libPlayerBis.so: CMakeFiles/PlayerBis.dir/GameEngine/include/Core/EntityManager.cpp.o
lib/libPlayerBis.so: CMakeFiles/PlayerBis.dir/build.make
lib/libPlayerBis.so: CMakeFiles/PlayerBis.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library lib/libPlayerBis.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PlayerBis.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PlayerBis.dir/build: lib/libPlayerBis.so

.PHONY : CMakeFiles/PlayerBis.dir/build

CMakeFiles/PlayerBis.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PlayerBis.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PlayerBis.dir/clean

CMakeFiles/PlayerBis.dir/depend:
	cd /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles/PlayerBis.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PlayerBis.dir/depend

