CC=gcc
CFLAGS=-Wall -pedantic -ansi -g

EXEC=program

OBJ=$(patsubst %.c,%.o,$(wildcard *.c))

default: $(EXEC)

program: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $+

%.o: %.c program.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(EXEC) $(OBJ)
# równoważnie:
#	rm -rf program *.o

