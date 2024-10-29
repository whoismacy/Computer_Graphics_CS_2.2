#include <GL/freeglut.h>

void polygon()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.2, 0.8, 0.1);
    glBegin(GL_POLYGON);
        glVertex2i(50, 100);//Top
        glVertex2i(100, 50);//Upper right
        glVertex2i(100, 0);//Lower right
        glVertex2i(50, -50);//Bottom
        glVertex2i(0, 0);//Lower left
        glVertex2i(0, 50);//Upper left
    glEnd();
    glFlush();
}

void initialize()
{
    glClearColor(1.0, 0.0, 0.5, 0.2);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-150.0, 150.0, -150.0, 150.0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("Polygons using OpenGL");
    initialize();
    glutDisplayFunc(polygon);
    glutMainLoop();
    return 0;
}


