# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /opt/clion-2017.1.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.1.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/patrik/C++/PhysicsEngine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/patrik/C++/PhysicsEngine/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PhysicsEngine.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PhysicsEngine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PhysicsEngine.dir/flags.make

CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o: CMakeFiles/PhysicsEngine.dir/flags.make
CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o: ../Main/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/patrik/C++/PhysicsEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o -c /home/patrik/C++/PhysicsEngine/Main/main.cpp

CMakeFiles/PhysicsEngine.dir/Main/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PhysicsEngine.dir/Main/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/patrik/C++/PhysicsEngine/Main/main.cpp > CMakeFiles/PhysicsEngine.dir/Main/main.cpp.i

CMakeFiles/PhysicsEngine.dir/Main/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PhysicsEngine.dir/Main/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/patrik/C++/PhysicsEngine/Main/main.cpp -o CMakeFiles/PhysicsEngine.dir/Main/main.cpp.s

CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o.requires:

.PHONY : CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o.requires

CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o.provides: CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/PhysicsEngine.dir/build.make CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o.provides.build
.PHONY : CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o.provides

CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o.provides.build: CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o


CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o: CMakeFiles/PhysicsEngine.dir/flags.make
CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o: ../Main/Application.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/patrik/C++/PhysicsEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o -c /home/patrik/C++/PhysicsEngine/Main/Application.cpp

CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/patrik/C++/PhysicsEngine/Main/Application.cpp > CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.i

CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/patrik/C++/PhysicsEngine/Main/Application.cpp -o CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.s

CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o.requires:

.PHONY : CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o.requires

CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o.provides: CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o.requires
	$(MAKE) -f CMakeFiles/PhysicsEngine.dir/build.make CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o.provides.build
.PHONY : CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o.provides

CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o.provides.build: CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o


CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o: CMakeFiles/PhysicsEngine.dir/flags.make
CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o: ../Main/Display.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/patrik/C++/PhysicsEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o -c /home/patrik/C++/PhysicsEngine/Main/Display.cpp

CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/patrik/C++/PhysicsEngine/Main/Display.cpp > CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.i

CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/patrik/C++/PhysicsEngine/Main/Display.cpp -o CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.s

CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o.requires:

.PHONY : CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o.requires

CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o.provides: CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o.requires
	$(MAKE) -f CMakeFiles/PhysicsEngine.dir/build.make CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o.provides.build
.PHONY : CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o.provides

CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o.provides.build: CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o


CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o: CMakeFiles/PhysicsEngine.dir/flags.make
CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o: ../State/GameState.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/patrik/C++/PhysicsEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o -c /home/patrik/C++/PhysicsEngine/State/GameState.cpp

CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/patrik/C++/PhysicsEngine/State/GameState.cpp > CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.i

CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/patrik/C++/PhysicsEngine/State/GameState.cpp -o CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.s

CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o.requires:

.PHONY : CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o.requires

CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o.provides: CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o.requires
	$(MAKE) -f CMakeFiles/PhysicsEngine.dir/build.make CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o.provides.build
.PHONY : CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o.provides

CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o.provides.build: CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o


CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o: CMakeFiles/PhysicsEngine.dir/flags.make
CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o: ../State/PlayingState.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/patrik/C++/PhysicsEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o -c /home/patrik/C++/PhysicsEngine/State/PlayingState.cpp

CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/patrik/C++/PhysicsEngine/State/PlayingState.cpp > CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.i

CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/patrik/C++/PhysicsEngine/State/PlayingState.cpp -o CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.s

CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o.requires:

.PHONY : CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o.requires

CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o.provides: CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o.requires
	$(MAKE) -f CMakeFiles/PhysicsEngine.dir/build.make CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o.provides.build
.PHONY : CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o.provides

CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o.provides.build: CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o


CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o: CMakeFiles/PhysicsEngine.dir/flags.make
CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o: ../GameObjects/GameObject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/patrik/C++/PhysicsEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o -c /home/patrik/C++/PhysicsEngine/GameObjects/GameObject.cpp

CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/patrik/C++/PhysicsEngine/GameObjects/GameObject.cpp > CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.i

CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/patrik/C++/PhysicsEngine/GameObjects/GameObject.cpp -o CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.s

CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o.requires:

.PHONY : CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o.requires

CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o.provides: CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o.requires
	$(MAKE) -f CMakeFiles/PhysicsEngine.dir/build.make CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o.provides.build
.PHONY : CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o.provides

CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o.provides.build: CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o


CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o: CMakeFiles/PhysicsEngine.dir/flags.make
CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o: ../GameObjects/Component.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/patrik/C++/PhysicsEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o -c /home/patrik/C++/PhysicsEngine/GameObjects/Component.cpp

CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/patrik/C++/PhysicsEngine/GameObjects/Component.cpp > CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.i

CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/patrik/C++/PhysicsEngine/GameObjects/Component.cpp -o CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.s

CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o.requires:

.PHONY : CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o.requires

CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o.provides: CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o.requires
	$(MAKE) -f CMakeFiles/PhysicsEngine.dir/build.make CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o.provides.build
