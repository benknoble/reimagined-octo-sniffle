# Makefile for a simple program outputting a message
OBJECTS = main.o
EXE = mesg.exe
CC = gcc-7 -Wall -Wextra

# target: all--does nothing (DEFAULT)
.PHONY : all
all :
	@echo "Nothing here... try 'make help' for targets"

# target: mesg--build the mesg program
mesg : $(OBJECTS)
	$(CC) -o $(EXE) $(OBJECTS)

# target: help--prints the list of targets
.PHONY : help
help :
	@grep "^# target:" [mM]akefile

# target: clean--clean the object and exe files
.PHONY : clean
clean :
	-rm $(EXE) $(OBJECTS)
