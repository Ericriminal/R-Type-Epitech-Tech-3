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
include CMakeFiles/r-type_client.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/r-type_client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/r-type_client.dir/flags.make

CMakeFiles/r-type_client.dir/Client/src/main.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/Client/src/main.cpp.o: ../Client/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/r-type_client.dir/Client/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/Client/src/main.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Client/src/main.cpp

CMakeFiles/r-type_client.dir/Client/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/Client/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Client/src/main.cpp > CMakeFiles/r-type_client.dir/Client/src/main.cpp.i

CMakeFiles/r-type_client.dir/Client/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/Client/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Client/src/main.cpp -o CMakeFiles/r-type_client.dir/Client/src/main.cpp.s

CMakeFiles/r-type_client.dir/Client/src/Client.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/Client/src/Client.cpp.o: ../Client/src/Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/r-type_client.dir/Client/src/Client.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/Client/src/Client.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Client/src/Client.cpp

CMakeFiles/r-type_client.dir/Client/src/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/Client/src/Client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Client/src/Client.cpp > CMakeFiles/r-type_client.dir/Client/src/Client.cpp.i

CMakeFiles/r-type_client.dir/Client/src/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/Client/src/Client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Client/src/Client.cpp -o CMakeFiles/r-type_client.dir/Client/src/Client.cpp.s

CMakeFiles/r-type_client.dir/Client/src/GameClient.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/Client/src/GameClient.cpp.o: ../Client/src/GameClient.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/r-type_client.dir/Client/src/GameClient.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/Client/src/GameClient.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Client/src/GameClient.cpp

CMakeFiles/r-type_client.dir/Client/src/GameClient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/Client/src/GameClient.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Client/src/GameClient.cpp > CMakeFiles/r-type_client.dir/Client/src/GameClient.cpp.i

CMakeFiles/r-type_client.dir/Client/src/GameClient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/Client/src/GameClient.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Client/src/GameClient.cpp -o CMakeFiles/r-type_client.dir/Client/src/GameClient.cpp.s

CMakeFiles/r-type_client.dir/GameEngine/include/Core/EntityManager.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/GameEngine/include/Core/EntityManager.cpp.o: ../GameEngine/include/Core/EntityManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/r-type_client.dir/GameEngine/include/Core/EntityManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/GameEngine/include/Core/EntityManager.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/include/Core/EntityManager.cpp

CMakeFiles/r-type_client.dir/GameEngine/include/Core/EntityManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/GameEngine/include/Core/EntityManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/include/Core/EntityManager.cpp > CMakeFiles/r-type_client.dir/GameEngine/include/Core/EntityManager.cpp.i

CMakeFiles/r-type_client.dir/GameEngine/include/Core/EntityManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/GameEngine/include/Core/EntityManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/include/Core/EntityManager.cpp -o CMakeFiles/r-type_client.dir/GameEngine/include/Core/EntityManager.cpp.s

CMakeFiles/r-type_client.dir/GameEngine/src/Entity/EntityArray.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/GameEngine/src/Entity/EntityArray.cpp.o: ../GameEngine/src/Entity/EntityArray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/r-type_client.dir/GameEngine/src/Entity/EntityArray.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/GameEngine/src/Entity/EntityArray.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/Entity/EntityArray.cpp

CMakeFiles/r-type_client.dir/GameEngine/src/Entity/EntityArray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/GameEngine/src/Entity/EntityArray.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/Entity/EntityArray.cpp > CMakeFiles/r-type_client.dir/GameEngine/src/Entity/EntityArray.cpp.i

CMakeFiles/r-type_client.dir/GameEngine/src/Entity/EntityArray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/GameEngine/src/Entity/EntityArray.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/Entity/EntityArray.cpp -o CMakeFiles/r-type_client.dir/GameEngine/src/Entity/EntityArray.cpp.s

CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderSprite.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderSprite.cpp.o: ../GameEngine/src/System/RenderSprite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderSprite.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderSprite.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/System/RenderSprite.cpp

CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderSprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderSprite.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/System/RenderSprite.cpp > CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderSprite.cpp.i

CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderSprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderSprite.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/System/RenderSprite.cpp -o CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderSprite.cpp.s

CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderParallax.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderParallax.cpp.o: ../GameEngine/src/System/RenderParallax.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderParallax.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderParallax.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/System/RenderParallax.cpp

CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderParallax.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderParallax.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/System/RenderParallax.cpp > CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderParallax.cpp.i

CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderParallax.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderParallax.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/System/RenderParallax.cpp -o CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderParallax.cpp.s

CMakeFiles/r-type_client.dir/GameEngine/src/System/GetAllPos.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/GameEngine/src/System/GetAllPos.cpp.o: ../GameEngine/src/System/GetAllPos.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/r-type_client.dir/GameEngine/src/System/GetAllPos.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/GameEngine/src/System/GetAllPos.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/System/GetAllPos.cpp

CMakeFiles/r-type_client.dir/GameEngine/src/System/GetAllPos.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/GameEngine/src/System/GetAllPos.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/System/GetAllPos.cpp > CMakeFiles/r-type_client.dir/GameEngine/src/System/GetAllPos.cpp.i

CMakeFiles/r-type_client.dir/GameEngine/src/System/GetAllPos.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/GameEngine/src/System/GetAllPos.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/System/GetAllPos.cpp -o CMakeFiles/r-type_client.dir/GameEngine/src/System/GetAllPos.cpp.s

CMakeFiles/r-type_client.dir/GameEngine/src/System/PlayerInput.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/GameEngine/src/System/PlayerInput.cpp.o: ../GameEngine/src/System/PlayerInput.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/r-type_client.dir/GameEngine/src/System/PlayerInput.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/GameEngine/src/System/PlayerInput.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/System/PlayerInput.cpp

CMakeFiles/r-type_client.dir/GameEngine/src/System/PlayerInput.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/GameEngine/src/System/PlayerInput.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/System/PlayerInput.cpp > CMakeFiles/r-type_client.dir/GameEngine/src/System/PlayerInput.cpp.i

CMakeFiles/r-type_client.dir/GameEngine/src/System/PlayerInput.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/GameEngine/src/System/PlayerInput.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/GameEngine/src/System/PlayerInput.cpp -o CMakeFiles/r-type_client.dir/GameEngine/src/System/PlayerInput.cpp.s

CMakeFiles/r-type_client.dir/Network/src/IOContext.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/Network/src/IOContext.cpp.o: ../Network/src/IOContext.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/r-type_client.dir/Network/src/IOContext.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/Network/src/IOContext.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/IOContext.cpp

CMakeFiles/r-type_client.dir/Network/src/IOContext.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/Network/src/IOContext.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/IOContext.cpp > CMakeFiles/r-type_client.dir/Network/src/IOContext.cpp.i

CMakeFiles/r-type_client.dir/Network/src/IOContext.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/Network/src/IOContext.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/IOContext.cpp -o CMakeFiles/r-type_client.dir/Network/src/IOContext.cpp.s

CMakeFiles/r-type_client.dir/Network/src/StreamBuffer.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/Network/src/StreamBuffer.cpp.o: ../Network/src/StreamBuffer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/r-type_client.dir/Network/src/StreamBuffer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/Network/src/StreamBuffer.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/StreamBuffer.cpp

CMakeFiles/r-type_client.dir/Network/src/StreamBuffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/Network/src/StreamBuffer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/StreamBuffer.cpp > CMakeFiles/r-type_client.dir/Network/src/StreamBuffer.cpp.i

CMakeFiles/r-type_client.dir/Network/src/StreamBuffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/Network/src/StreamBuffer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/StreamBuffer.cpp -o CMakeFiles/r-type_client.dir/Network/src/StreamBuffer.cpp.s

