# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\mwozn\OneDrive\Pulpit\SFML

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\mwozn\OneDrive\Pulpit\SFML\build

# Include any dependencies generated for this target.
include CMakeFiles/nibbles.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/nibbles.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/nibbles.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nibbles.dir/flags.make

CMakeFiles/nibbles.dir/src/main.cpp.obj: CMakeFiles/nibbles.dir/flags.make
CMakeFiles/nibbles.dir/src/main.cpp.obj: CMakeFiles/nibbles.dir/includes_CXX.rsp
CMakeFiles/nibbles.dir/src/main.cpp.obj: C:/Users/mwozn/OneDrive/Pulpit/SFML/src/main.cpp
CMakeFiles/nibbles.dir/src/main.cpp.obj: CMakeFiles/nibbles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\mwozn\OneDrive\Pulpit\SFML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nibbles.dir/src/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nibbles.dir/src/main.cpp.obj -MF CMakeFiles\nibbles.dir\src\main.cpp.obj.d -o CMakeFiles\nibbles.dir\src\main.cpp.obj -c C:\Users\mwozn\OneDrive\Pulpit\SFML\src\main.cpp

CMakeFiles/nibbles.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nibbles.dir/src/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mwozn\OneDrive\Pulpit\SFML\src\main.cpp > CMakeFiles\nibbles.dir\src\main.cpp.i

CMakeFiles/nibbles.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nibbles.dir/src/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mwozn\OneDrive\Pulpit\SFML\src\main.cpp -o CMakeFiles\nibbles.dir\src\main.cpp.s

CMakeFiles/nibbles.dir/src/game.cpp.obj: CMakeFiles/nibbles.dir/flags.make
CMakeFiles/nibbles.dir/src/game.cpp.obj: CMakeFiles/nibbles.dir/includes_CXX.rsp
CMakeFiles/nibbles.dir/src/game.cpp.obj: C:/Users/mwozn/OneDrive/Pulpit/SFML/src/game.cpp
CMakeFiles/nibbles.dir/src/game.cpp.obj: CMakeFiles/nibbles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\mwozn\OneDrive\Pulpit\SFML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/nibbles.dir/src/game.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nibbles.dir/src/game.cpp.obj -MF CMakeFiles\nibbles.dir\src\game.cpp.obj.d -o CMakeFiles\nibbles.dir\src\game.cpp.obj -c C:\Users\mwozn\OneDrive\Pulpit\SFML\src\game.cpp

CMakeFiles/nibbles.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nibbles.dir/src/game.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mwozn\OneDrive\Pulpit\SFML\src\game.cpp > CMakeFiles\nibbles.dir\src\game.cpp.i

CMakeFiles/nibbles.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nibbles.dir/src/game.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mwozn\OneDrive\Pulpit\SFML\src\game.cpp -o CMakeFiles\nibbles.dir\src\game.cpp.s

CMakeFiles/nibbles.dir/src/texture/textureManager.cpp.obj: CMakeFiles/nibbles.dir/flags.make
CMakeFiles/nibbles.dir/src/texture/textureManager.cpp.obj: CMakeFiles/nibbles.dir/includes_CXX.rsp
CMakeFiles/nibbles.dir/src/texture/textureManager.cpp.obj: C:/Users/mwozn/OneDrive/Pulpit/SFML/src/texture/textureManager.cpp
CMakeFiles/nibbles.dir/src/texture/textureManager.cpp.obj: CMakeFiles/nibbles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\mwozn\OneDrive\Pulpit\SFML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/nibbles.dir/src/texture/textureManager.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nibbles.dir/src/texture/textureManager.cpp.obj -MF CMakeFiles\nibbles.dir\src\texture\textureManager.cpp.obj.d -o CMakeFiles\nibbles.dir\src\texture\textureManager.cpp.obj -c C:\Users\mwozn\OneDrive\Pulpit\SFML\src\texture\textureManager.cpp

CMakeFiles/nibbles.dir/src/texture/textureManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nibbles.dir/src/texture/textureManager.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mwozn\OneDrive\Pulpit\SFML\src\texture\textureManager.cpp > CMakeFiles\nibbles.dir\src\texture\textureManager.cpp.i

