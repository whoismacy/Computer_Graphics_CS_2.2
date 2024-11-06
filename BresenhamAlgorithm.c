#include <GL/freeglut.h>
#include <math.h>

void initialize()
{
    glClearColor(0.1, 0.2, 0.3, 0.4);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

void bres_algo(int x1, int y1, int x2, int y2)
{
    int x = x1;
    int y = y1;

    int dx = x2 - x1;
    int dy = y2 -y1;

    int errorterm = (2 * dy) - dx;

    glPointSize(2.0);
    glBegin(GL_POINTS);
    while(x <= x2)
    {
        glVertex2i(x, y);
        x++;

        if(errorterm < 0)
            errorterm += (2 * dy);
        else{
            errorterm += (2 * dy) - (2 * dx);
            y++;
        }
    }
    
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.1, 0.6, 0.9);
    bres_algo(0, 0, 400, 400);
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Bresenham's line drawing algorithm");

    initialize();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
