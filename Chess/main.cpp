#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void cube(int x, int y){


    glBegin(GL_QUADS);
    glVertex2i(x,y);
    glVertex2i(x+50,y);
    glVertex2i(x+50,y+50);
    glVertex2i(x,y+50);
    glEnd();




}
void myDisplay(void)
 {
     int row,col,v1,v2;
     v1=200;
     v2=100;
	glClear (GL_COLOR_BUFFER_BIT);
	for(col=0;col<8;col++){

      for(row=0;row<8;row++){

        v1=v1+50;
        if((row+col)%2==0){     ////alternates the color every second block
            glColor3ub (0, 0, 0);
            glPointSize(5.0);
            cube(v1,v2);
        }
        else{
            glColor3ub (255, 255, 255);
            glPointSize(5.0);
            cube(v1,v2);
        }
    }
    v2=v2+50; //after the row is filled moves to next row
    v1=v1-(row*50);//resets the x coordinate value that was added by looping

	}
	///borderlines
	glColor3ub (0, 0, 0);
    glPointSize(5.0);
	glBegin(GL_QUADS);
	glVertex2i(250,100);
	glVertex2i(250,102);
	glVertex2i(650,102);
	glVertex2i(650,100);
	glEnd();

    glColor3ub (0, 0, 0);
    glPointSize(5.0);
	glBegin(GL_QUADS);
	glVertex2i(650,100);
	glVertex2i(650,635);
	glVertex2i(652,100);
	glVertex2i(652,635);
	glEnd();

	glColor3ub (0, 0, 0);
    glPointSize(5.0);
	glBegin(GL_QUADS);
	glVertex2i(250,500);
	glVertex2i(250,502);
	glVertex2i(650,502);
	glVertex2i(650,500);
	glEnd();

	glColor3ub (0, 0, 0);
    glPointSize(5.0);
	glBegin(GL_QUADS);
	glVertex2i(252,100);
	glVertex2i(250,100);
	glVertex2i(250,500);
	glVertex2i(252,500);
	glEnd();


	glFlush ();
		 }
	void myInit (void) {
		glClearColor(255, 255, 255, 0.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0.0, 1000.0, 720.0, .0);
		 }
	int main(int argc, char** argv) {
		glutInit(&argc, argv);
		glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize (1000, 720);
		glutInitWindowPosition (0, 0);
		glutCreateWindow ("ChessBoard");
		glutDisplayFunc(myDisplay);
		myInit ();
		glutMainLoop();
}
