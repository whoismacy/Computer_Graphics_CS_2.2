#make file for computer graphics

CC = gcc
CFLAGS = -lglut -lGL -lGLU -lm -Wpedantic -Werror -Wextra -Wall

ddaalgo: DDAalgorithm.c
	$(CC) $< $(CFLAGS) -o $@

dalgo: ddalgo.c
	$(CC) $< $(CFLAGS) -o $@
