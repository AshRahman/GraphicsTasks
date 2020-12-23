#include <cstdio>
#include<stdio.h>
#include<math.h>
#include<GL/gl.h>
#include <GL/glut.h>
int X1,Y1,X2,Y2;
void points(int x, int y){

    glBegin(GL_POINTS);
    glVertex2i(x,y);
    glEnd();
}
void myDisplay(void)
 {
     int dy,dx,xn,yn,ync,pk;
        xn=X1;
        yn=Y1;
        dx=X2-X1;
        dy=Y2-Y1;
        pk=((2*dy)-dx);
        glClear (GL_COLOR_BUFFER_BIT);
        points(xn,yn);

        for(int i=0;i<dy;i++){
            if(pk>=0){
                xn=xn+1;
                ync=yn;
                yn=yn+1;
                points(xn,yn);
            }
            else{
                xn=xn+1;
                ync=yn;
                yn=yn;
                points(xn,yn);
            }
            pk=(pk+(2*dy)-((2*dx)*(yn-ync)));

        }



		 glFlush ();
 }

	void myInit (void) {
		glClearColor(0, 0, 0, 0.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0.0, 720.0, 480.0, 0.0);
		 }

	int main(int argc, char** argv) {

		glutInit(&argc, argv);
		glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
        printf("Enter an initial point for MID:- ");
		scanf("%d %d",&X1,&Y1);
		printf("Enter the Final point:-");
		scanf("%d %d",&X2,&Y2);
		glutInitWindowSize (720, 480);
		glutInitWindowPosition (100, 150);
		glutCreateWindow ("BresenHam/MIdpoint");
        glutDisplayFunc(myDisplay);
		myInit ();
		glutMainLoop();
}