CMakeFiles/nibbles.dir/src/texture/textureManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nibbles.dir/src/texture/textureManager.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mwozn\OneDrive\Pulpit\SFML\src\texture\textureManager.cpp -o CMakeFiles\nibbles.dir\src\texture\textureManager.cpp.s

CMakeFiles/nibbles.dir/src/texture/textureLoader.cpp.obj: CMakeFiles/nibbles.dir/flags.make
CMakeFiles/nibbles.dir/src/texture/textureLoader.cpp.obj: CMakeFiles/nibbles.dir/includes_CXX.rsp
CMakeFiles/nibbles.dir/src/texture/textureLoader.cpp.obj: C:/Users/mwozn/OneDrive/Pulpit/SFML/src/texture/textureLoader.cpp
CMakeFiles/nibbles.dir/src/texture/textureLoader.cpp.obj: CMakeFiles/nibbles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\mwozn\OneDrive\Pulpit\SFML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/nibbles.dir/src/texture/textureLoader.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nibbles.dir/src/texture/textureLoader.cpp.obj -MF CMakeFiles\nibbles.dir\src\texture\textureLoader.cpp.obj.d -o CMakeFiles\nibbles.dir\src\texture\textureLoader.cpp.obj -c C:\Users\mwozn\OneDrive\Pulpit\SFML\src\texture\textureLoader.cpp

CMakeFiles/nibbles.dir/src/texture/textureLoader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nibbles.dir/src/texture/textureLoader.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mwozn\OneDrive\Pulpit\SFML\src\texture\textureLoader.cpp > CMakeFiles\nibbles.dir\src\texture\textureLoader.cpp.i

CMakeFiles/nibbles.dir/src/texture/textureLoader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nibbles.dir/src/texture/textureLoader.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mwozn\OneDrive\Pulpit\SFML\src\texture\textureLoader.cpp -o CMakeFiles\nibbles.dir\src\texture\textureLoader.cpp.s

CMakeFiles/nibbles.dir/src/renderer/renderer.cpp.obj: CMakeFiles/nibbles.dir/flags.make
CMakeFiles/nibbles.dir/src/renderer/renderer.cpp.obj: CMakeFiles/nibbles.dir/includes_CXX.rsp
CMakeFiles/nibbles.dir/src/renderer/renderer.cpp.obj: C:/Users/mwozn/OneDrive/Pulpit/SFML/src/renderer/renderer.cpp
CMakeFiles/nibbles.dir/src/renderer/renderer.cpp.obj: CMakeFiles/nibbles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\mwozn\OneDrive\Pulpit\SFML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/nibbles.dir/src/renderer/renderer.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nibbles.dir/src/renderer/renderer.cpp.obj -MF CMakeFiles\nibbles.dir\src\renderer\renderer.cpp.obj.d -o CMakeFiles\nibbles.dir\src\renderer\renderer.cpp.obj -c C:\Users\mwozn\OneDrive\Pulpit\SFML\src\renderer\renderer.cpp

CMakeFiles/nibbles.dir/src/renderer/renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nibbles.dir/src/renderer/renderer.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mwozn\OneDrive\Pulpit\SFML\src\renderer\renderer.cpp > CMakeFiles\nibbles.dir\src\renderer\renderer.cpp.i

CMakeFiles/nibbles.dir/src/renderer/renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nibbles.dir/src/renderer/renderer.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mwozn\OneDrive\Pulpit\SFML\src\renderer\renderer.cpp -o CMakeFiles\nibbles.dir\src\renderer\renderer.cpp.s

CMakeFiles/nibbles.dir/src/objects/objectManager.cpp.obj: CMakeFiles/nibbles.dir/flags.make
CMakeFiles/nibbles.dir/src/objects/objectManager.cpp.obj: CMakeFiles/nibbles.dir/includes_CXX.rsp
CMakeFiles/nibbles.dir/src/objects/objectManager.cpp.obj: C:/Users/mwozn/OneDrive/Pulpit/SFML/src/objects/objectManager.cpp
CMakeFiles/nibbles.dir/src/objects/objectManager.cpp.obj: CMakeFiles/nibbles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\mwozn\OneDrive\Pulpit\SFML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/nibbles.dir/src/objects/objectManager.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nibbles.dir/src/objects/objectManager.cpp.obj -MF CMakeFiles\nibbles.dir\src\objects\objectManager.cpp.obj.d -o CMakeFiles\nibbles.dir\src\objects\objectManager.cpp.obj -c C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\objectManager.cpp

