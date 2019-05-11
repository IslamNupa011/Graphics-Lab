#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

static float	tx	=  4.0;
static float	ty	=  1.5;

static float	tx1	=  6.0;
static float	ty1	=  1.5;

static float	TX	=  -10.0;
static float	TY	=  10.0;

static float	TX1	=  -10.0;
static float	TY1	=  10.0;


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



   glPushMatrix();//road
   glTranslated(TX,TY,0);
   glScaled(6,2,1);
	glColor3f(0.99f,0.93f,0.83f);
    glBegin(GL_QUADS);

        glVertex2f(-10.0f,0.0f);


         glVertex2f(-10.0f,-10.0f);


          glVertex2f(10.0,-10.0);


           glVertex2f(10.0,0.0);


    glEnd();
    glPopMatrix();


    glScaled(3,3,1);
   glPushMatrix();//circle

	glColor3f(0.0, 0.0, 1.0);

	glTranslatef(tx1,ty1,0);
	circle(0.5,0.5);

	glPopMatrix();

	glPushMatrix();//circle

	glColor3f(0.0, 0.0, 1.0);

	glTranslatef(tx,ty,0);
	circle(0.5,0.5);

	glPopMatrix();

	glPushMatrix();//body
	glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_QUADS);

        glVertex2f(2.0f,4.0f);


         glVertex2f(2.0f,2.0f);


          glVertex2f(8.0,2.0);


           glVertex2f(8.0,4.0);


    glEnd();
    glPopMatrix();

    glPushMatrix();//body
    glColor3f(0.0f,0.0f,1.0f);
    glBegin(GL_QUADS);

        glVertex2f(4.0f,6.0f);


         glVertex2f(3.0f,4.0f);


          glVertex2f(7.0,4.0);


           glVertex2f(6.0,6.0);


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


void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				tx -=5;
				glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
				tx +=5;
				glutPostRedisplay();
				break;

        case GLUT_KEY_DOWN:
				ty -=5;
				glutPostRedisplay();
				break;

		case GLUT_KEY_UP:
				ty +=5;
				glutPostRedisplay();
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
	glutSpecialFunc(spe_key);//up,down,left,right
	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}

