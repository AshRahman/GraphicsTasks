#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
void star(){
    glBegin(GL_POLYGON);

//glVertex2i(321,153);







glVertex2i(339,208);
glVertex2i(369,300);
glVertex2i(290,244);
glVertex2i(212,300);
glVertex2i(242,208);
glVertex2i(163,153);
glVertex2i(262,153);
glVertex2i(290,58);
glVertex2i(321,153);


glEnd();

}
void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 255, 255);
glPointSize(5.0);
glBegin(GL_POLYGON);
/*glVertex2i(321,153);
//glVertex2i(321,153);
glVertex2i(290,58);
glVertex2i(262,153);
glVertex2i(163,153);
glVertex2i(242,208);
glVertex2i(212,300);
glVertex2i(290,244);
glVertex2i(369,300);
glVertex2i(339,208);
*/
star();



glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (0,0);
glutCreateWindow ("Star");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
