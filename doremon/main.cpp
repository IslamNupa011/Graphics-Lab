#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>


void cir()
{
    glPushMatrix();

glScalef(1.0,1.5,0);
 glutSolidSphere(1.5,15,4);


    glPopMatrix();
    glEnd();
}


//leg....................

void cirl()
{
    glPushMatrix();

glScalef(1.0,1.5,0);
 glutSolidSphere(5.0,40,4);


    glPopMatrix();
    glEnd();
}


void cirin()
{
    glPushMatrix();

glScalef(1.0,1.7,0);
 glutSolidSphere(5.0,40,4);


    glPopMatrix();
    glEnd();
}

//eye..............................
void cire()
{
    glPushMatrix();

glScalef(1.0,1.7,0);
 glutSolidSphere(2.5,15,4);


    glPopMatrix();
    glEnd();
}

void cirem()
{
    glPushMatrix();

glScalef(1.0,1.7,0);
 glutSolidSphere(1.5,10,4);


    glPopMatrix();
    glEnd();
}




//face

void circle()
{
    glPushMatrix();

glScalef(1.5,2.5,0);
 glutSolidSphere(9.5,80,5);


    glPopMatrix();
    glEnd();
}

void circl()
{
    glPushMatrix();

glScalef(1.5,2.3,0);
 glutSolidSphere(7.5,70,5);


    glPopMatrix();
    glEnd();
}

void circ()
{
    glPushMatrix();

glScalef(1.3,1.7,0);
 glutSolidSphere(5.5,70,5);


    glPopMatrix();
    glEnd();
}




 void display(void)
 {

    glClear(GL_COLOR_BUFFER_BIT);


  glPushMatrix();

    glTranslated(-5,8,0);
    glColor3f(0.0f,1.0f,1.0f);
    circle();

    glPopMatrix();


    glPushMatrix();

    glTranslated(-5,6,0);
    glColor3f(1.0f,1.0f,1.0f);
    circl();

    glPopMatrix();


    glPushMatrix();

    glTranslated(-5,1,0);
    glColor3f(1.0f,0.0f,0.0f);
    circ();

    glPopMatrix();
//heart.........................
     glPushMatrix();

    glTranslated(-6,-4,0);
    glColor3f(1.0f,1.0f,0.0f);
    cire();

    glPopMatrix();


     glPushMatrix();

    glTranslated(-3.5,-4,0);
    glColor3f(1.0f,1.0f,0.0f);
    cire();

    glPopMatrix();


    //eye...............................

    glPushMatrix();

    glTranslated(-8,22,0);
    glColor3f(1.0f,1.0f,1.0f);
    cire();

    glPopMatrix();


     glPushMatrix();

    glTranslated(-8,22,0);
    glColor3f(0.0f,0.0f,0.0f);
    cirem();

    glPopMatrix();


     glPushMatrix();

    glTranslated(-3,22,0);
    glColor3f(1.0f,1.0f,1.0f);
    cire();

    glPopMatrix();

     glPushMatrix();

    glTranslated(-3,22,0);
    glColor3f(0.0f,0.0f,0.0f);
    cirem();

    glPopMatrix();
///////////////////

    glPushMatrix();

    glTranslated(-5.5,17,0);
    glColor3f(1.0f,0.0f,0.0f);
    cir();

    glPopMatrix();

    glBegin(GL_LINES);
  glColor3f(0.0f, 0.0f, 0.0f);

           glVertex2d(-1.0,17.5);
          glVertex2d(4.0,18.5);


           glVertex2d(-1.0,15.5);
          glVertex2d(4.0,14.5);


           glVertex2d(-1.0,13.5);
          glVertex2d(4.0,11.5);

          glVertex2d(-10.0,17.5);
          glVertex2d(-14.0,17.5);

         glVertex2d(-10.0,15.5);
          glVertex2d(-14.0,14.5);


          glVertex2d(-10.0,12.5);
          glVertex2d(-14.0,11.5);

 glEnd();

glBegin(GL_POLYGON);
  glColor3f(1.0f, 0.0f, 0.0f);

           glVertex2d(1.0,-9.5);


          glVertex2d(-11.0,-9.5);
         glVertex2d(-11.0,-14.0);
          glVertex2d(1.0,-14.0);



 glEnd();
//////leg........................
glPushMatrix();

    glTranslated(-9,-40,0);
    glColor3f(0.0f,1.0f,1.0f);
    cirl();

    glPopMatrix();



    glPushMatrix();

    glTranslated(1,-40,0);
    glColor3f(0.0f,1.0f,1.0f);
    cirl();

    glPopMatrix();



//body......................
 glBegin(GL_POLYGON);
  glColor3f(0.0f, 1.0f, 1.0f);

           glVertex2d(1.0,-14.0);


          glVertex2d(-11.0,-14.0);
         glVertex2d(-11.0,-40.0);
          glVertex2d(1.0,-40.0);



 glEnd();


    glPushMatrix();

    glTranslated(-5,-22,0);
    glColor3f(0.0f,0.0f,1.0f);
    cirin();

    glPopMatrix();


      glPushMatrix();

    glTranslated(-5,-18,0);
    glColor3f(1.0f,1.0f,0.0f);
    cire();

    glPopMatrix();

 //hand.........................

 glBegin(GL_POLYGON);
  glColor3f(0.0f, 1.0f, 1.0f);

           glVertex2d(-11.0,-9.5);


          glVertex2d(-18.0,-14.0);
         glVertex2d(-16.0,-16.0);
          glVertex2d(-11.0,-16.5);



 glEnd();

 glBegin(GL_POLYGON);
  glColor3f(0.0f, 1.0f, 1.0f);

           glVertex2d(1.0,-8.5);


          glVertex2d(10.0,-8.0);
         glVertex2d(10.0,-10.0);
          glVertex2d(1.0,-19.5);



 glEnd();




     glPushMatrix();

    glTranslated(10,-9,0);
    glColor3f(0.0f,1.0f,1.0f);
    cire();

    glPopMatrix();


     glPushMatrix();

    glTranslated(-16,-16,0);
    glColor3f(0.0f,1.0f,1.0f);
    cire();

    glPopMatrix();




glFlush();


}





void base(void)
{
 	glClearColor (1.0, 1.0, 1.0, 0.0);
	glOrtho(-30.0, 30.0, -60.0, 30.0, -1.0, 1.0);
}






int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (800, 400);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("Sample");
	base();
	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}
