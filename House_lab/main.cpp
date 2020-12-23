#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
/*
    glBegin(GL_QUADS);;
    glColor3ub (0, 0, 0);
    glPointSize(5.0);
    glVertex2i();
    glVertex2i();
    glVertex2i();
    glVertex2i();
    glEnd();


*/


void myDisplay(void)
{
     glClear (GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);;
    glColor3ub (181, 169, 153);
    glPointSize(5.0);
    glVertex2i(147,378);
    glVertex2i(147,718);
    glVertex2i(1459,718);
    glVertex2i(1459,378);
    glEnd();

    glBegin(GL_TRIANGLES);;
    glColor3ub (128, 128, 128);
    glVertex2i(73,355);
    glVertex2i(1532,355);
    glVertex2i(802,89);
    glEnd();


    glBegin(GL_QUADS);;
    glColor3ub (240, 248, 255);
    glPointSize(5.0);
    glVertex2i(232,425);
    glVertex2i(232,649);
    glVertex2i(456,649);
    glVertex2i(456,425);
    glEnd();

    glBegin(GL_QUADS);;
    glColor3ub (100, 100, 100);
    glPointSize(5.0);
    glVertex2i(555,425);
    glVertex2i(555,683);
    glVertex2i(704,683);
    glVertex2i(704,425);
    glEnd();

    glBegin(GL_QUADS);;
    glColor3ub (200, 200, 200);
    glPointSize(5.0);
    glVertex2i(789,425);
    glVertex2i(789,707);
    glVertex2i(1383,707);
    glVertex2i(1383,425);
    glEnd();


    glBegin(GL_QUADS);;
    glColor3ub (100, 100, 100);
    glPointSize(5.0);
    glVertex2i(54,355);
    glVertex2i(54,367);
    glVertex2i(1551,367);
    glVertex2i(1551,355);
    glEnd();

    glBegin(GL_QUADS);;
    glColor3ub (100, 100, 100);
    glPointSize(5.0);
    glVertex2i(72,367);
    glVertex2i(72,379);
    glVertex2i(1534,379);
    glVertex2i(1534,367);
    glEnd();

    glBegin(GL_QUADS);;
    glColor3ub (0, 0, 0);
    glPointSize(5.0);
    glVertex2i(232,561);
    glVertex2i(232,570);
    glVertex2i(455,570);
    glVertex2i(455,561);
    glEnd();

    glBegin(GL_QUADS);;
    glColor3ub (0, 0, 0);
    glPointSize(5.0);
    glVertex2i(340,425);
    glVertex2i(340,650);
    glVertex2i(345,650);
    glVertex2i(345,425);
    glEnd();

    glBegin(GL_QUADS);;
    glColor3ub (0, 0, 0);
    glPointSize(5.0);
    glVertex2i(789,465);
    glVertex2i(789,467);
    glVertex2i(1383,467);
    glVertex2i(1383,465);
    glEnd();


     glBegin(GL_QUADS);;
    glColor3ub (0, 0, 0);
    glPointSize(5.0);
    glVertex2i(789,505);
    glVertex2i(789,507);
    glVertex2i(1383,507);
    glVertex2i(1383,505);
    glEnd();

     glBegin(GL_QUADS);;
    glColor3ub (0, 0, 0);
    glPointSize(5.0);
    glVertex2i(789,545);
    glVertex2i(789,547);
    glVertex2i(1383,547);
    glVertex2i(1383,545);
    glEnd();

     glBegin(GL_QUADS);;
    glColor3ub (0, 0, 0);
    glPointSize(5.0);
    glVertex2i(789,585);
    glVertex2i(789,587);
    glVertex2i(1383,587);
    glVertex2i(1383,585);
    glEnd();

     glBegin(GL_QUADS);;
    glColor3ub (0, 0, 0);
    glPointSize(5.0);
    glVertex2i(789,625);
    glVertex2i(789,627);
    glVertex2i(1383,627);
    glVertex2i(1383,625);
    glEnd();

    glBegin(GL_QUADS);;
    glColor3ub (0, 0, 0);
    glPointSize(5.0);
    glVertex2i(789,665);
    glVertex2i(789,667);
    glVertex2i(1383,667);
    glVertex2i(1383,665);
    glEnd();

    glBegin(GL_POINTS);
    glColor3ub (255, 255, 255);
    glPointSize(100.0);
    glVertex2i(573,548);
    glEnd();

    glBegin(GL_QUADS);;
    glColor3ub (240, 248, 255);
    glPointSize(5.0);
    glVertex2i(589,464);
    glVertex2i(589,480);
    glVertex2i(682,480);
    glVertex2i(682,464);
    glEnd();


    glBegin(GL_QUADS);;
    glColor3ub (240, 248, 255);
    glPointSize(5.0);
    glVertex2i(589,533);
    glVertex2i(589,549);
    glVertex2i(682,549);
    glVertex2i(682,533);
    glEnd();
    glBegin(GL_QUADS);;
    glColor3ub (240, 248, 255);
    glPointSize(5.0);
    glVertex2i(589,600);
    glVertex2i(589,616);
    glVertex2i(682,616);
    glVertex2i(682,600);
    glEnd();

    glBegin(GL_QUADS);;
    glColor3ub (0, 0, 0);
    glPointSize(5.0);
    glVertex2i(740,378);
    glVertex2i(740,718);
    glVertex2i(742,718);
    glVertex2i(742,378);
    glEnd();

glFlush ();
}

void myInit (void)
{
glClearColor(255.0, 255.0, 255.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1600.0, 795.0, 0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1600, 795);
glutInitWindowPosition (0,0);
glutCreateWindow ("House");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
