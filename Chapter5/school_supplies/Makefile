# Makefile for a simple program outputting school supply info
OBJECTS = main.o
EXE = school_supplies.exe
CC = gcc-7 -Wall -Wextra

# target: all--does nothing (DEFAULT)
.PHONY : all
all :
	@echo "Nothing here... try 'make help' for targets"

# target: school_supplies--build the school_supplies program
school_supplies : $(OBJECTS)
	$(CC) -o $(EXE) $(OBJECTS)

# target: help--prints the list of targets
.PHONY : help
help :
	@grep "^# target:" [mM]akefile

# target: clean--clean the object and exe files
.PHONY : clean
clean :
	-rm $(EXE) $(OBJECTS)
