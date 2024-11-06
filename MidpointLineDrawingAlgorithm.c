#include <GL/freeglut.h>

void midpointlinealgo(int x1, int y1, int x2, int y2)
{
    int x = (x2 < x1) ? x2 : x1;
    int y = (y2 < y1) ? y2 : y1;

    int dx = x2 - x1;
    int dy = y2 - y1;

    int step_y = (dy < 0) ? -1 : 1;
    /* dx = abs(dx); */
    /* dy = abs(dy); */

    int dparam = (2 * dy) - dx;

    glPointSize(1.8);
    glBegin(GL_POINTS);

    while (x <= x2)
    {
        glVertex2i(x, y);
        x++;

        if(dparam > 0)
        {
            dparam += (2 *dy) - (2 *dx);
            y += step_y; 
        }
        else
        {
            dparam += (2 * dy);
        }
    }
    
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    midpointlinealgo(400.0, 400.0, 0.0, 0.0);
    glFlush();
}

void initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(50, 200);
    glutCreateWindow("Midpoint Line Drawing Algorithm");

    initialize();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
