CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -lglut -lGL -lGLU -lm

SOURCES = OGLline.c OGLlinestrip.c OGLlineloop.c OGLpoints.c OGLtriangle.c OGLpolygon.c 

TARGET = $(SOURCES:.c=)

all: $(TARGETS)

%: %.c
	$(CC) $< $(CFLAGS) -o $@

bres: BresenhamAlgorithm.c
	$(CC) $< $(CFLAGS) -o $@

dda: DDAalgorithm.c
	$(CC) $< $(CFLAGS) -o $@

mlda: MidpointLineDrawingAlgorithm.c
	$(CC) $< $(CFLAGS) -o $@

mca: MidpointCircleAlgorithm.c
	$(CC) $< $(CFLAGS) -o $@

clean:
	rm -f $(TARGET)
	rm -f bres
	rm -f dda
	rm -f mlda
