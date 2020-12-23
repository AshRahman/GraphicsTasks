#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 0.0f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;

GLfloat speed = 0.1f;
GLfloat speed1 = 0.1f;

void update(int value) {

    if(position < -2.0)
        position = 1.2f;

    position -= speed;
    if(position3>1.4){
        position3=-0.1f;
//        position3+=speed;
    }

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}




void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			while(position3<1.4){
                position3+=speed;

			}

		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    position2 -= 0.1f;
    break;
case 'd':
    position2 += 0.1f;
    break;


glutPostRedisplay();


	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();



glPushMatrix();
glTranslatef(0.0f,position, 0.0f);
   glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.9f,1.0f);
      glVertex2f(-0.8f,0.8f);
      glVertex2f(-0.7f,1.0f);
   glEnd();
    glBegin(GL_TRIANGLES);
  glColor3f(0.0f, 0.0f, 1.0f);
  glVertex2f(-0.5f,0.8f);
  glVertex2f(-0.4f,0.6f);
   glVertex2f(-0.3f,0.8f);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.0f, 0.0f, 1.0f);
  glVertex2f(0.3f,0.7f);
  glVertex2f(0.4f,0.5f);
   glVertex2f(0.5f,0.7f);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.0f, 0.0f, 1.0f);
  glVertex2f(0.8f,0.9f);
  glVertex2f(0.9f,0.7f);
   glVertex2f(1.0f,0.9f);
  glEnd();



glPopMatrix();

glPushMatrix();
glPushMatrix();
    glTranslatef(position2,0.0f,0.0f);

  glBegin(GL_TRIANGLES);
  glColor3f(0.0f, 0.0f, 1.0f);
  glVertex2f(0.0f,-0.7f);
  glVertex2f(-0.1f,-0.8f);
   glVertex2f(0.1f,-0.8f);
  glEnd();

  glBegin(GL_QUADS);
  glColor3f(1.0f, 0.0f, 0.0f);
  glVertex2f(-0.1f,-0.8f);
  glVertex2f(-0.1f,-1.0f);
   glVertex2f(0.1f,-1.0f);
   glVertex2f(0.1f,-0.8f);
  glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(position2,position3,0.0f);
glBegin(GL_QUADS);
  glColor3f(1.0f, 1.0f, 1.0f);
  glVertex2f(-0.02f,-0.7f);
  glVertex2f(-0.02f,-0.8f);
   glVertex2f(0.02f,-0.8f);
   glVertex2f(0.02f,-0.7f);
  glEnd();

glPopMatrix();


glPopMatrix();



   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
