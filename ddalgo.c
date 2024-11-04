#include <GL/freeglut.h>
#include <math.h>

void initialize()
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 300.0, 0.0, 300.0);
}

void ddaalgo(int x1, int y1, int x2, int y2)
{
    float dx = x2 - x1;
    float dy = y2 - y1;

    float x = x1;
    float y = y1;

    float steps = fmax(fabs(dx), fabs(dy));
    
    float xincrement = dx / steps;
    float yincrement = dy / steps;

    glPointSize(2.0);
    glBegin(GL_POINTS);

    for(int i = 0; i <= steps; i++)
    {
        glVertex2i(round(x), round(y));
        x += xincrement;
        y += yincrement;
    }
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
    ddaalgo(0, 0, 200, 300);
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("DDA line drawing Algorithm");

    initialize();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;

}