CMakeFiles/r-type_client.dir/Network/src/UDPSendSocket.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/Network/src/UDPSendSocket.cpp.o: ../Network/src/UDPSendSocket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/r-type_client.dir/Network/src/UDPSendSocket.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/Network/src/UDPSendSocket.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/UDPSendSocket.cpp

CMakeFiles/r-type_client.dir/Network/src/UDPSendSocket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/Network/src/UDPSendSocket.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/UDPSendSocket.cpp > CMakeFiles/r-type_client.dir/Network/src/UDPSendSocket.cpp.i

CMakeFiles/r-type_client.dir/Network/src/UDPSendSocket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/Network/src/UDPSendSocket.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/UDPSendSocket.cpp -o CMakeFiles/r-type_client.dir/Network/src/UDPSendSocket.cpp.s

CMakeFiles/r-type_client.dir/Network/src/UDPSend.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/Network/src/UDPSend.cpp.o: ../Network/src/UDPSend.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/r-type_client.dir/Network/src/UDPSend.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/Network/src/UDPSend.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/UDPSend.cpp

CMakeFiles/r-type_client.dir/Network/src/UDPSend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/Network/src/UDPSend.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/UDPSend.cpp > CMakeFiles/r-type_client.dir/Network/src/UDPSend.cpp.i

CMakeFiles/r-type_client.dir/Network/src/UDPSend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/Network/src/UDPSend.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/UDPSend.cpp -o CMakeFiles/r-type_client.dir/Network/src/UDPSend.cpp.s

CMakeFiles/r-type_client.dir/Network/src/UDPReceive.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/Network/src/UDPReceive.cpp.o: ../Network/src/UDPReceive.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/r-type_client.dir/Network/src/UDPReceive.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/Network/src/UDPReceive.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/UDPReceive.cpp

CMakeFiles/r-type_client.dir/Network/src/UDPReceive.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/Network/src/UDPReceive.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/UDPReceive.cpp > CMakeFiles/r-type_client.dir/Network/src/UDPReceive.cpp.i

CMakeFiles/r-type_client.dir/Network/src/UDPReceive.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/Network/src/UDPReceive.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/UDPReceive.cpp -o CMakeFiles/r-type_client.dir/Network/src/UDPReceive.cpp.s

CMakeFiles/r-type_client.dir/Network/src/Endpoint.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/Network/src/Endpoint.cpp.o: ../Network/src/Endpoint.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/r-type_client.dir/Network/src/Endpoint.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/Network/src/Endpoint.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/Endpoint.cpp

CMakeFiles/r-type_client.dir/Network/src/Endpoint.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/Network/src/Endpoint.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/Endpoint.cpp > CMakeFiles/r-type_client.dir/Network/src/Endpoint.cpp.i

CMakeFiles/r-type_client.dir/Network/src/Endpoint.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/Network/src/Endpoint.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/Endpoint.cpp -o CMakeFiles/r-type_client.dir/Network/src/Endpoint.cpp.s

CMakeFiles/r-type_client.dir/Network/src/RemoteEndpoint.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/Network/src/RemoteEndpoint.cpp.o: ../Network/src/RemoteEndpoint.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/r-type_client.dir/Network/src/RemoteEndpoint.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/Network/src/RemoteEndpoint.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/RemoteEndpoint.cpp

CMakeFiles/r-type_client.dir/Network/src/RemoteEndpoint.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/Network/src/RemoteEndpoint.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/RemoteEndpoint.cpp > CMakeFiles/r-type_client.dir/Network/src/RemoteEndpoint.cpp.i

CMakeFiles/r-type_client.dir/Network/src/RemoteEndpoint.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/Network/src/RemoteEndpoint.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/RemoteEndpoint.cpp -o CMakeFiles/r-type_client.dir/Network/src/RemoteEndpoint.cpp.s

