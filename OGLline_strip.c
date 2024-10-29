#include <GL/freeglut.h>

void linestrip()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.2, 0.5, 0.8);

    glPointSize(3.0);
    glBegin(GL_LINE_STRIP);
        glVertex2i(10,20);
        glVertex2i(50, 90);
        glVertex2i(70, 42);
    glEnd();

    glFlush();
}

void initialize()
{
    glClearColor(0.2, 1.0, 0.4, 0.8);

    glMatrixMode(GL_PROJECTION);

    gluOrtho2D(0.0, 100.0, 0.0, 100.0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

    glutInitWindowSize(900, 900);

    glutCreateWindow("Line Strips Using OpenGL");

    initialize();

    glutDisplayFunc(linestrip);

    glutMainLoop();

    return 0;

}