CMakeFiles/nibbles.dir/src/objects/objectManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nibbles.dir/src/objects/objectManager.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\objectManager.cpp > CMakeFiles\nibbles.dir\src\objects\objectManager.cpp.i

CMakeFiles/nibbles.dir/src/objects/objectManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nibbles.dir/src/objects/objectManager.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\objectManager.cpp -o CMakeFiles\nibbles.dir\src\objects\objectManager.cpp.s

CMakeFiles/nibbles.dir/src/objects/Entity/entityManager.cpp.obj: CMakeFiles/nibbles.dir/flags.make
CMakeFiles/nibbles.dir/src/objects/Entity/entityManager.cpp.obj: CMakeFiles/nibbles.dir/includes_CXX.rsp
CMakeFiles/nibbles.dir/src/objects/Entity/entityManager.cpp.obj: C:/Users/mwozn/OneDrive/Pulpit/SFML/src/objects/Entity/entityManager.cpp
CMakeFiles/nibbles.dir/src/objects/Entity/entityManager.cpp.obj: CMakeFiles/nibbles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\mwozn\OneDrive\Pulpit\SFML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/nibbles.dir/src/objects/Entity/entityManager.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nibbles.dir/src/objects/Entity/entityManager.cpp.obj -MF CMakeFiles\nibbles.dir\src\objects\Entity\entityManager.cpp.obj.d -o CMakeFiles\nibbles.dir\src\objects\Entity\entityManager.cpp.obj -c C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Entity\entityManager.cpp

CMakeFiles/nibbles.dir/src/objects/Entity/entityManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nibbles.dir/src/objects/Entity/entityManager.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Entity\entityManager.cpp > CMakeFiles\nibbles.dir\src\objects\Entity\entityManager.cpp.i

CMakeFiles/nibbles.dir/src/objects/Entity/entityManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nibbles.dir/src/objects/Entity/entityManager.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Entity\entityManager.cpp -o CMakeFiles\nibbles.dir\src\objects\Entity\entityManager.cpp.s

CMakeFiles/nibbles.dir/src/objects/Map/mapManager.cpp.obj: CMakeFiles/nibbles.dir/flags.make
CMakeFiles/nibbles.dir/src/objects/Map/mapManager.cpp.obj: CMakeFiles/nibbles.dir/includes_CXX.rsp
CMakeFiles/nibbles.dir/src/objects/Map/mapManager.cpp.obj: C:/Users/mwozn/OneDrive/Pulpit/SFML/src/objects/Map/mapManager.cpp
CMakeFiles/nibbles.dir/src/objects/Map/mapManager.cpp.obj: CMakeFiles/nibbles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\mwozn\OneDrive\Pulpit\SFML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/nibbles.dir/src/objects/Map/mapManager.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nibbles.dir/src/objects/Map/mapManager.cpp.obj -MF CMakeFiles\nibbles.dir\src\objects\Map\mapManager.cpp.obj.d -o CMakeFiles\nibbles.dir\src\objects\Map\mapManager.cpp.obj -c C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Map\mapManager.cpp

CMakeFiles/nibbles.dir/src/objects/Map/mapManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nibbles.dir/src/objects/Map/mapManager.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Map\mapManager.cpp > CMakeFiles\nibbles.dir\src\objects\Map\mapManager.cpp.i

CMakeFiles/nibbles.dir/src/objects/Map/mapManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nibbles.dir/src/objects/Map/mapManager.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Map\mapManager.cpp -o CMakeFiles\nibbles.dir\src\objects\Map\mapManager.cpp.s

