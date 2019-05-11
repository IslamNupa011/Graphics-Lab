#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416
static GLfloat spin = 0.0;
static float	tx	=  0.0;
static float	ty	=  0.0;

static float	tx1	=  5.0;
static float	ty1	=  5.0;

static float	tx2	=  5.0;
static float	ty2	=  5.0;

static float	tx3	=  5.0;
static float	ty3	=  5.0;

static float	tx4	=  5.0;
static float	ty4	=  5.0;

static float	tx5	=  5.0;
static float	ty5	=  5.0;

void circle(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}
void circle1(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}
void circle2(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}
void circle3(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}
void circle4(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}
void circle5(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
//glRotatef(spin, 0.0, 0.0, 1.0);
	glPushMatrix();
           glRotatef(spin, 0.0, 0.0, 1.0);

    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotated(10,0,0,1);
    glScaled(1,2,1);
    glTranslatef(tx+1,ty-9,0);
    circle5(3,3);
    glPopMatrix();


    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotated(-10,0,0,1);
     glScaled(1,2,1);
    glTranslatef(tx-1,ty-9,0);
    circle4(3,3);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotated(35,0,0,1);
     glScaled(1,2,1);
    glTranslatef(tx+10,ty-1,0);
    circle3(6,6);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glRotated(-35,0,0,1);
    glScaled(1,2,1);
    glTranslatef(tx-8,ty,0);
    circle2(6,6);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glScaled(1,3,1);
    glTranslatef(tx,ty,0);
    circle1(6,6);
    glPopMatrix();

    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(tx,ty+19,0);
    circle(6,6);

	glPopMatrix();
	glFlush();
}
void spinDisplay_left(void)
{
   spin = spin + 1;
   if (spin > 360.0)
      spin = spin - 360.0;
   glutPostRedisplay();
}

void spinDisplay_right(void)
{
   spin = spin - 1;
   if (spin < 0.0)
      spin = spin +360.0;
   glutPostRedisplay();
}
void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -50.0, 50.0);
}
void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'l':
			spinDisplay_left();
			//glutIdleFunc(spinDisplay_left);
			break;

		case 'r':
			spinDisplay_right();
			break;

		case 's':
			 glutIdleFunc(NULL);
			 break;

	  default:
			break;
	}
}




int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1000, 1000);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("Translating Circle");
	init();
	glutDisplayFunc(display);
    glutKeyboardFunc(my_keyboard);
	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}

