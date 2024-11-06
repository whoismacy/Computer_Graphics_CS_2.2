void bres_algo(int x1, int x2, int y1, int y2)
{
    int x = x1;
    int y = y1;

    int dy = y2 - y1;
    int dx = x2 -x1;

    int errorterm = (2 * dy) - dx;

    glPointSize(2.0);
    glBegin(GL_POINTS);
    while(x <= x2)
    {
        glVertex2i(x, y);
        x++;

        if(errorterm > 0)
        {
            errorterm += (2 * dy) - (2 * dx);
        }
        else
        {
            errorterm += (2 * dy);
        }
    }
    glEnd();
}
