CC=g++
CFLAGS=-Wall -O3

OBJECTS=keymorse.o Keyboard.o

KEYMORSE=keymorse

.PHONY:all
all: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(KEYMORSE)

.PHONY:clean
clean:
	rm -f $(KEYMORSE) $(OBJECTS)
	
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@
