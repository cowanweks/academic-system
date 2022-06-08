CC=gcc
CCFLAGS=-c -g -Wall -Werror
BIN=bin/main
OBJ=bin/main.o

all: $(BIN)

$(OBJ): main.c
	$(CC) $(CCFLAGS) -o $@ $^

$(BIN): $(OBJ)
	$(CC) -o $@ $^
	
run: $(BIN)
	./$(BIN)

debug: $(BIN)
	gdb $^

clean:
	rm -rf *.o $(BIN)