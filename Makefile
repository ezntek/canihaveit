CFLAGS = -Oz
CC = gcc
PYTHON = python3

build:
	$(PYTHON) makemovie.py
	$(CC) $(CFLAGS) -o canihaveit canihaveit.c

clean:
	rm -f canihaveit movie.h
