#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>


void myDisplay(void)
 {
    glClear (GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3ub (0, 0, 255);
    glPointSize(5.0);
    glVertex2i(0,0);
    glVertex2i(0,35);
    glVertex2i(431,35);
    glVertex2i(431,0);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub (255, 0, 0);
    glPointSize(5.0);
    glVertex2i(0,42);
    glVertex2i(0,173);
    glVertex2i(431,173);
    glVertex2i(431,42);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub (0, 0, 255);
    glPointSize(5.0);
    glVertex2i(0,180);
    glVertex2i(0,215);
    glVertex2i(431,215);
    glVertex2i(431,180);
    glEnd();


    glColor3ub (255, 255, 255);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(134,93);
glVertex2i(98,92);
glVertex2i(126,113);
glVertex2i(116,145);
glVertex2i(143,126);
glVertex2i(172,145);
glVertex2i(161,112);
glVertex2i(189,93);
glVertex2i(155,93);
glVertex2i(144,60);


glEnd();

	glFlush ();
		 }
	void myInit (void) {
		glClearColor(255, 255, 255, 0.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0.0, 432.0, 216.0, .0);
		 }
	int main(int argc, char** argv) {
		glutInit(&argc, argv);
		glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize (432, 216);
		glutInitWindowPosition (0, 0);
		glutCreateWindow ("flag");
		glutDisplayFunc(myDisplay);
		myInit ();
		glutMainLoop();
}
