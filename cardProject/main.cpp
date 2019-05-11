#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416
#define slice 600


static GLfloat spin = 0.0;

static float	tx	=  0.0;//head
static float	ty	=  17.0;

static float tx_1=0.0;//body
static float ty_1=-10.0;


static float tx_2=6.0;//right hand
static float ty_2=-5.0;



static float tx_3=-6.0;//left hand
static float ty_3=-5.0;





static float tx_4=-3.0;//upper head1
static float ty_4=17.0;


static float tx_5=3.0;//upper head2
static float ty_5=17.0;

static float tx_8=0.0;//middle body
static float ty_8=-9.0;

static float tx_6=-12.0;//right eye glASS black
static float ty_6=13.0;

static float tx_16=-12.0;//right eye glass blue
static float ty_16=13.0;

static float tx_17=-12.0;//right eye glass white
static float ty_17=13.0;

//static float tx_7=-14.5;//left eye
//static float ty_7=9.7;

static float tx_9=0.0;//nose
static float ty_9=13.0;

static float tx_10=-3.0;//right leg
static float ty_10=-32.5;

static float tx_11=3.0;//left leg
static float ty_11=-32.5;

static float tx_12=-16.0;//p1 translate
static float ty_12=0.0;

static float tx_13=40.0;//p2 translate
static float ty_13=0.0;

static float tx_7=-14.5;//left eye glass
static float ty_7=9.7;

static float tx_14=-14.5;//left eye glass
static float ty_14=9.7;

static float tx_15=-14.5;//left eye glass
static float ty_15=9.7;

static float tx_18=-11.0;//left eye glass line
static float ty_18=13.0;

static float tx_19=-11.0;//left eye glass line
static float ty_19=13.0;



//static float TX=9.5;//eye glass translate
//static float TY=2.7;

