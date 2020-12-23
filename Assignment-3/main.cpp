#include <cstdio>
#include<stdio.h>
#include<math.h>
#include<GL/gl.h>
#include <GL/glut.h>
int x,y,r,pk,i=1,X,Y;
int arr1[100],arr2[100];
void points(int x, int y){

    glBegin(GL_POINTS);
    glColor3ub (17, 221, 231 );
    glPointSize(5.0);
    glVertex2i(x,y);
    glEnd();
}


void myDisplay(void)
 {
        glClear (GL_COLOR_BUFFER_BIT);

        x=0;
        y=r;
        arr1[0]=x;
        arr2[0]=y;
        pk=(1-r);
        while(x<y){
            if(pk<0){
                x++;
            }
            else{
                x++;
                y--;
            }
            arr1[i]=x;
            arr2[i]=y;
            pk=pk+2*(arr1[i-1]+1)+((arr2[i]*arr2[i])-(arr2[i-1]*arr2[i-1]))-(arr2[i]-arr2[i-1])+1;
            i++;
        }

        for(int j=0;j<i-1;j++){

             points(arr1[j]+X,arr2[j]+Y);
             points(arr2[i-j-2]+X,arr1[i-j-2]+Y);
             points(arr2[j]+X,-1*arr1[j]+Y);
             points(arr1[i-j-2]+X,-1*arr2[i-j-2]+Y);
             points(-1*arr1[j]+X,-1*arr2[j]+Y);
             points(-1*arr2[i-j-2]+X,-1*arr1[i-j-2]+Y);
             points(-1*arr2[j]+X,arr1[j]+Y);
             points(-1*arr1[i-j-2]+X,arr2[i-j-2]+Y);

        }



		 glFlush ();
 }
	void myInit (void) {
		glClearColor(0.0, 0.0, 0.0, 0.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0,720,0,480);
		 }

	int main(int argc, char** argv) {

		glutInit(&argc, argv);
		glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
        printf("X-coordinate value= ");
		scanf("%d",&X);
		printf("Y-coordinate value= ");
		scanf("%d",&Y);
		printf("Enter raidus: ");
		scanf("%d",&r);
		glutInitWindowSize (720, 480);
		glutInitWindowPosition (0, 0);
		glutCreateWindow ("Midpoint Circle");
        glutDisplayFunc(myDisplay);
		myInit ();
		glutMainLoop();
}
