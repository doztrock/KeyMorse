CC=g++
CFLAGS=-Wall -O3

HEADER=Keyboard.o
EXAMPLES=example-1

.PHONY:all
all: $(EXAMPLES)

.PHONY:clean
clean:
	rm -f $(HEADER) $(EXAMPLES) *.o

Keyboard.o:
	$(CC) $(CFLAGS) -c ../Keyboard.cpp 

# Example 1
example-1: $(HEADER) example-1.o
	$(CC) $(CFLAGS) Keyboard.o example-1.o -o example-1

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@