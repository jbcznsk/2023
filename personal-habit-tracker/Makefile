CFLAGS = -Wall
CC = gcc

objs = files.o

all: habittracker

habittracker: $(objs)

habittracker.o: habittracker.c files.h
files.o: files.h files.c

clean:
	-rm -f *.o

purge: clean
	-rm -f habittracker
