#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<stdio.h>
#include <math.h>


#define PI 3.1416
#define slice 600


static GLfloat spin = 0.0;

static float	tx	=  0.0;
static float	ty	=  0.0;



static float	a	=  0.0; /*Snow Faller Variables*/
static float	b	=  8.0;

static float TX=64.5;
static float TY=2.7;
static float TX_1=-64.5;
static float TY_1=2.7;

static float	sx	=  0.0;//for ice
static float	sy	=  0.0;

/*static float tx_1=0.0;//body
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



static float TX=9.5;//eye glass translate
static float TY=2.7;

*/





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





   glPushMatrix();//sky blue rectangle
       glColor3f(0.18,0.35,0.52);
       glBegin(GL_POLYGON);
          glVertex2d(-100,700);
          glVertex2d(-100,-20);
          glVertex2d(100,-20);
          glVertex2d(100,700);
       glEnd();
    glPopMatrix();





//footer ice
    glPushMatrix();
    //glScaled(0.5,0.5,0);
    //glTranslatef(0,-60,0);
    glColor3f(0.77, 0.84, 0.93);
    glBegin(GL_QUADS);

        glVertex2d(-100, -20);

        glVertex2d(-100, -74);

        glVertex2d(100, -74);

        glVertex2d(100, -20);
    glEnd();
    glPopMatrix();

    //hill 1
    glColor3f(0.1, 0.84, 0.93);
    glBegin(GL_TRIANGLES);

        glColor3f(0.1, 0.84, 0.80);glVertex2d(-100, -20);

        glColor3f(0.77, 0.84, 0.92);glVertex2d(-30, -20);

         glColor3f(0.54, 0.69, 0.85);glVertex2d(-45, 20);


    glEnd();
    glPopMatrix();

    //hill 2

    glBegin(GL_TRIANGLES);

        glColor3f(0.1, 0.84, 0.80);glVertex2d(-55, -20);

         glColor3f(0.77, 0.84, 0.92);glVertex2d(-10, -20);

         glColor3f(0.54, 0.69, 0.85);glVertex2d(-24.5, 20);


    glEnd();
    glPopMatrix();

    //hill 3
    glColor3f(0.1, 0.84, 0.93);
    glBegin(GL_TRIANGLES);

        glColor3f(0.1, 0.84, 0.80);glVertex2d(-50.5, -20);

        glColor3f(0.77, 0.84, 0.92);glVertex2d(15, -20);

        glColor3f(0.54, 0.69, 0.85);glVertex2d(0.7, 20);


    glEnd();
    glPopMatrix();

    //sun
    glPushMatrix();
    glTranslatef(25,35,0);
    glColor3f(1, 1, 1);
    circle(6,8);
    glPopMatrix();




    //1st left penguin
    //  Was

    // Was Here Previously

//2nd right penguin


  /*  glPushMatrix();
    glPushMatrix();  // Draws The Head
	glColor3f(0.0, 0.0, 0.0);
	glTranslatef(tx-30,ty+2,0);
	circle(5.5,7.5);
	glPopMatrix();





	glPushMatrix(); // Draws The Body
	glColor3f(0.0, 0.0, 0.0);
	glTranslatef(tx-30,ty-20,0);
	circle(6,18);

	glPopMatrix();


	glPushMatrix(); // Draws The Right Hand
	        glRotatef(30, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx-26,ty-0.5,0);
	       circle(3,11);
            //glScaled(2, 1, 0);

	glPopMatrix();



	glPushMatrix(); // Draws The Left Hand
	        glRotatef(-25, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx-28.5,ty-28.2,0);
	       circle(3,11);
            //glScaled(2, 1, 0);

	glPopMatrix();

     glPushMatrix();  // Draws The upper Head1
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx-31.5,ty+2,0);
	circle(2.5,4.5);
	glPopMatrix();


   glPopMatrix();

     glPushMatrix();  // Draws The upper Head2
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx-28.5,ty+2,0);
	circle(2.5,4.5);
	glPopMatrix();


    glPushMatrix(); // Draws The middle Body
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx-30,ty-18,0);
	circle(5,17);

	glPopMatrix();

	glPushMatrix(); // Draws The Right Eye
          //glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx-32,ty+3,0);
	       circle(1,1);
            //glScaled(2, 1, 0);

	glPopMatrix();


	glPushMatrix(); // Draws The Left Eye
	       // glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx-28,ty+3,0);
	       circle(1,1);
            //glScaled(2, 1, 0);

	glPopMatrix();

	glPushMatrix(); // Draws The nose
         glTranslated(tx-30,ty-1,0);
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
           glTranslatef(tx-32.5,ty-39,0);
	       circle(1.5,2.5);
            //glScaled(2, 1, 0);

	glPopMatrix();

	glPushMatrix(); // Draws The left leg
          //glRotatef(-50, 0, 0, 1);
           glColor3f(0.9, 0.5, 0.0);
           glTranslatef(tx-27.5,ty-39,0);
	       circle(1.5,2.5);
            //glScaled(2, 1, 0);


	glPopMatrix();
*/




	//ice