CMakeFiles/r-type_client.dir/Network/src/UDPReceiveSocket.cpp.o: CMakeFiles/r-type_client.dir/flags.make
CMakeFiles/r-type_client.dir/Network/src/UDPReceiveSocket.cpp.o: ../Network/src/UDPReceiveSocket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/r-type_client.dir/Network/src/UDPReceiveSocket.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/r-type_client.dir/Network/src/UDPReceiveSocket.cpp.o -c /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/UDPReceiveSocket.cpp

CMakeFiles/r-type_client.dir/Network/src/UDPReceiveSocket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/r-type_client.dir/Network/src/UDPReceiveSocket.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/UDPReceiveSocket.cpp > CMakeFiles/r-type_client.dir/Network/src/UDPReceiveSocket.cpp.i

CMakeFiles/r-type_client.dir/Network/src/UDPReceiveSocket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/r-type_client.dir/Network/src/UDPReceiveSocket.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/Network/src/UDPReceiveSocket.cpp -o CMakeFiles/r-type_client.dir/Network/src/UDPReceiveSocket.cpp.s

# Object files for target r-type_client
r__type_client_OBJECTS = \
"CMakeFiles/r-type_client.dir/Client/src/main.cpp.o" \
"CMakeFiles/r-type_client.dir/Client/src/Client.cpp.o" \
"CMakeFiles/r-type_client.dir/Client/src/GameClient.cpp.o" \
"CMakeFiles/r-type_client.dir/GameEngine/include/Core/EntityManager.cpp.o" \
"CMakeFiles/r-type_client.dir/GameEngine/src/Entity/EntityArray.cpp.o" \
"CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderSprite.cpp.o" \
"CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderParallax.cpp.o" \
"CMakeFiles/r-type_client.dir/GameEngine/src/System/GetAllPos.cpp.o" \
"CMakeFiles/r-type_client.dir/GameEngine/src/System/PlayerInput.cpp.o" \
"CMakeFiles/r-type_client.dir/Network/src/IOContext.cpp.o" \
"CMakeFiles/r-type_client.dir/Network/src/StreamBuffer.cpp.o" \
"CMakeFiles/r-type_client.dir/Network/src/UDPSendSocket.cpp.o" \
"CMakeFiles/r-type_client.dir/Network/src/UDPSend.cpp.o" \
"CMakeFiles/r-type_client.dir/Network/src/UDPReceive.cpp.o" \
"CMakeFiles/r-type_client.dir/Network/src/Endpoint.cpp.o" \
"CMakeFiles/r-type_client.dir/Network/src/RemoteEndpoint.cpp.o" \
"CMakeFiles/r-type_client.dir/Network/src/UDPReceiveSocket.cpp.o"

# External object files for target r-type_client
r__type_client_EXTERNAL_OBJECTS =

bin/r-type_client: CMakeFiles/r-type_client.dir/Client/src/main.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/Client/src/Client.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/Client/src/GameClient.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/GameEngine/include/Core/EntityManager.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/GameEngine/src/Entity/EntityArray.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderSprite.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/GameEngine/src/System/RenderParallax.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/GameEngine/src/System/GetAllPos.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/GameEngine/src/System/PlayerInput.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/Network/src/IOContext.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/Network/src/StreamBuffer.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/Network/src/UDPSendSocket.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/Network/src/UDPSend.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/Network/src/UDPReceive.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/Network/src/Endpoint.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/Network/src/RemoteEndpoint.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/Network/src/UDPReceiveSocket.cpp.o
bin/r-type_client: CMakeFiles/r-type_client.dir/build.make
bin/r-type_client: CMakeFiles/r-type_client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Linking CXX executable bin/r-type_client"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/r-type_client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/r-type_client.dir/build: bin/r-type_client

.PHONY : CMakeFiles/r-type_client.dir/build

CMakeFiles/r-type_client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/r-type_client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/r-type_client.dir/clean

CMakeFiles/r-type_client.dir/depend:
	cd /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build /home/teric/PROJECT/année_3/B-CPP-501-PAR-5-1-rtype-eric1.tran/build/CMakeFiles/r-type_client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/r-type_client.dir/depend

