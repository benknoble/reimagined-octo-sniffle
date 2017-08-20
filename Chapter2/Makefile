# Makefile for a simple program outputting a message
OBJECTS = main.o
EXE = mesg.exe
CC = gcc

mesg : $(OBJECTS)
	$(CC) -o $(EXE) $(OBJECTS)

.PHONY : clean
clean :
	-rm $(EXE) $(OBJECTS)