CMakeFiles/nibbles.dir/src/objects/Map/structure.cpp.obj: CMakeFiles/nibbles.dir/flags.make
CMakeFiles/nibbles.dir/src/objects/Map/structure.cpp.obj: CMakeFiles/nibbles.dir/includes_CXX.rsp
CMakeFiles/nibbles.dir/src/objects/Map/structure.cpp.obj: C:/Users/mwozn/OneDrive/Pulpit/SFML/src/objects/Map/structure.cpp
CMakeFiles/nibbles.dir/src/objects/Map/structure.cpp.obj: CMakeFiles/nibbles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\mwozn\OneDrive\Pulpit\SFML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/nibbles.dir/src/objects/Map/structure.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nibbles.dir/src/objects/Map/structure.cpp.obj -MF CMakeFiles\nibbles.dir\src\objects\Map\structure.cpp.obj.d -o CMakeFiles\nibbles.dir\src\objects\Map\structure.cpp.obj -c C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Map\structure.cpp

CMakeFiles/nibbles.dir/src/objects/Map/structure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nibbles.dir/src/objects/Map/structure.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Map\structure.cpp > CMakeFiles\nibbles.dir\src\objects\Map\structure.cpp.i

CMakeFiles/nibbles.dir/src/objects/Map/structure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nibbles.dir/src/objects/Map/structure.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Map\structure.cpp -o CMakeFiles\nibbles.dir\src\objects\Map\structure.cpp.s

CMakeFiles/nibbles.dir/src/objects/Map/Dots/dotsManager.cpp.obj: CMakeFiles/nibbles.dir/flags.make
CMakeFiles/nibbles.dir/src/objects/Map/Dots/dotsManager.cpp.obj: CMakeFiles/nibbles.dir/includes_CXX.rsp
CMakeFiles/nibbles.dir/src/objects/Map/Dots/dotsManager.cpp.obj: C:/Users/mwozn/OneDrive/Pulpit/SFML/src/objects/Map/Dots/dotsManager.cpp
CMakeFiles/nibbles.dir/src/objects/Map/Dots/dotsManager.cpp.obj: CMakeFiles/nibbles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\mwozn\OneDrive\Pulpit\SFML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/nibbles.dir/src/objects/Map/Dots/dotsManager.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nibbles.dir/src/objects/Map/Dots/dotsManager.cpp.obj -MF CMakeFiles\nibbles.dir\src\objects\Map\Dots\dotsManager.cpp.obj.d -o CMakeFiles\nibbles.dir\src\objects\Map\Dots\dotsManager.cpp.obj -c C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Map\Dots\dotsManager.cpp

CMakeFiles/nibbles.dir/src/objects/Map/Dots/dotsManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nibbles.dir/src/objects/Map/Dots/dotsManager.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Map\Dots\dotsManager.cpp > CMakeFiles\nibbles.dir\src\objects\Map\Dots\dotsManager.cpp.i

CMakeFiles/nibbles.dir/src/objects/Map/Dots/dotsManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nibbles.dir/src/objects/Map/Dots/dotsManager.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Map\Dots\dotsManager.cpp -o CMakeFiles\nibbles.dir\src\objects\Map\Dots\dotsManager.cpp.s

CMakeFiles/nibbles.dir/src/objects/Map/Dots/dots.cpp.obj: CMakeFiles/nibbles.dir/flags.make
CMakeFiles/nibbles.dir/src/objects/Map/Dots/dots.cpp.obj: CMakeFiles/nibbles.dir/includes_CXX.rsp
CMakeFiles/nibbles.dir/src/objects/Map/Dots/dots.cpp.obj: C:/Users/mwozn/OneDrive/Pulpit/SFML/src/objects/Map/Dots/dots.cpp
CMakeFiles/nibbles.dir/src/objects/Map/Dots/dots.cpp.obj: CMakeFiles/nibbles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\mwozn\OneDrive\Pulpit\SFML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/nibbles.dir/src/objects/Map/Dots/dots.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nibbles.dir/src/objects/Map/Dots/dots.cpp.obj -MF CMakeFiles\nibbles.dir\src\objects\Map\Dots\dots.cpp.obj.d -o CMakeFiles\nibbles.dir\src\objects\Map\Dots\dots.cpp.obj -c C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Map\Dots\dots.cpp