//tree




        glPushMatrix();
        glTranslatef(a,b,0);
        glPushMatrix();
         glBegin(GL_LINES);

           //1st
             glColor3f(1.0,1.0,1.0);//-
             glVertex2d(5,27);
             glVertex2d(8,27);

             glColor3f(1.0,1.0,1.0);//|
             glVertex2d(6.5,29);
             glVertex2d(6.5,25);

              glColor3f(1.0,1.0,1.0);//
             glVertex2d(7.45,25);
             glVertex2d(5.45,29);

             glColor3f(1.0,1.0,1.0);//
             glVertex2d(5.45,25);
             glVertex2d(7.45,29);

            //2nd
             glColor3f(1.0,1.0,1.0);//-
             glVertex2d(20,10);
             glVertex2d(23,10);

             glColor3f(1.0,1.0,1.0);//|
             glVertex2d(21.5,12);
             glVertex2d(21.5,8);

              glColor3f(1.0,1.0,1.0);//
             glVertex2d(20,8);
             glVertex2d(22.75,12);

             glColor3f(1.0,1.0,1.0);//
             glVertex2d(22.5,8);
             glVertex2d(20.5,12);


      //3rd


             glColor3f(1.0,1.0,1.0);//-
             glVertex2d(-9,35);
             glVertex2d(-7,35);

             glColor3f(1.0,1.0,1.0);//|
             glVertex2d(-8,33.5);
             glVertex2d(-8,36.5);

              glColor3f(1.0,1.0,1.0);//
             glVertex2d(-8.75,33.5);
             glVertex2d(-7.35,36.5);

             glColor3f(1.0,1.0,1.0);//
             glVertex2d(-8.75,36.5);
             glVertex2d(-7.35,33.5);


              //4th


             glColor3f(1.0,1.0,1.0);//-
             glVertex2d(-20,45);
             glVertex2d(-22,45);

             glColor3f(1.0,1.0,1.0);//|
             glVertex2d(-21,46.5);
             glVertex2d(-21,43.5);

              glColor3f(1.0,1.0,1.0);//
              glVertex2d(-20.45,46.5);
             glVertex2d(-21.5,43.5);


             glColor3f(1.0,1.0,1.0);//
             glVertex2d(-20.45,43.5);
             glVertex2d(-21.5,46.5);

             //5th



             glColor3f(1.0,1.0,1.0);//-
             glVertex2d(-40,35);
             glVertex2d(-42,35);

             glColor3f(1.0,1.0,1.0);//|
             glVertex2d(-41,33.5);
             glVertex2d(-41,36.5);

              glColor3f(1.0,1.0,1.0);//
             glVertex2d(-41.5,36.5);
             glVertex2d(-40.5,33.5);

             glColor3f(1.0,1.0,1.0);//
             glVertex2d(-40.5,36.5);
             glVertex2d(-41.65,33.5);


             //6th


             glPushMatrix();
             glTranslatef(a,b,0);
              glPushMatrix();

             glColor3f(1.0,1.0,1.0);//-
             glVertex2d(40,45);
             glVertex2d(42,45);

             glColor3f(1.0,1.0,1.0);//|
             glVertex2d(41,43.5);
             glVertex2d(41,46.5);

              glColor3f(1.0,1.0,1.0);//
              glVertex2d(41.65,46.5);
             glVertex2d(40.45,43.5);


             glColor3f(1.0,1.0,1.0);//
             glVertex2d(41.65,43.5);
             glVertex2d(40.45,46.5);














        glEnd();


        glPopMatrix();
        b=b-0.02;
        glPopMatrix();

     //cristmas tree





      glPushMatrix();



       glBegin(GL_POLYGON);

                   glColor3f(0.0,0.39,0.0);glVertex2d(32,0);
                     glVertex2d(37,5);
                    glVertex2d(42,0);
                    glEnd();
       //2nd t2
       glBegin(GL_POLYGON);

                    glColor3f(0.0,0.39,0.0);glVertex2d(30,-5);
                     glVertex2d(37,3);
                    glVertex2d(44,-5);
                    glEnd();

                  //1st t1
                   glBegin(GL_POLYGON);
                    glColor3f(0.0,0.39,0.0);glVertex2d(28,-10.5);
                    glVertex2d(37,0);
                   glVertex2d(46,-10.5);
                    glEnd();

                     //t4
               glBegin(GL_POLYGON);

                   glColor3f(0.0,0.39,0.0);glVertex2d(33.5,3);
                     glColor3f(0.59,0.98,0.59);glVertex2d(37,7.25);
                      glColor3f(0.0,0.39,0.0);glVertex2d(40.5,3);

                    glEnd();
                    //stm
                glBegin(GL_QUADS);
                  glColor3f(0.54,0.23,0.07);
                  glVertex2d(36,-10);
                   glVertex2d(36,-20);
                    glVertex2d(38,-20);
                    glVertex2d(38,-10);
                 glEnd();


 glPopMatrix();
    glPushMatrix();//letter start H
       glBegin(GL_POLYGON);

       glColor3f(0.85,0.30,0.30);
        glVertex2d(-30,30);
         glVertex2d(-30.5,30);
          glVertex2d(-30.5,35);
           glVertex2d(-30,35);
