# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\raust\OneDrive\Stalinis kompiuteris\Project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\raust\OneDrive\Stalinis kompiuteris\Project\cmake-build-debug"

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	"C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe" -E echo "No interactive CMake dialog available."
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	"C:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe" --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start "C:\Users\raust\OneDrive\Stalinis kompiuteris\Project\cmake-build-debug\CMakeFiles" "C:\Users\raust\OneDrive\Stalinis kompiuteris\Project\cmake-build-debug\CMakeFiles\progress.marks"
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start "C:\Users\raust\OneDrive\Stalinis kompiuteris\Project\cmake-build-debug\CMakeFiles" 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named TietoEVRY

# Build rule for target.
TietoEVRY: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles\Makefile2 TietoEVRY
.PHONY : TietoEVRY

# fast build rule for target.
TietoEVRY/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/build
.PHONY : TietoEVRY/fast

AutumnBag.obj: AutumnBag.cpp.obj

.PHONY : AutumnBag.obj

# target to build an object file
AutumnBag.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/AutumnBag.cpp.obj
.PHONY : AutumnBag.cpp.obj

AutumnBag.i: AutumnBag.cpp.i

.PHONY : AutumnBag.i

# target to preprocess a source file
AutumnBag.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/AutumnBag.cpp.i
.PHONY : AutumnBag.cpp.i

AutumnBag.s: AutumnBag.cpp.s

.PHONY : AutumnBag.s

# target to generate assembly for a file
AutumnBag.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/AutumnBag.cpp.s
.PHONY : AutumnBag.cpp.s

Bag.obj: Bag.cpp.obj

.PHONY : Bag.obj

# target to build an object file
Bag.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/Bag.cpp.obj
.PHONY : Bag.cpp.obj

Bag.i: Bag.cpp.i

.PHONY : Bag.i

# target to preprocess a source file
Bag.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/Bag.cpp.i
.PHONY : Bag.cpp.i

Bag.s: Bag.cpp.s

.PHONY : Bag.s

# target to generate assembly for a file
Bag.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/Bag.cpp.s
.PHONY : Bag.cpp.s

SpringBag.obj: SpringBag.cpp.obj

.PHONY : SpringBag.obj

# target to build an object file
SpringBag.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/SpringBag.cpp.obj
.PHONY : SpringBag.cpp.obj

SpringBag.i: SpringBag.cpp.i

.PHONY : SpringBag.i

# target to preprocess a source file
SpringBag.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/SpringBag.cpp.i
.PHONY : SpringBag.cpp.i

SpringBag.s: SpringBag.cpp.s

.PHONY : SpringBag.s

# target to generate assembly for a file
SpringBag.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/SpringBag.cpp.s
.PHONY : SpringBag.cpp.s

SummerBag.obj: SummerBag.cpp.obj

.PHONY : SummerBag.obj

# target to build an object file
SummerBag.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/SummerBag.cpp.obj
.PHONY : SummerBag.cpp.obj

SummerBag.i: SummerBag.cpp.i

.PHONY : SummerBag.i

# target to preprocess a source file
SummerBag.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/SummerBag.cpp.i
.PHONY : SummerBag.cpp.i

SummerBag.s: SummerBag.cpp.s

.PHONY : SummerBag.s

# target to generate assembly for a file
SummerBag.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/SummerBag.cpp.s
.PHONY : SummerBag.cpp.s

WinterBag.obj: WinterBag.cpp.obj

.PHONY : WinterBag.obj

# target to build an object file
WinterBag.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/WinterBag.cpp.obj
.PHONY : WinterBag.cpp.obj

WinterBag.i: WinterBag.cpp.i

.PHONY : WinterBag.i

# target to preprocess a source file
WinterBag.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/WinterBag.cpp.i
.PHONY : WinterBag.cpp.i

WinterBag.s: WinterBag.cpp.s

.PHONY : WinterBag.s

# target to generate assembly for a file
WinterBag.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/WinterBag.cpp.s
.PHONY : WinterBag.cpp.s

main.obj: main.cpp.obj

.PHONY : main.obj

# target to build an object file
main.cpp.obj:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/main.cpp.obj
.PHONY : main.cpp.obj

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles\TietoEVRY.dir\build.make CMakeFiles/TietoEVRY.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... edit_cache
	@echo ... rebuild_cache
	@echo ... TietoEVRY
	@echo ... AutumnBag.obj
	@echo ... AutumnBag.i
	@echo ... AutumnBag.s
	@echo ... Bag.obj
	@echo ... Bag.i
	@echo ... Bag.s
	@echo ... SpringBag.obj
	@echo ... SpringBag.i
	@echo ... SpringBag.s
	@echo ... SummerBag.obj
	@echo ... SummerBag.i
	@echo ... SummerBag.s
	@echo ... WinterBag.obj
	@echo ... WinterBag.i
	@echo ... WinterBag.s
	@echo ... main.obj
	@echo ... main.i
	@echo ... main.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system

