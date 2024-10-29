#include <GL/freeglut.h>

//int point1[] = {50,10};
//int point2[] = {75, 45};
//int point3[] = {12, 20};

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.0, 0.0);

    glPointSize(5.0);
    glBegin(GL_POINTS);
        glVertex2i(50, 100);
        glVertex2i(90, 21);
        glVertex2i(9, 11);
        glVertex2i(8, 7);
    glEnd();

    //glClear(GL_COLOR_BUFFER_BIT);
    //glPointSize(12.0);
    //glBegin(GL_POINTS);
        //glVertex2iv(point1);
        //glVertex2iv(point2);
        //glVertex2iv(point3);
    //glEnd();

    glFlush();
}

void init()
{
    glClearColor(1, 0.2, 0.9, 0.4);

    glMatrixMode(GL_PROJECTION);

    gluOrtho2D(0.0, 100.0, 0.0, 100.0);

}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(800, 900);

    glutCreateWindow("Points using OpenGL");

    init();

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
