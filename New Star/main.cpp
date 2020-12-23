#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 255, 255);
glPointSize(5.0);

glBegin(GL_LINE_STRIP);

glVertex2i(100,100);
glVertex2i(100,200);
glVertex2i(300,200);
//glVertex2i(150,200);
glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 400.0, 0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 400);
glutInitWindowPosition (0,0);
glutCreateWindow ("Star");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
