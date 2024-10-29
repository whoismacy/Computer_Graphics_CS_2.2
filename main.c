#include <GL/freeglut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.1, 0.2);

    glBegin(GL_LINES);
        glVertex2i(2, 10);//Beginning point
        glVertex2i(40, 93);//End point
    glEnd();

    glFlush();
}

void init()
{
    glClearColor(0.5, 0.4, 0.2, 0);

    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();

    gluOrtho2D(0.0, 100.0, 0.0, 100.0);
}
    

int main(int argc, char **argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    
    glutInitWindowSize(800, 600);

    glutCreateWindow("Opengl window");

    init();

    glutDisplayFunc(display);
    
    glutMainLoop();

    return 0;
}