//static float tx_7=-14.5;//left eye
//static float ty_7=9.7;

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
    //glScaled(0.5,0.5,0);
    //glTranslatef(tx_12,ty_12,0);
    glPushMatrix();





    glPushMatrix();//red rectangle
       glColor3f(0.18,0.35,0.52);
       glBegin(GL_POLYGON);
          glVertex2d(1000,800);
          glVertex2d(-1000,800);
          glVertex2d(-1000,-800);
          glVertex2d(1000,-1000);
       glEnd();
    glPopMatrix();

    glPushMatrix();//skyblue rectangle
       glColor3f(0.77,0.84,0.93);
       glBegin(GL_POLYGON);
          glVertex2d(400,400);
          glVertex2d(-400,400);
          glVertex2d(-400,-400);
          glVertex2d(400,-400);
       glEnd();
    glPopMatrix();

        /*glPushMatrix();//white rectangle
       glColor3f(0.9,0.9,0.9);
       glBegin(GL_POLYGON);
          glVertex2d(100,100);
          glVertex2d(-100,100);
          glVertex2d(-100,-100);
          glVertex2d(100,-100);
       glEnd();
    glPopMatrix();*/


	glPushMatrix();  // Draws The Head
	glColor3f(0.0, 0.0, 0.0);
	glTranslatef(tx,ty,0);
	circle(8,10);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0.0f,0.0f,0.0f);

	glBegin(GL_POINTS); // To Check The Center Point
	glVertex2d(0,0);
	glEnd();

	glPopMatrix();


	glPushMatrix(); // Draws The Body
	glColor3f(0.0, 0.0, 0.0);
	glTranslatef(tx_1,ty_1,0);
	circle(8,22);

	glPopMatrix();


	glPushMatrix(); // Draws The Right Hand
	        glRotatef(30, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx_2,ty_2,0);
	       circle(3,16);
            //glScaled(2, 1, 0);

	glPopMatrix();



	glPushMatrix(); // Draws The Left Hand
	        glRotatef(-30, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx_3,ty_3,0);
	       circle(3,16);
            //glScaled(2, 1, 0);

	glPopMatrix();

     glPushMatrix();  // Draws The upper Head1
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx_4,ty_4,0);
	circle(4,6);
	glPopMatrix();


   glPopMatrix();

     glPushMatrix();  // Draws The upper Head2
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx_5,ty_5,0);
	circle(4,6);
	glPopMatrix();


    glPushMatrix(); // Draws The middle Body
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx_8,ty_8,0);
	circle(7,22);

	glPopMatrix();

	/*glPushMatrix(); // Draws The Right Eye
          glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx_6,ty_6,0);
	       circle(1,1);
            //glScaled(2, 1, 0);

	glPopMatrix();


	glPushMatrix(); // Draws The Left Eye
	        glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx_7,ty_7,0);
	       circle(1,1);
            //glScaled(2, 1, 0);

	glPopMatrix();*/

	glPushMatrix(); // Draws The nose
         glTranslated(tx_9,ty_9,0);
	       glColor3f(0.9,0.5,0);
	       glBegin(GL_TRIANGLES);
	          glVertex2d(1,1);
	          glVertex2d(-1,1);
	          glVertex2d(0,-1);
	       glEnd();

	glPopMatrix();

	glPushMatrix(); // Draws The Right leg
          //glRotatef(-50, 0, 0, 1);
           glColor3f(0.9, 0.5, 0.0);
           glTranslatef(tx_10,ty_10,0);
	       circle(2,3);
            //glScaled(2, 1, 0);

	glPopMatrix();

	glPushMatrix(); // Draws The left leg
          //glRotatef(-50, 0, 0, 1);
           glColor3f(0.9, 0.5, 0.0);
           glTranslatef(tx_11,ty_11,0);
	       circle(2,3);
            //glScaled(2, 1, 0);

	glPopMatrix();

   glPopMatrix();


	//glass left
	//glTranslated(TX,TY,0);
	glPushMatrix(); // Draws glass nich blue
	        glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 1.0);
           glTranslatef(tx_14,ty_14,0);
	       circle(1.6,1.6);
            //glScaled(2, 1, 0);

	glPopMatrix();

	glPushMatrix(); // Draws glass upor white
	        glRotatef(-50, 0, 0, 1);
           glColor3f(1.0, 1.0, 1.0);
           glTranslatef(tx_15,ty_15,0);
	       circle(1.1,1.1);
            //glScaled(2, 1, 0);

	glPopMatrix();

    glPushMatrix(); // Draws glass ekdom upor black
	        glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx_7,ty_7,0);
	       circle(0.6,0.6);
            //glScaled(2, 1, 0);

	glPopMatrix();

     //glass right
	glPushMatrix(); // Draws glass nich blue
	        glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 1.0);
           glTranslatef(tx_16,ty_16,0);
	       circle(1.6,1.6);
            //glScaled(2, 1, 0);

	glPopMatrix();

	glPushMatrix(); // Draws glass upor white
	        glRotatef(-50, 0, 0, 1);
           glColor3f(1.0, 1.0, 1.0);
           glTranslatef(tx_17,ty_17,0);
	       circle(1.1,1.1);
            //glScaled(2, 1, 0);

	glPopMatrix();

    glPushMatrix(); // Draws glass ekdom upor black
	        glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx_6,ty_6,0);
	       circle(0.6,0.6);
            //glScaled(2, 1, 0);

	glPopMatrix();

   /* glPushMatrix(); // Draws glass line
	        //glRotatef(-50, 0, 0, 1);
           glColor3f(1.0, 1.0, 1.0);
           //glTranslatef(tx_6,ty_6,0);
	      glBegin(GL_LINE);
	        glVertex2d(-14.5,0);
	        glVertex2d(12,0);
	      glEnd();

	glPopMatrix();*/

    //leg


   glPopMatrix();

   //2nd penguin

    glTranslatef(tx_13,ty_13,0);
    glPushMatrix();

    glPushMatrix();  // Draws The Head
	glColor3f(0.0, 0.0, 0.0);
	glTranslatef(tx,ty,0);
	circle(8,10);
	glPopMatrix();


	glPushMatrix();
	glColor3f(0.0f,0.0f,0.0f);

	glBegin(GL_POINTS); // To Check The Center Point
	glVertex2d(0,0);
	glEnd();

	glPopMatrix();


	glPushMatrix(); // Draws The Body
	glColor3f(0.0, 0.0, 0.0);
	glTranslatef(tx_1,ty_1,0);
	circle(8,22);

	glPopMatrix();


	glPushMatrix(); // Draws The Right Hand
	        glRotatef(30, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx_2,ty_2,0);
	       circle(3,16);
            //glScaled(2, 1, 0);

	glPopMatrix();



	glPushMatrix(); // Draws The Left Hand
	        glRotatef(-30, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx_3,ty_3,0);
	       circle(3,16);
            //glScaled(2, 1, 0);

	glPopMatrix();

     glPushMatrix();  // Draws The upper Head1
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx_4,ty_4,0);
	circle(4,6);
	glPopMatrix();


   glPopMatrix();

     glPushMatrix();  // Draws The upper Head2
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx_5,ty_5,0);
	circle(4,6);
	glPopMatrix();


    glPushMatrix(); // Draws The middle Body
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx_8,ty_8,0);
	circle(7,22);

	glPopMatrix();

	glPushMatrix(); // Draws The Right Eye
          glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx_6,ty_6,0);
	       circle(1,1);
            //glScaled(2, 1, 0);

	glPopMatrix();


	glPushMatrix(); // Draws The Left Eye
	        glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx_7,ty_7,0);
	       circle(1,1);
            //glScaled(2, 1, 0);

	glPopMatrix();

	glPushMatrix(); // Draws The nose
         glTranslated(tx_9,ty_9,0);
	       glColor3f(0.9,0.5,0);
	       glBegin(GL_TRIANGLES);
	          glVertex2d(1,1);
	          glVertex2d(-1,1);
	          glVertex2d(0,-1);
	       glEnd();

	glPopMatrix();

	glPushMatrix(); // Draws The Right leg
          //glRotatef(-50, 0, 0, 1);
           glColor3f(0.9, 0.5, 0.0);
           glTranslatef(tx_10,ty_10,0);
	       circle(2,3);
            //glScaled(2, 1, 0);

	glPopMatrix();

	glPushMatrix(); // Draws The left leg
          //glRotatef(-50, 0, 0, 1);
           glColor3f(0.9, 0.5, 0.0);
           glTranslatef(tx_11,ty_11,0);
	       circle(2,3);
            //glScaled(2, 1, 0);

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
//	glutKeyboardFunc(my_keyboard);
	//glutSpecialFunc(spe_key);//up,down,left,right
	//glutMouseFunc(my_mouse);

	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}


