#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
void myDisplay(void)
 {
	glClear (GL_COLOR_BUFFER_BIT);
	glColor3ub (255, 255, 255);
	glPointSize(100.0);
	glBegin(GL_LINES);
	glVertex2i(0, 240);
	glVertex2i(640, 240);
	glVertex2i(320, 0);
	glVertex2i(320, 480);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(80, 30);
	glVertex2i(80, 210);
	glVertex2i(240, 30);
	glVertex2i(240, 210);
	glVertex2i(80, 120);
	glVertex2i(240, 120);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(160, 360);
	glVertex2i(60, 460);
	glVertex2i(260, 460);
	glVertex2i(60, 260);
	glVertex2i(260, 260);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2i(350, 30);
	glVertex2i(610, 30);
	glVertex2i(480, 210);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2i(380, 350);
	glVertex2i(380, 450);
	glVertex2i(480, 450);
	glVertex2i(480, 350);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2i(420, 310);
	glVertex2i(420, 410);
	glVertex2i(520, 410);
	glVertex2i(520, 310);
	glEnd();
	glFlush ();
		 }
	void myInit (void) {
		glClearColor(0.6275, 0.3216, 0.1765, 0.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0.0, 640.0, 0.0, 480.0);
		 }
	int main(int argc, char** argv) {
		glutInit(&argc, argv);
		glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize (640, 480);
		glutInitWindowPosition (100, 150);
		glutCreateWindow ("MyName");
		glutDisplayFunc(myDisplay);
		myInit ();
		glutMainLoop();
}
