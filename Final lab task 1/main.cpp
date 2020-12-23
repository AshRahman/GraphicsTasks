#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<cmath>
int f1,f2;
float X1,X2,X3,X4,Y1,Y2,Y3,Y4;
int choice;
float t;
void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

glColor3ub (128, 128, 128);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(X1,Y1);
glVertex2i(X2,Y2);
glVertex2i(X3,Y3);
glVertex2i(X4,Y4);
glEnd();
if(choice==1){


glColor3ub (128, 128, 128);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(X1+f1,Y1+f2);
glVertex2i(X2+f1,Y2+f2);
glVertex2i(X3+f1,Y3+f2);
glVertex2i(X4+f1,Y4+f2);
glEnd();
}
else if(choice==2){


glColor3ub (128, 128, 128);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(X1*f1,X1*f2);
glVertex2i(X2*f1,X2*f2);
glVertex2i(X3*f1,X3*f2);
glVertex2i(X4*f1,X4*f2);
glEnd();
}
else if(choice==3){




glColor3ub (128, 128, 128);
glPointSize(5.0);
glBegin(GL_QUADS);
glVertex2i(X1*cos(t)-Y1*sin(t),X1*sin(t)+Y1*cos(t));
glVertex2i(X2*cos(t)-Y2*sin(t),X2*sin(t)+Y2*cos(t));
glVertex2i(X3*cos(t)-Y3*sin(t),X1*sin(t)+Y3*cos(t));
glVertex2i(X4*cos(t)-Y4*sin(t),X4*sin(t)+Y4*cos(t));
glEnd();

}
else{
}
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1000.0, 0.0, 1000.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1000, 1000);
glutInitWindowPosition (100, 150);
printf("Enter your Choice: \n");
printf("1.Transformation \n");
printf("2.Scaling\n");
printf("3.Rotation\n");
printf("4.Exit\n");

    printf("Enter the co-ordinates of vertex 1:- ");
    scanf("%f%f",&X1,&Y1);
    printf("Enter the co-ordinates of vertex 2:- ");
    scanf("%f%f",&X2,&Y2);
    printf("Enter the co-ordinates of vertex 3:- ");
    scanf("%f%f",&X3,&Y3);
    printf("Enter the co-ordinates of vertex 4:- ");
    scanf("%f%f",&X4,&Y4);

    printf("Enter your choice: ");
    scanf("%d",&choice);

if(choice==1){
   printf("Enter the Translation factor for x and y:-");
   scanf("%d %d",&f1,&f2);

}
else if(choice==2){

    printf("Enter the scaling factor for x and y:-");
   scanf("%d %d",&f1,&f2);
}
else if(choice==3){
        printf("Enter theta value:-");
        scanf("%f",&t);
        t=t*(3.1416/180);

}
else{
    return 0;

}



glutCreateWindow ("Transforming");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
