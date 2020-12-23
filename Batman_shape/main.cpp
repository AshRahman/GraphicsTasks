#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
/*void chest(){
glClear(GL_COLOR_BUFFER_BIT);///this is for copy paste only
glColor3ub();
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(1);
glVertex2i();
glVertex2i();
glVertex2i();
glEnd();

}
*/
void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(125, 255);
glVertex2i(125, 405);
glVertex2i(376, 405);
glVertex2i(376, 255);
glEnd();

glColor3ub(100,100,100);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(174,305);
glVertex2i(174,355);
glVertex2i(325,355);
glVertex2i(325,305);
glEnd();

glColor3ub (249, 231, 159);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(125,405);
glVertex2i(376,405);
glVertex2i(376,456);
glVertex2i(125,456);
glEnd();

glColor3ub(128,128,128);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(72,305);
glVertex2i(125,305);
glVertex2i(125,355);
glVertex2i(72,355);
glEnd();


glColor3ub(224, 173, 14);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(125,355);
glVertex2i(72,355);
glVertex2i(72,405);
glVertex2i(125,405);

glEnd();

glColor3ub(2, 42, 140);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(125,405);
glVertex2i(72,405);
glVertex2i(72,455);
glVertex2i(125,455);
glEnd();

glColor3ub(224, 173, 14);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(173,255);
glVertex2i(325,255);
glVertex2i(325,205);
glVertex2i(173,205);
glEnd();

glColor3ub(2, 42, 140);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(173,205);
glVertex2i(224,205);
glVertex2i(224,52);
glVertex2i(173,52);
glEnd();


glColor3ub(2, 42, 140);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(325,205);
glVertex2i(325,52);
glVertex2i(275,52);
glVertex2i(275,205);
glEnd();


glColor3ub(2, 42, 140);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(275,103);
glVertex2i(224,103);
glVertex2i(224,205);
glVertex2i(275,205);
glEnd();

glColor3ub(224, 173, 14);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(376,405);
glVertex2i(376,355);
glVertex2i(428,355);
glVertex2i(428,405);
glEnd();

glColor3ub(128,128,128);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(376,308);
glVertex2i(428,308);
glVertex2i(428,355);
glVertex2i(376,355);
glEnd();

glColor3ub(2, 42, 140);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(376,405);
glVertex2i(428,405);
glVertex2i(428,457);
glVertex2i(376,457);
glEnd();

glColor3ub(128,128,128);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(125,455);
glVertex2i(222,455);
glVertex2i(222,709);
glVertex2i(125,709);
glEnd();


glColor3ub(128,128,128);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(375,455);
glVertex2i(375,709);
glVertex2i(278,709);
glVertex2i(278,455);
glEnd();

glFlush ();
}

void myInit (void)
{
glClearColor(255.0, 255.0, 255.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 519.0, 807.0, 0.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (519, 807);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Batman_Shape");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
