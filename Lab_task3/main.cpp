#include <cstdio>
#include<stdio.h>
#include<math.h>
#include<GL/gl.h>
#include <GL/glut.h>
float X1,Y1,X2,Y2;
int X0,Y0,Xn,Yn,choice;
void point(float x, float y){

    glBegin(GL_POINTS);
    glVertex2f(x,y);
    glEnd();
}
void myDisplay(void)
 {


    glClear (GL_COLOR_BUFFER_BIT);
 if(choice<=1){///if choice is DDA
     float Yt,Xt;
     int i;
     int countt=X2-X1;
     float m=float(Y2-Y1)/float(X2-X1);
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
 }
 else{///choice is midpoint
    int dy,dx,xn,yn,ync,pk;
        xn=X0;
        yn=Y0;
        dx=Xn-X0;
        dy=Yn-Y0;
        pk=((2*dy)-dx);
        point(xn,yn);

        for(int i=0;i<dy;i++){
            if(pk>=0){
                xn=xn+1;
                ync=yn;
                yn=yn+1;
                point(xn,yn);
            }
            else{
                xn=xn+1;
                ync=yn;
                yn=yn;
                point(xn,yn);
            }
            pk=(pk+(2*dy)-((2*dx)*(yn-ync)));

        }


 `  }
        glFlush ();
 }

	void myInit (void) {
		glClearColor(0, 0, 0, 0.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0.0, 640.0, 480.0, 0.0);
		 }

	int main(int argc, char** argv) {

		glutInit(&argc, argv);
		glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
		printf("Enter your choice: \n");
		printf("1.DDA Algo\n");
		printf("2.Bresenham\n");
		printf("3.Exit\n");
		scanf("%d",&choice);
		if(choice==1){
        printf("Enter an initial point for DDA: ");
		scanf("%f %f",&X1,&Y1);
		printf("Enter the Final point");
		scanf("%f %f",&X2,&Y2);
		glutInitWindowSize (640, 480);
		glutInitWindowPosition (100, 150);
		glutCreateWindow ("Line Draw");
        glutDisplayFunc(myDisplay);
		myInit ();
		glutMainLoop();
		}
		else if(choice==2){
            printf("Enter an initial point MIDp: ");
		scanf("%d %d",&X0,&Y0);
		printf("Enter the Final point");
		scanf("%d %d",&Xn,&Yn);
		glutInitWindowSize (640, 480);
		glutInitWindowPosition (100, 150);
		glutCreateWindow ("Line Draw");
        glutDisplayFunc(myDisplay);
		myInit ();
		glutMainLoop();

		}
		else{
            return 0;

		}

}