.PHONY : CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o.provides

CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o.provides.build: CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o


CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o: CMakeFiles/PhysicsEngine.dir/flags.make
CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o: ../State/State_impl/MainGameState.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/patrik/C++/PhysicsEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o -c /home/patrik/C++/PhysicsEngine/State/State_impl/MainGameState.cpp

CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/patrik/C++/PhysicsEngine/State/State_impl/MainGameState.cpp > CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.i

CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/patrik/C++/PhysicsEngine/State/State_impl/MainGameState.cpp -o CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.s

CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o.requires:

.PHONY : CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o.requires

CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o.provides: CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o.requires
	$(MAKE) -f CMakeFiles/PhysicsEngine.dir/build.make CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o.provides.build
.PHONY : CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o.provides

CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o.provides.build: CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o


CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o: CMakeFiles/PhysicsEngine.dir/flags.make
CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o: ../GameObjects/Rigidbody.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/patrik/C++/PhysicsEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o -c /home/patrik/C++/PhysicsEngine/GameObjects/Rigidbody.cpp

CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/patrik/C++/PhysicsEngine/GameObjects/Rigidbody.cpp > CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.i

CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/patrik/C++/PhysicsEngine/GameObjects/Rigidbody.cpp -o CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.s

CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o.requires:

.PHONY : CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o.requires

CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o.provides: CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o.requires
	$(MAKE) -f CMakeFiles/PhysicsEngine.dir/build.make CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o.provides.build
.PHONY : CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o.provides

CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o.provides.build: CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o


# Object files for target PhysicsEngine
PhysicsEngine_OBJECTS = \
"CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o" \
"CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o" \
"CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o" \
"CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o" \
"CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o" \
"CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o" \
"CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o" \
"CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o" \
"CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o"

# External object files for target PhysicsEngine
PhysicsEngine_EXTERNAL_OBJECTS =

PhysicsEngine: CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o
PhysicsEngine: CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o
PhysicsEngine: CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o
PhysicsEngine: CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o
PhysicsEngine: CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o
PhysicsEngine: CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o
PhysicsEngine: CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o
PhysicsEngine: CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o
PhysicsEngine: CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o
PhysicsEngine: CMakeFiles/PhysicsEngine.dir/build.make
PhysicsEngine: /usr/lib/x86_64-linux-gnu/libsfml-system.so
PhysicsEngine: /usr/lib/x86_64-linux-gnu/libsfml-window.so
PhysicsEngine: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so
PhysicsEngine: /usr/lib/x86_64-linux-gnu/libsfml-network.so
PhysicsEngine: /usr/lib/x86_64-linux-gnu/libsfml-audio.so
PhysicsEngine: CMakeFiles/PhysicsEngine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/patrik/C++/PhysicsEngine/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable PhysicsEngine"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PhysicsEngine.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PhysicsEngine.dir/build: PhysicsEngine

.PHONY : CMakeFiles/PhysicsEngine.dir/build

CMakeFiles/PhysicsEngine.dir/requires: CMakeFiles/PhysicsEngine.dir/Main/main.cpp.o.requires
CMakeFiles/PhysicsEngine.dir/requires: CMakeFiles/PhysicsEngine.dir/Main/Application.cpp.o.requires
CMakeFiles/PhysicsEngine.dir/requires: CMakeFiles/PhysicsEngine.dir/Main/Display.cpp.o.requires
CMakeFiles/PhysicsEngine.dir/requires: CMakeFiles/PhysicsEngine.dir/State/GameState.cpp.o.requires
CMakeFiles/PhysicsEngine.dir/requires: CMakeFiles/PhysicsEngine.dir/State/PlayingState.cpp.o.requires
CMakeFiles/PhysicsEngine.dir/requires: CMakeFiles/PhysicsEngine.dir/GameObjects/GameObject.cpp.o.requires
CMakeFiles/PhysicsEngine.dir/requires: CMakeFiles/PhysicsEngine.dir/GameObjects/Component.cpp.o.requires
CMakeFiles/PhysicsEngine.dir/requires: CMakeFiles/PhysicsEngine.dir/State/State_impl/MainGameState.cpp.o.requires
CMakeFiles/PhysicsEngine.dir/requires: CMakeFiles/PhysicsEngine.dir/GameObjects/Rigidbody.cpp.o.requires

.PHONY : CMakeFiles/PhysicsEngine.dir/requires

CMakeFiles/PhysicsEngine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PhysicsEngine.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PhysicsEngine.dir/clean

CMakeFiles/PhysicsEngine.dir/depend:
	cd /home/patrik/C++/PhysicsEngine/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/patrik/C++/PhysicsEngine /home/patrik/C++/PhysicsEngine /home/patrik/C++/PhysicsEngine/cmake-build-debug /home/patrik/C++/PhysicsEngine/cmake-build-debug /home/patrik/C++/PhysicsEngine/cmake-build-debug/CMakeFiles/PhysicsEngine.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PhysicsEngine.dir/depend
