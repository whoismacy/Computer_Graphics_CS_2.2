#include <GL/freeglut.h>
#include <stdio.h>
#include <math.h>

void init()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

void DDAalgorithm(int x1, int y1, int x2, int y2)
{
    float step;
    float dx = x2 - x1;
    float dy = y2 - y1;
    float xinc, yinc;
    float x = x1;
    float y = y1;

    if(fabs(dx) > fabs(dy))
    {
        step = fabs(dx);
    }
    else
    {
        step = fabs(dy);
    }

    xinc = dx/step;
    yinc = dy/step;

    int i;
    
    glPointSize(2.0);
    
    glBegin(GL_POINTS);

    for(i = 0; i <= step; i++)
    {
        glVertex2i(round(x), round(y));
        x += xinc;
        y += yinc;
    }
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glPointSize(2.0);

    DDAalgorithm(0, 0, 400, 480);
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(1000, 1000);
    glutCreateWindow("DDA Algorithm");

    init();
    glutDisplayFunc(display);

    glutMainLoop();
}
