# Makefile for a simple program outputting a message
OBJECTS = main.o
EXE = mesg.exe
COMP = gcc

mesg : $(OBJECTS)
	$(COMP) -o $(EXE) $(OBJECTS)

.PHONY : clean
clean :
	-rm $(EXE) $(OBJECTS)
