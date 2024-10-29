#include <GL/freeglut.h>

void lineloop()
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(1.0, 0.3, 0.7);

    glBegin(GL_LINE_LOOP);
        glVertex2i(80, 50);
        glVertex2i(30, 10);
        glVertex2i(90, 30);
        glVertex2i(10, 45);
        glVertex2i(25, 50);
    glEnd();

    glFlush();
}

void initialize()
{
    glClearColor(0.0, 1.0, 0.4, 0.8);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 100.0, 0.0, 100.0);

}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("Line loop in OpenGL");

    initialize();
    glutDisplayFunc(lineloop);
    glutMainLoop();

    return 0;
}
