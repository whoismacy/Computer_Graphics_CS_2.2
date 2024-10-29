#include <GL/gl.h>
#include <GLUT/gl.h>
#include <GL/glu.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //initialize glut by:
    glutInit(&argc, argv);
    //create a window using:
    glutCreateWindow("An Example OpenGL program");
    //specifies what the display window is going to contain
    //An example is the code below which is going to display
    //a line segment procedure
    //a procedure is a function which doesn't return a value
    glutDisplayFunc(NULL);
    //we can set the initial position of the window by specifying 
    //the upper left corner of the display window
    glutInitWindowPosition(50, 100);
    //specify the size using
    glutInitWindowSize(400, 300);
    //set buffering and choice of color modes using glutInitDisplayMode
    //its arguments are glut constants(capital letters)
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    //GLUT_SINGLE -> one single buffer for rendering
    //GLUT_RGB -> use the three colours red, green, blue
    //we can set the background color using
    glClearColor(0.3, 0.9, 0.5, 0.0);
    //to get the assigned color displayed to the window we invoke the function:
    glClear(GL_COLOR_BUFFER_BIT);
    //for the object we would like to display we can set its colour scheme using
    glColor3f(0.0, 0.4, 0.2);
    //We can set the projection type (mode) ~camera~ using:
    glMatrixMode(GL_PROJECTION);
    //we set that we are displaying a 2D object and specify the position using
    gluOrtho2D(0.0, 200.0, 0.0, 150.0);

    //create a line segment using
    glBegin(GL_LINES);
        glVertex2i(180, 15);
        glVertex2i(10, 145);
    glEnd();

    //we finish off the code using, that ensures that we run the code until
    //we encounter an interrupt from stdin

    glutMainLoop();
    
    return 0;
}
