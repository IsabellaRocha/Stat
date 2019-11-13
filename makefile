ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif

all: stat.o
	$(CC) -o program stat.o

stat.o: stat.c stat.h
	$(CC) -c stat.c

run:
	./program