glPopMatrix();
glEnd();
glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-30.5,32);
         glVertex2d(-32.5,32);
          glVertex2d(-32.5,32.5);
           glVertex2d(-30.5,32.5);
glPopMatrix();
       glEnd();

 glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-32.5,30);
         glVertex2d(-33,30);
          glVertex2d(-33,35);
           glVertex2d(-32.5,35);
glPopMatrix();
       glEnd();
       //letter A
       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-29,30);
         glVertex2d(-28.5,30);
          glVertex2d(-28.5,35);
           glVertex2d(-29,35);
glPopMatrix();
       glEnd();

        glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-28.5,34.5);
         glVertex2d(-27,34.5);
          glVertex2d(-27,35);
           glVertex2d(-28.5,35);
glPopMatrix();
       glEnd();


        glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-27,30);
         glVertex2d(-26.5,30);
          glVertex2d(-26.5,35);
           glVertex2d(-27,35);
glPopMatrix();
       glEnd();

        glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-28.5,32);
         glVertex2d(-27,32);
          glVertex2d(-27,32.5);
           glVertex2d(-28.5,32.5);
glPopMatrix();
       glEnd();
//letter p
 glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-25,30);
         glVertex2d(-24.5,30);
          glVertex2d(-24.5,35);
           glVertex2d(-25,35);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-24.5,34.5);
         glVertex2d(-23,34.5);
          glVertex2d(-23,35);
           glVertex2d(-24.5,35);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-23,32.5);
         glVertex2d(-22.5,32.5);
          glVertex2d(-22.5,35);
           glVertex2d(-23,35);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-24.5,32.5);
         glVertex2d(-22.5,32.5);
          glVertex2d(-22.5,33);
           glVertex2d(-24.5,33);
