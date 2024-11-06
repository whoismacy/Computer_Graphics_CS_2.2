#include <GL/freeglut.h>

void plotCirclepoints(int x, int y, int xc, int yc)
{
    glBegin(GL_POINTS);
        glVertex2i(xc + x, yc + y);
        glVertex2i(xc - x, yc + y);
        glVertex2i(xc + x, yc - y);
        glVertex2i(xc - x, yc - y);
        glVertex2i(xc + y, yc + x);
        glVertex2i(xc - y, yc + x);
        glVertex2i(xc + y, yc -x );
        glVertex2i(xc - y, yc - x);
    glEnd();
}

void midpointcircle(int r)
{
    int x = 0;
    int y = r;
    int dparam = 1 - r;

    while(x <= y)
    {
        plotCirclepoints(x, y, 200, 200);

        if(dparam < 0)
        {
            dparam = dparam + 2 * x + 3;
        }
        else
        {
            dparam = dparam + 2 * (x - y) + 5;
            y--;
        }
        x++;
    }
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.3, 0.8);
    midpointcircle(50);
    glFlush();
}

void initialize()
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1000.0, 0.0, 1000.0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(500, 500);
    glutCreateWindow("Midpoint Circle Algorithm");
    initialize();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
