#include <GL/freeglut.h>

void triangle()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.8, 0.5);
    glBegin(GL_TRIANGLES);
        glVertex2i(12, 78);
        glVertex2i(27, 56);
        glVertex2i(78, 34);
    glEnd();
    glFlush();
}

void init()
{
    glClearColor(0.0, 1.0, 0.7, 0.8);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 100.0, 0.0, 100.0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("Triangles using OpenLG");

    init();
    glutDisplayFunc(triangle);
    glutMainLoop();
    return 0;
}