glPopMatrix();
       glEnd();

       //2nd p
        glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-21,30);
         glVertex2d(-20.5,30);
          glVertex2d(-20.5,35);
           glVertex2d(-21,35);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-20.5,34.5);
         glVertex2d(-19,34.5);
          glVertex2d(-19,35);
           glVertex2d(-20.5,35);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-19,32.5);
         glVertex2d(-19.5,32.5);
          glVertex2d(-19.5,35);
           glVertex2d(-19,35);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-19.5,32.5);
         glVertex2d(-20.5,32.5);
          glVertex2d(-20.5,33);
           glVertex2d(-19.5,33);
glPopMatrix();
       glEnd();

       //letter Y

        glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-18,35);
         glVertex2d(-18,33);
          glVertex2d(-17.5,33);
           glVertex2d(-17.5,35);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-18,32.5);
         glVertex2d(-16,32.5);
          glVertex2d(-16,33);
           glVertex2d(-18,33);
glPopMatrix();
       glEnd();

glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-16,32.5);
         glVertex2d(-15.5,32.5);
          glVertex2d(-15.5,35);
           glVertex2d(-16,35);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-17.39,30);
         glVertex2d(-17.01,30);
          glVertex2d(-17.01,33);
           glVertex2d(-17.39,33);
glPopMatrix();
       glEnd();

//letter N
glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-11,30);
         glVertex2d(-10.5,30);
          glVertex2d(-10.5,35);
           glVertex2d(-11,35);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-8.10,30);
         glVertex2d(-8,30);
          glVertex2d(-10.10,35);
           glVertex2d(-10.5,35);
glPopMatrix();
       glEnd();


glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-8.10,35);
         glVertex2d(-7.5,35);
          glVertex2d(-7.5,30);
           glVertex2d(-8.10,30);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-7,30);
         glVertex2d(-6.5,30);
          glVertex2d(-6.5,35);
           glVertex2d(-7,35);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-6.5,35);
         glVertex2d(-5,35);
          glVertex2d(-5,34.5);
           glVertex2d(-6.5,34.5);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-6.5,33);
         glVertex2d(-5,33);
          glVertex2d(-5,32.5);
           glVertex2d(-6.5,32.5);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-6.5,30.5);
         glVertex2d(-5,30.5);
          glVertex2d(-5,30);
           glVertex2d(-6.5,30);
glPopMatrix();
       glEnd();

       //letter W
       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-4.5,30);
         glVertex2d(-4,30);
          glVertex2d(-4,35);
           glVertex2d(-4.5,35);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-4,30);
         glVertex2d(-3.5,30);
          glVertex2d(-2,32.5);
           glVertex2d(-2.5,32.5);
glPopMatrix();
       glEnd();

        glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-2,30);
         glVertex2d(-1.5,30);
          glVertex2d(-3.5,32.5);
           glVertex2d(-3.75,32.5);
glPopMatrix();
       glEnd();

        glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(-1.5,30);
         glVertex2d(-1,30);
          glVertex2d(-1.5,35);
           glVertex2d(-1,35);
glPopMatrix();
       glEnd();

       //letter Y
        glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(2.5,32);
         glVertex2d(2,32);
          glVertex2d(2,35);
           glVertex2d(2.5,35);
glPopMatrix();
       glEnd();

        glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(4,32);
         glVertex2d(4.5,32);
          glVertex2d(4.5,35);
           glVertex2d(4,35);
glPopMatrix();
       glEnd();

         glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(2,32);
         glVertex2d(4,32);
          glVertex2d(4,32.5);
           glVertex2d(2,32.5);
glPopMatrix();
       glEnd();





    glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(3,30);
         glVertex2d(3.5,30);
          glVertex2d(3.5,32.5);
           glVertex2d(3,32.5);
glPopMatrix();
       glEnd();

       //letter E
        glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(5,30);
         glVertex2d(5.5,30);
          glVertex2d(5.5,35);
           glVertex2d(5,35);
