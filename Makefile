CC = gcc
CFLAGS = -I. -Wall

DEPS = puntos.h
OBJ = main.o puntos.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)