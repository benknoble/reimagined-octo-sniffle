# Makefile for a simple program
OBJECTS = main.o
EXE = prog.exe
CC = gcc-7 -Wall -Wextra

# target: all--does nothing (DEFAULT)
.PHONY : all
all :
	@echo "Nothing here... try 'make help' for targets"

# target: prog--build the prog program
prog : $(OBJECTS)
	$(CC) -o $(EXE) $(OBJECTS)

# target: help--prints the list of targets
.PHONY : help
help :
	@grep "^# target:" [mM]akefile

# target: clean--clean the object and exe files
.PHONY : clean
clean :
	-rm $(EXE) $(OBJECTS)
