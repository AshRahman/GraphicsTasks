#include <cstdio>
#include<stdio.h>
#include<math.h>
#include<GL/gl.h>
#include <GL/glut.h>
float X1,Y1,X2,Y2;
void point(float x, float y){

    glBegin(GL_POINTS);
    glVertex2f(x,y);
    glEnd();
}
void myDisplay(void)
 {
     //float X,Y;
     float Yt,Xt;
     int i;
     int countt=X2-X1;
     float m=float(Y2-Y1)/float(X2-X1);
    glClear (GL_COLOR_BUFFER_BIT);

    if(m<1){
     for(i=0;i<countt;i++){
        X1=X1+1;
        Y1=Y1+m;
        //Y1=floor(Y1);
        Yt=Y1+0.5;
        Yt=floor(Yt);
        glColor3ub (128, 128, 128);
        glPointSize(2.0);
        point(X1,Yt);
     }
		 }

    else if(m>1){
        Xt=X1;
        for(i=0;i<countt;i++){
        Xt=Xt+(1/m);
        Xt=Xt+0.5;
        Xt=floor(Xt);
        Y1=Y1+1;
        point(Xt,Y1);
        }
    }

    else{
        for(i=0;i<countt;i++){
            X1=X1+1;
            Y1=Y1+1;
            point(X1,Y1);

        }

    }
		 glFlush ();
 }

	void myInit (void) {
		glClearColor(0, 0, 0, 0.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0.0, 640.0, 0.0, 480.0);
		 }

	int main(int argc, char** argv) {

		glutInit(&argc, argv);
		glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
        printf("Enter an initial point: ");
		scanf("%f %f",&X1,&Y1);
		printf("Enter the Final point");
		scanf("%f %f",&X2,&Y2);
		glutInitWindowSize (640, 480);
		glutInitWindowPosition (100, 150);
		glutCreateWindow ("DDA");
        glutDisplayFunc(myDisplay);
		myInit ();
		glutMainLoop();
}
/*
float X,Y;
     int i;
     int countt=X2-X1;
     float m=float(Y2-Y1)/float(X2-X1);

     for(i=0;i<countt;i++){
        X=X1+1;
        Y=Y1+m+0.5;
        Y=floor(Y);
        glColor3ub (0, 0, 0);
    glPointSize(100.0);*/
