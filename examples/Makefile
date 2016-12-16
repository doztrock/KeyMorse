CC=g++
CFLAGS=-Wall -O3

HEADER=Keyboard.o morse.o
EXAMPLES=example-1 example-2

.PHONY:all
all: $(EXAMPLES)

.PHONY:clean
clean:
	rm -f $(HEADER) $(EXAMPLES) *.o

Keyboard.o:
	$(CC) $(CFLAGS) -c ../Keyboard.cpp
	
morse.o:
	$(CC) $(CFLAGS) -c ../morse.cpp

# Example 1
example-1: $(HEADER) example-1.o
	$(CC) $(CFLAGS) $(HEADER) example-1.o -o example-1

# Example 2
example-2: $(HEADER) example-2.o
	$(CC) $(CFLAGS) $(HEADER) example-2.o -o example-2

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@