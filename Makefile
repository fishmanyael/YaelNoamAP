# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.12

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\yael\CLionProjects\projet

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\yael\CLionProjects\projet\cmake-build-debug

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	echo >nul && "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe" -E echo "No interactive CMake dialog available."
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache\fast: edit_cache

.PHONY : edit_cache\fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	echo >nul && "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe" -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache\fast: rebuild_cache

.PHONY : rebuild_cache\fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Users\yael\CLionProjects\projet\cmake-build-debug\CMakeFiles C:\Users\yael\CLionProjects\projet\cmake-build-debug\CMakeFiles\progress.marks
	$(MAKE) -f CMakeFiles\Makefile2 /nologo -$(MAKEFLAGS) all
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Users\yael\CLionProjects\projet\cmake-build-debug\CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles\Makefile2 /nologo -$(MAKEFLAGS) clean
.PHONY : clean

# The main clean target
clean\fast: clean

.PHONY : clean\fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles\Makefile2 /nologo -$(MAKEFLAGS) preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall\fast:
	$(MAKE) -f CMakeFiles\Makefile2 /nologo -$(MAKEFLAGS) preinstall
.PHONY : preinstall\fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named projet

# Build rule for target.
projet: cmake_check_build_system
	$(MAKE) -f CMakeFiles\Makefile2 /nologo -$(MAKEFLAGS) projet
.PHONY : projet

# fast build rule for target.
projet\fast:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\build
.PHONY : projet\fast

AbstractCommand.obj: AbstractCommand.cpp.obj

.PHONY : AbstractCommand.obj

# target to build an object file
AbstractCommand.cpp.obj:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\AbstractCommand.cpp.obj
.PHONY : AbstractCommand.cpp.obj

AbstractCommand.i: AbstractCommand.cpp.i

.PHONY : AbstractCommand.i

# target to preprocess a source file
AbstractCommand.cpp.i:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\AbstractCommand.cpp.i
.PHONY : AbstractCommand.cpp.i

AbstractCommand.s: AbstractCommand.cpp.s

.PHONY : AbstractCommand.s

# target to generate assembly for a file
AbstractCommand.cpp.s:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\AbstractCommand.cpp.s
.PHONY : AbstractCommand.cpp.s

CommandExpression.obj: CommandExpression.cpp.obj

.PHONY : CommandExpression.obj

# target to build an object file
CommandExpression.cpp.obj:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\CommandExpression.cpp.obj
.PHONY : CommandExpression.cpp.obj

CommandExpression.i: CommandExpression.cpp.i

.PHONY : CommandExpression.i

# target to preprocess a source file
CommandExpression.cpp.i:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\CommandExpression.cpp.i
.PHONY : CommandExpression.cpp.i

CommandExpression.s: CommandExpression.cpp.s

.PHONY : CommandExpression.s

# target to generate assembly for a file
CommandExpression.cpp.s:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\CommandExpression.cpp.s
.PHONY : CommandExpression.cpp.s

ConditionCommand.obj: ConditionCommand.cpp.obj

.PHONY : ConditionCommand.obj

# target to build an object file
ConditionCommand.cpp.obj:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\ConditionCommand.cpp.obj
.PHONY : ConditionCommand.cpp.obj

ConditionCommand.i: ConditionCommand.cpp.i

.PHONY : ConditionCommand.i

# target to preprocess a source file
ConditionCommand.cpp.i:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\ConditionCommand.cpp.i
.PHONY : ConditionCommand.cpp.i

ConditionCommand.s: ConditionCommand.cpp.s

.PHONY : ConditionCommand.s

# target to generate assembly for a file
ConditionCommand.cpp.s:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\ConditionCommand.cpp.s
.PHONY : ConditionCommand.cpp.s

EnterC.obj: EnterC.cpp.obj

.PHONY : EnterC.obj

# target to build an object file
EnterC.cpp.obj:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\EnterC.cpp.obj
.PHONY : EnterC.cpp.obj

EnterC.i: EnterC.cpp.i

.PHONY : EnterC.i

# target to preprocess a source file
EnterC.cpp.i:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\EnterC.cpp.i
.PHONY : EnterC.cpp.i

EnterC.s: EnterC.cpp.s

.PHONY : EnterC.s

# target to generate assembly for a file
EnterC.cpp.s:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\EnterC.cpp.s
.PHONY : EnterC.cpp.s

IfCommand.obj: IfCommand.cpp.obj

.PHONY : IfCommand.obj

# target to build an object file
IfCommand.cpp.obj:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\IfCommand.cpp.obj
.PHONY : IfCommand.cpp.obj

IfCommand.i: IfCommand.cpp.i

.PHONY : IfCommand.i

# target to preprocess a source file
IfCommand.cpp.i:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\IfCommand.cpp.i
.PHONY : IfCommand.cpp.i

IfCommand.s: IfCommand.cpp.s

.PHONY : IfCommand.s

# target to generate assembly for a file
IfCommand.cpp.s:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\IfCommand.cpp.s
.PHONY : IfCommand.cpp.s

Interpreter.obj: Interpreter.cpp.obj

.PHONY : Interpreter.obj

# target to build an object file
Interpreter.cpp.obj:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\Interpreter.cpp.obj
.PHONY : Interpreter.cpp.obj

Interpreter.i: Interpreter.cpp.i

.PHONY : Interpreter.i