glPopMatrix();
       glEnd();

        glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(5.5,35);
         glVertex2d(6.5,35);
          glVertex2d(6.5,34.5);
           glVertex2d(5.5,34.5);
glPopMatrix();
       glEnd();

 glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(5.5,33);
         glVertex2d(6.5,33);
          glVertex2d(6.5,32.5);
           glVertex2d(5.5,32.5);
glPopMatrix();
       glEnd();

glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(5.5,30);
         glVertex2d(6.5,30);
          glVertex2d(6.5,30.5);
           glVertex2d(5.5,30.5);
glPopMatrix();
       glEnd();
       //letter A
       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(7,30);
         glVertex2d(7.5,30);
          glVertex2d(7.5,35);
           glVertex2d(7,35);
glPopMatrix();
       glEnd();

 glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(7.5,35);
         glVertex2d(9,35);
          glVertex2d(9,34.5);
           glVertex2d(7,34.5);
glPopMatrix();
       glEnd();

glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(7.5,33);
         glVertex2d(9,33);
          glVertex2d(9,32.5);
           glVertex2d(7,32.5);
glPopMatrix();
       glEnd();

glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(9,30);
         glVertex2d(9.5,30);
          glVertex2d(9.5,35);
           glVertex2d(9,35);
glPopMatrix();
       glEnd();
//letter R
glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(10,30);
         glVertex2d(10.5,30);
          glVertex2d(10.5,35);
           glVertex2d(10,35);
glPopMatrix();
       glEnd();

glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(10.5,35);
         glVertex2d(12.5,35);
          glVertex2d(12.5,34.5);
           glVertex2d(10.5,34.5);
glPopMatrix();
       glEnd();

glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(10.5,33);
         glVertex2d(12.5,33);
          glVertex2d(12.5,32.5);
           glVertex2d(10.5,32.5);
glPopMatrix();
       glEnd();

glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(12.5,32.5);
         glVertex2d(13,32.5);
          glVertex2d(13,35);
           glVertex2d(12.5,35);
glPopMatrix();
       glEnd();

       glBegin(GL_POLYGON);
 glPushMatrix();
       glColor3f(0.85,0.30,0.30);
        glVertex2d(13,30);
         glVertex2d(13.5,30);
          glVertex2d(10.10,32.5);
           glVertex2d(10,32.5);
