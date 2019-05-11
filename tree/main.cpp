#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416
static float	tx	=  -7.0;
static float	ty	=  5.0;

static float	tx1	=  -5.0;
static float	ty1	=  15.0;

static float	tx2	=  -1.0;
static float	ty2	=  25.0;

static float	tx3	=  1.0;
static float	ty3	=  5.0;

static float	tx4	=  2.0;
static float	ty4	=  15.0;

static float	tx5	=  -2.0;
static float	ty5	=  0.5;

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

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();

    glPushMatrix();
	glColor3f(0.0, 1.0, 0.0);

	glTranslatef(tx,ty,0);
	circle(6,6);
    glPopMatrix();

    glPushMatrix();
	glColor3f(0.0, 1.0, 0.0);

	glTranslatef(tx1,ty1,0);
	circle(6,6);
    glPopMatrix();

    glPushMatrix();
	glColor3f(0.0, 1.0, 0.0);

	glTranslatef(tx2,ty2,0);
	circle(6,6);
    glPopMatrix();

    glPushMatrix();
       glColor3f(0.0, 1.0, 0.0);

	glTranslatef(tx3,ty3,0);
	circle(6,6);

    glPopMatrix();

    glPushMatrix();
      glColor3f(0.0, 1.0, 0.0);

	glTranslatef(tx4,ty4,0);
	circle(6,6);

    glPopMatrix();

    glPushMatrix();
      glTranslated(tx5,tx5,0);
      glColor3f(1.0,0.0,0.0);
       glBegin(GL_POLYGON);

           glVertex2d(-6,-20);
           glVertex2d(6,-20);
           glVertex2d(3,1);
            glVertex2d(2,-4);
           glVertex2d(-3,1);

       glEnd();

    glPopMatrix();

	glPopMatrix();
	glFlush();
}

void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -50.0, 50.0);
}

int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1000, 1000);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("Translating Circle");
	init();
	glutDisplayFunc(display);
//	glutSpecialFunc(spe_key);//up,down,left,right
	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}
