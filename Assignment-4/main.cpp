#include <cstdio>
#include<stdio.h>
#include<stdlib.h>
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
void points(int a,int b){
    glBegin(GL_POINTS);
    glVertex2i(a,b);
    glEnd();
}

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub(0,0,0);
glPointSize(5.0);
glBegin(GL_QUADS);//night sky
glVertex2i(0,240);
glVertex2i(465,240);
glVertex2i(465,0);
glVertex2i(0,0);
glEnd();
for(int i=0;i<300;i++){
    int A=rand()%500;
    int B=rand()%500;
    glColor3ub(255,140,0);//random star generator
    glPointSize(2.0);
    points(A,B);
    glEnd();
}

glColor3ub(245,245,220);//lower concrete wall
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(0,240);
glVertex2i(0,315);
glVertex2i(465,315);
glVertex2i(465,240);
glEnd();

glColor3ub(0,0,0);//wall pillar
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(24,240);
glVertex2i(24,315);
glVertex2i(26,315);
glVertex2i(26,240);
glEnd();

glColor3ub(0,0,0);//wall pillar
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(47,240);
glVertex2i(47,315);
glVertex2i(49,315);
glVertex2i(49,240);
glEnd();

glColor3ub(175,175,175);//foundation
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(448,282);
glVertex2i(19,282);
glVertex2i(19,315);
glVertex2i(448,315);
glEnd();

glColor3ub(175,175,175);//foundation fraction
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(19,297);
glVertex2i(0,297);
glVertex2i(0,315);
glVertex2i(19,315);
glEnd();

glColor3ub(0,0,0);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(0,297);
glVertex2i(0,299);
glVertex2i(121,299);
glVertex2i(121,297);
glEnd();


glFlush ();
}

void myInit (void)
{
glClearColor(255.0, 255.0, 255.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 465.0, 315.0, 0.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (465, 315);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Batman_Shape");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
