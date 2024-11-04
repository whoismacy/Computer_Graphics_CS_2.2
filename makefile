CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wpedantic -lglut -lGL -lGLU -lm

SOURCES = OGLline.c OGLlinestrip.c OGLlineloop.c OGLpoints.c OGLtriangle.c OGLpolygon.c DDAalgorithm.c Bresenhamsalgorithm.c

TARGET = $(SOURCES:.c=)

all: $(TARGETS)

%: %.c
	$(CC) $< $(CFLAGS) -o $@

#bres and dda are not really necessary they only simplify the target name
#when calling the function instead of using the long names.

bres: Bresenhamsalgorithm.c
	$(CC) $< $(CFLAGS) -o $@

dda: DDAalgorithm.c
	$(CC) $< $(CFLAGS) -o $@

clean:
	rm -f $(TARGETS)
