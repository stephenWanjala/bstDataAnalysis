# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/wanjala/CLionProjects/bstC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wanjala/CLionProjects/bstC

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/wanjala/CLionProjects/bstC/CMakeFiles /home/wanjala/CLionProjects/bstC//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/wanjala/CLionProjects/bstC/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named bstC

# Build rule for target.
bstC: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 bstC
.PHONY : bstC

# fast build rule for target.
bstC/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/build
.PHONY : bstC/fast

BST.o: BST.cpp.o
.PHONY : BST.o

# target to build an object file
BST.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/BST.cpp.o
.PHONY : BST.cpp.o

BST.i: BST.cpp.i
.PHONY : BST.i

# target to preprocess a source file
BST.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/BST.cpp.i
.PHONY : BST.cpp.i

BST.s: BST.cpp.s
.PHONY : BST.s

# target to generate assembly for a file
BST.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/BST.cpp.s
.PHONY : BST.cpp.s

DataAnalysis.o: DataAnalysis.cpp.o
.PHONY : DataAnalysis.o

# target to build an object file
DataAnalysis.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/DataAnalysis.cpp.o
.PHONY : DataAnalysis.cpp.o

DataAnalysis.i: DataAnalysis.cpp.i
.PHONY : DataAnalysis.i

# target to preprocess a source file
DataAnalysis.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/DataAnalysis.cpp.i
.PHONY : DataAnalysis.cpp.i

DataAnalysis.s: DataAnalysis.cpp.s
.PHONY : DataAnalysis.s

# target to generate assembly for a file
DataAnalysis.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/DataAnalysis.cpp.s
.PHONY : DataAnalysis.cpp.s

Node.o: Node.cpp.o
.PHONY : Node.o

# target to build an object file
Node.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/Node.cpp.o
.PHONY : Node.cpp.o

Node.i: Node.cpp.i
.PHONY : Node.i

# target to preprocess a source file
Node.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/Node.cpp.i
.PHONY : Node.cpp.i

Node.s: Node.cpp.s
.PHONY : Node.s

# target to generate assembly for a file
Node.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/Node.cpp.s
.PHONY : Node.cpp.s

TransactionNode.o: TransactionNode.cpp.o
.PHONY : TransactionNode.o

# target to build an object file
TransactionNode.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/TransactionNode.cpp.o
.PHONY : TransactionNode.cpp.o

TransactionNode.i: TransactionNode.cpp.i
.PHONY : TransactionNode.i

# target to preprocess a source file
TransactionNode.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/TransactionNode.cpp.i
.PHONY : TransactionNode.cpp.i

TransactionNode.s: TransactionNode.cpp.s
.PHONY : TransactionNode.s

# target to generate assembly for a file
TransactionNode.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/TransactionNode.cpp.s
.PHONY : TransactionNode.cpp.s

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bstC.dir/build.make CMakeFiles/bstC.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... bstC"
	@echo "... BST.o"
	@echo "... BST.i"
	@echo "... BST.s"
	@echo "... DataAnalysis.o"
	@echo "... DataAnalysis.i"
	@echo "... DataAnalysis.s"
	@echo "... Node.o"
	@echo "... Node.i"
	@echo "... Node.s"
	@echo "... TransactionNode.o"
	@echo "... TransactionNode.i"
	@echo "... TransactionNode.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

