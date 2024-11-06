#include <GL/glut.h>
#include <GL/glu.h>

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("Basic OpenGL Program");
    glutMainLoop();

    return 0;
}