CMakeFiles/nibbles.dir/src/objects/Map/Dots/dots.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nibbles.dir/src/objects/Map/Dots/dots.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Map\Dots\dots.cpp > CMakeFiles\nibbles.dir\src\objects\Map\Dots\dots.cpp.i

CMakeFiles/nibbles.dir/src/objects/Map/Dots/dots.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nibbles.dir/src/objects/Map/Dots/dots.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mwozn\OneDrive\Pulpit\SFML\src\objects\Map\Dots\dots.cpp -o CMakeFiles\nibbles.dir\src\objects\Map\Dots\dots.cpp.s

# Object files for target nibbles
nibbles_OBJECTS = \
"CMakeFiles/nibbles.dir/src/main.cpp.obj" \
"CMakeFiles/nibbles.dir/src/game.cpp.obj" \
"CMakeFiles/nibbles.dir/src/texture/textureManager.cpp.obj" \
"CMakeFiles/nibbles.dir/src/texture/textureLoader.cpp.obj" \
"CMakeFiles/nibbles.dir/src/renderer/renderer.cpp.obj" \
"CMakeFiles/nibbles.dir/src/objects/objectManager.cpp.obj" \
"CMakeFiles/nibbles.dir/src/objects/Entity/entityManager.cpp.obj" \
"CMakeFiles/nibbles.dir/src/objects/Map/mapManager.cpp.obj" \
"CMakeFiles/nibbles.dir/src/objects/Map/structure.cpp.obj" \
"CMakeFiles/nibbles.dir/src/objects/Map/Dots/dotsManager.cpp.obj" \
"CMakeFiles/nibbles.dir/src/objects/Map/Dots/dots.cpp.obj"

# External object files for target nibbles
nibbles_EXTERNAL_OBJECTS =

nibbles.exe: CMakeFiles/nibbles.dir/src/main.cpp.obj
nibbles.exe: CMakeFiles/nibbles.dir/src/game.cpp.obj
nibbles.exe: CMakeFiles/nibbles.dir/src/texture/textureManager.cpp.obj
nibbles.exe: CMakeFiles/nibbles.dir/src/texture/textureLoader.cpp.obj
nibbles.exe: CMakeFiles/nibbles.dir/src/renderer/renderer.cpp.obj
nibbles.exe: CMakeFiles/nibbles.dir/src/objects/objectManager.cpp.obj
nibbles.exe: CMakeFiles/nibbles.dir/src/objects/Entity/entityManager.cpp.obj
nibbles.exe: CMakeFiles/nibbles.dir/src/objects/Map/mapManager.cpp.obj
nibbles.exe: CMakeFiles/nibbles.dir/src/objects/Map/structure.cpp.obj
nibbles.exe: CMakeFiles/nibbles.dir/src/objects/Map/Dots/dotsManager.cpp.obj
nibbles.exe: CMakeFiles/nibbles.dir/src/objects/Map/Dots/dots.cpp.obj
nibbles.exe: CMakeFiles/nibbles.dir/build.make
nibbles.exe: C:/SFML/lib/libsfml-system-d.a
nibbles.exe: C:/SFML/lib/libsfml-window-d.a
nibbles.exe: C:/SFML/lib/libsfml-graphics-d.a
nibbles.exe: CMakeFiles/nibbles.dir/linkLibs.rsp
nibbles.exe: CMakeFiles/nibbles.dir/objects1.rsp
nibbles.exe: CMakeFiles/nibbles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\mwozn\OneDrive\Pulpit\SFML\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable nibbles.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\nibbles.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nibbles.dir/build: nibbles.exe
.PHONY : CMakeFiles/nibbles.dir/build

CMakeFiles/nibbles.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\nibbles.dir\cmake_clean.cmake
.PHONY : CMakeFiles/nibbles.dir/clean

CMakeFiles/nibbles.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\mwozn\OneDrive\Pulpit\SFML C:\Users\mwozn\OneDrive\Pulpit\SFML C:\Users\mwozn\OneDrive\Pulpit\SFML\build C:\Users\mwozn\OneDrive\Pulpit\SFML\build C:\Users\mwozn\OneDrive\Pulpit\SFML\build\CMakeFiles\nibbles.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/nibbles.dir/depend