glPopMatrix();
       glEnd();
	//mAIN POP


	glPushMatrix();


    glTranslatef(TX,TY,0);

    glPushMatrix();

    glPushMatrix();  // Draws The Head
	glColor3f(0.0, 0.0, 0.0);
	glTranslatef(tx,ty+2,0);
	circle(5.5,7.5);
	glPopMatrix();





	glPushMatrix(); // Draws The Body
	glColor3f(0.0, 0.0, 0.0);
	glTranslatef(tx,ty-20,0);
	circle(6,18);

	glPopMatrix();


	glPushMatrix(); // Draws The Right Hand
	        glRotatef(30, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx+0.5,ty-14.5,0);
	       circle(3,11);
            //glScaled(2, 1, 0);

	glPopMatrix();



	glPushMatrix(); // Draws The Left Hand
	        glRotatef(-30, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx-0.5,ty-15,0);
	       circle(3,11);
            //glScaled(2, 1, 0);

	glPopMatrix();

     glPushMatrix();  // Draws The upper Head1
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx-1.5,ty+2,0);
	circle(2.5,4.5);
	glPopMatrix();


   glPopMatrix();

     glPushMatrix();  // Draws The upper Head2
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx+1.9,ty+2,0);
	circle(2.5,4.5);
	glPopMatrix();


    glPushMatrix(); // Draws The middle Body
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx,ty-18,0);
	circle(5,17);

	glPopMatrix();

	glPushMatrix(); // Draws The Right Eye
          //glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx-2,ty+3,0);
	       circle(1,1);
            //glScaled(2, 1, 0);

	glPopMatrix();


	glPushMatrix(); // Draws The Left Eye
	       // glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx+2,ty+3,0);
	       circle(1,1);
            //glScaled(2, 1, 0);

	glPopMatrix();

	glPushMatrix(); // Draws The nose
         glTranslated(tx,ty-1,0);
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
           glTranslatef(tx+2.5,ty-39,0);
	       circle(1.5,2.5);
            //glScaled(2, 1, 0);

	glPopMatrix();

	glPushMatrix(); // Draws The left leg
          //glRotatef(-50, 0, 0, 1);
           glColor3f(0.9, 0.5, 0.0);
           glTranslatef(tx-2.5,ty-39,0);
	       circle(1.5,2.5);
            //glScaled(2, 1, 0);
    glPopMatrix();

    if(TX>10){
    TX=TX-0.02; // Right Side Penguine Movement Factor
}





    glPopMatrix();



    // MOdified Lines


       glPushMatrix();
    glTranslatef(TX_1,TY_1,0);

    glPushMatrix();

    glPushMatrix();  // Draws The Head
	glColor3f(0.0, 0.0, 0.0);
	glTranslatef(tx,ty+2,0);
	circle(5.5,7.5);
	glPopMatrix();





	glPushMatrix(); // Draws The Body
	glColor3f(0.0, 0.0, 0.0);
	glTranslatef(tx,ty-20,0);
	circle(6,18);

	glPopMatrix();


	glPushMatrix(); // Draws The Right Hand
	        glRotatef(30, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx+0.5,ty-14.5,0);
	       circle(3,11);
            //glScaled(2, 1, 0);

	glPopMatrix();



	glPushMatrix(); // Draws The Left Hand
	        glRotatef(-30, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx-0.5,ty-15,0);
	       circle(3,11);
            //glScaled(2, 1, 0);

	glPopMatrix();

     glPushMatrix();  // Draws The upper Head1
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx-1.5,ty+2,0);
	circle(2.5,4.5);
	glPopMatrix();


   glPopMatrix();

     glPushMatrix();  // Draws The upper Head2
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx+1.9,ty+2,0);
	circle(2.5,4.5);
	glPopMatrix();


    glPushMatrix(); // Draws The middle Body
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(tx,ty-18,0);
	circle(5,17);

	glPopMatrix();

	glPushMatrix(); // Draws The Right Eye
          //glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx-2,ty+3,0);
	       circle(1,1);
            //glScaled(2, 1, 0);

	glPopMatrix();


	glPushMatrix(); // Draws The Left Eye
	       // glRotatef(-50, 0, 0, 1);
           glColor3f(0.0, 0.0, 0.0);
           glTranslatef(tx+2,ty+3,0);
	       circle(1,1);
            //glScaled(2, 1, 0);

	glPopMatrix();

	glPushMatrix(); // Draws The nose
         glTranslated(tx,ty-1,0);
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
           glTranslatef(tx+2.5,ty-39,0);
	       circle(1.5,2.5);
            //glScaled(2, 1, 0);

	glPopMatrix();

	glPushMatrix(); // Draws The left leg
          //glRotatef(-50, 0, 0, 1);
           glColor3f(0.9, 0.5, 0.0);
           glTranslatef(tx-2.5,ty-39,0);
	       circle(1.5,2.5);
            //glScaled(2, 1, 0);
    glPopMatrix();


    if(TX_1<-10){ // Stopper to stop the penguine
    TX_1=TX_1+0.02; // Right Side Penguine Movement Factor
    }




    glPopMatrix();
   glPopMatrix();

	glFlush();
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
            if(TX!=10){
			display();
			glutIdleFunc(display);
			break;
            }





		case 's':
			 glutIdleFunc(NULL);
			 break;

	  default:
			break;
	}
}





int main(int argc, char **argv)
{

    PlaySound("song.wav", NULL, SND_FILENAME| SND_ASYNC);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (850, 700);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("Graphics Lab Project 011 151 062 & 011 151 079 Penguin Saying Happy New Year");
	init();
	glutDisplayFunc(display);
    glutKeyboardFunc(my_keyboard);


	glutMainLoop();




	return 0;   /* ANSI C requires main to return int. */
}


