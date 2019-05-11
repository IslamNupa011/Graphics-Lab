#include<windows.h>
#include <GL/glut.h>

#include <stdlib.h>

#include <math.h>


static GLfloat spin = 0.0;//initial degree for spinning
static GLfloat spin_1 = 0.0;//initial degree for spinning
static GLfloat spin_2 = 0.0;//initial degree for spinning
static GLfloat spin_3 = 0.0;//initial degree for spinning

static float	tx	=  0.0;
static float	ty	=  0.0;


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();


	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);



//	glTranslatef(tx,ty,0);
       glRectf(2.0,2.0,-2.0,-2.0);
	glPopMatrix();

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2d(0,0);
	glVertex2d(300,0);

	glVertex2d(0,0);
	glVertex2d(-300,0);

    glVertex2d(0,0);
	glVertex2d(0,300);

	 glVertex2d(0,0);
	glVertex2d(0,-300);


	glEnd();


	glPushMatrix();
            glRotatef(spin_1, 0, 0, 1);
            glTranslatef(-20, 0, 0);

          //  glScaled(2, 1, 0);
            glColor3f(0.0, 1.0, 0.0);
            glRectf(2.0,2.0,-2.0,-2.0);
        glPopMatrix();



        glPushMatrix();
            glRotatef(spin_2, 0, 1, 1);
            glTranslatef(-24, 0, 0);

            glScaled(0.4, 0.4, 0);
            glColor3f(0.0, 0.0, 1.0);
            glRectf(2.0,2.0,-2.0,-2.0);




        glPopMatrix();


        glPushMatrix();
            glRotatef(spin_3, 0, 1, 1);
            glTranslatef(-28, 0, 0);

            glScaled(0.4, 0.4, 0);
            glColor3f(0.0, 0.0, 1.0);
            glRectf(2.0,2.0,-2.0,-2.0);
        glPopMatrix();











	glFlush();
}

void spinDisplay_left(void)
{
   spin = spin + 0.01;
   spin_1=spin_1+0.02;
   spin_2=spin_2+0.02;
   spin_3=spin_3-0.05;

   if (spin > 360.0)
      spin = spin - 360.0;

       if (spin_1 > 360.0)
      spin_1 = spin_1 - 360.0;

       if (spin_2 > 360.0)
      spin_2 = spin_2 - 360.0;


        if (spin_3 < 0.0)
      spin_3 = spin_3 + 360.0;



   glutPostRedisplay();
}





void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-25.0, 25.0, -25.0, 25.0, -25.0, 25.0);
}




int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("Use of Mouse and Keyboard");
	init();

    glutDisplayFunc(display);
     glutIdleFunc(spinDisplay_left);








	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}


