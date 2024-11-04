#make file for computer graphics

CC = gcc
CFLAGS = -lglut -lGL -lGLU -lm -Wpedantic -Werror -Wextra -Wall
TARGETS = line linestrip poly triangle points ddaalgo lineloop

line: OGLline.c
	$(CC) $< $(CFLAGS) -o $@

linestrip: OGLline_strip.c
	$(CC) $< $(CFLAGS) -o $@

lineloop: OGLlineloop.c
	$(CC) $< $(CFLAGS) -o $@

poly: OGLpolygon.c
	$(CC) $< $(CFLAGS) -o $@

triangle: OGLtriangle.c
	$(CC) $< $(CFLAGS) -o $@

points: OGLpoints.c
	$(CC) $< $(CFLAGS) -o $@

ddaalgo: DDAalgorithm.c
	$(CC) $< $(CFLAGS) -o $@

dalgo: ddalgo.c
	$(CC) $< $(CFLAGS) -o $@

bres: Bresenhamsalgorithm.c
	$(CC) $< $(CFLAGS) -o $@

clean:
	rm -f $(TARGETS)