# target to preprocess a source file
Interpreter.cpp.i:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\Interpreter.cpp.i
.PHONY : Interpreter.cpp.i

Interpreter.s: Interpreter.cpp.s

.PHONY : Interpreter.s

# target to generate assembly for a file
Interpreter.cpp.s:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\Interpreter.cpp.s
.PHONY : Interpreter.cpp.s

LoopCommand.obj: LoopCommand.cpp.obj

.PHONY : LoopCommand.obj

# target to build an object file
LoopCommand.cpp.obj:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\LoopCommand.cpp.obj
.PHONY : LoopCommand.cpp.obj

LoopCommand.i: LoopCommand.cpp.i

.PHONY : LoopCommand.i

# target to preprocess a source file
LoopCommand.cpp.i:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\LoopCommand.cpp.i
.PHONY : LoopCommand.cpp.i

LoopCommand.s: LoopCommand.cpp.s

.PHONY : LoopCommand.s

# target to generate assembly for a file
LoopCommand.cpp.s:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\LoopCommand.cpp.s
.PHONY : LoopCommand.cpp.s

PrintCommand.obj: PrintCommand.cpp.obj

.PHONY : PrintCommand.obj

# target to build an object file
PrintCommand.cpp.obj:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\PrintCommand.cpp.obj
.PHONY : PrintCommand.cpp.obj

PrintCommand.i: PrintCommand.cpp.i

.PHONY : PrintCommand.i

# target to preprocess a source file
PrintCommand.cpp.i:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\PrintCommand.cpp.i
.PHONY : PrintCommand.cpp.i

PrintCommand.s: PrintCommand.cpp.s

.PHONY : PrintCommand.s

# target to generate assembly for a file
PrintCommand.cpp.s:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\PrintCommand.cpp.s
.PHONY : PrintCommand.cpp.s

ProgramData.obj: ProgramData.cpp.obj

.PHONY : ProgramData.obj

# target to build an object file
ProgramData.cpp.obj:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\ProgramData.cpp.obj
.PHONY : ProgramData.cpp.obj

ProgramData.i: ProgramData.cpp.i

.PHONY : ProgramData.i

# target to preprocess a source file
ProgramData.cpp.i:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\ProgramData.cpp.i
.PHONY : ProgramData.cpp.i

ProgramData.s: ProgramData.cpp.s

.PHONY : ProgramData.s

# target to generate assembly for a file
ProgramData.cpp.s:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\ProgramData.cpp.s
.PHONY : ProgramData.cpp.s

SleepCommand.obj: SleepCommand.cpp.obj

.PHONY : SleepCommand.obj

# target to build an object file
SleepCommand.cpp.obj:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\SleepCommand.cpp.obj
.PHONY : SleepCommand.cpp.obj

SleepCommand.i: SleepCommand.cpp.i

.PHONY : SleepCommand.i

# target to preprocess a source file
SleepCommand.cpp.i:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\SleepCommand.cpp.i
.PHONY : SleepCommand.cpp.i

SleepCommand.s: SleepCommand.cpp.s

.PHONY : SleepCommand.s

# target to generate assembly for a file
SleepCommand.cpp.s:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\SleepCommand.cpp.s
.PHONY : SleepCommand.cpp.s

expressionVector.obj: expressionVector.cpp.obj

.PHONY : expressionVector.obj

# target to build an object file
expressionVector.cpp.obj:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\expressionVector.cpp.obj
.PHONY : expressionVector.cpp.obj

expressionVector.i: expressionVector.cpp.i

.PHONY : expressionVector.i

# target to preprocess a source file
expressionVector.cpp.i:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\expressionVector.cpp.i
.PHONY : expressionVector.cpp.i

expressionVector.s: expressionVector.cpp.s

.PHONY : expressionVector.s

# target to generate assembly for a file
expressionVector.cpp.s:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\expressionVector.cpp.s
.PHONY : expressionVector.cpp.s

main.obj: main.cpp.obj

.PHONY : main.obj

# target to build an object file
main.cpp.obj:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\main.cpp.obj
.PHONY : main.cpp.obj

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles\projet.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\projet.dir\main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... projet
	@echo ... edit_cache
	@echo ... rebuild_cache
	@echo ... AbstractCommand.obj
	@echo ... AbstractCommand.i
	@echo ... AbstractCommand.s
	@echo ... CommandExpression.obj
	@echo ... CommandExpression.i
	@echo ... CommandExpression.s
	@echo ... ConditionCommand.obj
	@echo ... ConditionCommand.i
	@echo ... ConditionCommand.s
	@echo ... EnterC.obj
	@echo ... EnterC.i
	@echo ... EnterC.s
	@echo ... IfCommand.obj
	@echo ... IfCommand.i
	@echo ... IfCommand.s
	@echo ... Interpreter.obj
	@echo ... Interpreter.i
	@echo ... Interpreter.s
	@echo ... LoopCommand.obj
	@echo ... LoopCommand.i
	@echo ... LoopCommand.s
	@echo ... PrintCommand.obj
	@echo ... PrintCommand.i
	@echo ... PrintCommand.s
	@echo ... ProgramData.obj
	@echo ... ProgramData.i
	@echo ... ProgramData.s
	@echo ... SleepCommand.obj
	@echo ... SleepCommand.i
	@echo ... SleepCommand.s
	@echo ... expressionVector.obj
	@echo ... expressionVector.i
	@echo ... expressionVector.s
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
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system
