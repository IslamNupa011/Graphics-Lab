#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416
#define slice 600


static GLfloat spin = 0.0;

static float	tx	=  0.0;
static float	ty	=  15.0;

static float tx_1=0.0;
static float ty_1=-10.0;


static float tx_2=6.0;
static float ty_2=-10.0;



static float tx_3=-6.0;
static float ty_3=-10.0;

static float tx_4=-16.0;
static float ty_4=-35.0;


static float tx_5=16.0;
static float ty_5=-35.0;




static float tx_6=-12.0;
static float ty_6=12.0;


static float tx_7=-14.5;
static float ty_7=9.7;

static float tx_8=0.0;
static float ty_8=16.7;




void circle(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < slice; i++)
		{
			angle = 2 * PI * i / slice;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();



    glRotatef(spin, 0.0, 0.0, 1.0);


	glPushMatrix();  // Draws The Head Of Bay Max
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx,ty,0);
	circle(6,6);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0.0f,0.0f,0.0f);

	glBegin(GL_POINTS); // To Check The Center Point
	glVertex2d(0,0);
	glEnd();

	glPopMatrix();


	glPushMatrix(); // Draws The Body Of Bay Max
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx_1,ty_1,0);
	circle(8,20);

	glPopMatrix();


	glPushMatrix(); // Draws The Right Hand Of Bay Max
	        glRotatef(55, 0, 0, 1);
           glColor3f(1.0, 1.0, 1.0);
           glTranslatef(tx_2,ty_2,0);
	       circle(6,16);
            //glScaled(2, 1, 0);

	glPopMatrix();



	glPushMatrix(); // Draws The Left Hand Of Bay Max
	        glRotatef(-55, 0, 0, 1);
           glColor3f(1.0, 1.0, 1.0);
           glTranslatef(tx_3,ty_3,0);
	       circle(6,16);
            //glScaled(2, 1, 0);

	glPopMatrix();



	glPushMatrix(); // Draws The Right Leg Of Bay Max
	        glRotatef(50, 0, 0, 1);
           glColor3f(1.0, 1.0, 1.0);
           glTranslatef(tx_4,ty_4,0);
	       circle(8,17);
            //glScaled(2, 1, 0);

	glPopMatrix();



	glPushMatrix(); // Draws The Left Leg Of Bay Max
	        glRotatef(-50, 0, 0, 1);
           glColor3f(1.0, 1.0, 1.0);
           glTranslatef(tx_5,ty_5,0);
	       circle(8,17);
            //glScaled(2, 1, 0);

	glPopMatrix();




	glPushMatrix(); // Draws The Right Eye Of Bay Max
          glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx_6,ty_6,0);
	       circle(0.5,0.5);
            //glScaled(2, 1, 0);

	glPopMatrix();


	glPushMatrix(); // Draws The Left Eye Of Bay Max
	        glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx_7,ty_7,0);
	       circle(0.5,0.5);
            //glScaled(2, 1, 0);

	glPopMatrix();


	glPushMatrix(); // Draws The Line Between  The Eyes Of Bay Max


         glTranslatef(tx_8,ty_8,0);
          glBegin(GL_LINES);
          glColor3f(0.0, 0.0, 0.0);
	      glVertex2f(-2.1f,0.1f);
          glVertex2f(1.2f,0.1f);

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

void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'l':
			spinDisplay_left();
			glutIdleFunc(spinDisplay_left);
			break;

		case 'r':
			spinDisplay_right();
			glutIdleFunc(spinDisplay_right);
			break;

		case 's':
			 glutIdleFunc(NULL);
			 break;

	  default:
			break;
	}
}

void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
//            spinDisplay_left();
            glutIdleFunc(spinDisplay_left);
         break;
      case GLUT_MIDDLE_BUTTON:
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
//            spinDisplay_right();
			glutIdleFunc(spinDisplay_right);
         break;
      default:
         break;
   }
}
void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				tx -=2;
				tx_1 -=2;
				tx_2 -=2;
				tx_3 -=2;
				tx_4 -=2;
				tx_5 -=2;
				tx_6 -=2;
				tx_7 -=2;
				tx_8 -=2;
				glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
				tx +=2;
				tx_1 +=2;
				tx_2 +=2;
				tx_3 +=2;
				tx_4 +=2;
				tx_5 +=2;
				tx_6 +=2;
				tx_7 +=2;
				tx_8 +=2;
				glutPostRedisplay();
				break;

        case GLUT_KEY_DOWN:
				ty -=2;
				ty_1 -=2;
				ty_2 -=2;
				ty_3 -=2;
				ty_4 -=2;
				ty_5 -=2;
				ty_6 -=2;
				ty_7 -=2;
				ty_8 -=2;
				glutPostRedisplay();
				break;

		case GLUT_KEY_UP:
				ty +=2;
				ty_1 +=2;
				ty_2 +=2;
				ty_3 +=2;
				ty_4 +=2;
				ty_5 +=2;
				ty_6 +=2;
				ty_7 +=2;
				ty_8 +=2;
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
	glutKeyboardFunc(my_keyboard);
	glutSpecialFunc(spe_key);//up,down,left,right
	glutMouseFunc(my_mouse);

	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}


