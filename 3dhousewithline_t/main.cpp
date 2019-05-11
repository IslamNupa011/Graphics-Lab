/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

 #include <stdlib.h>
#include<Windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<math.h>

#include<stdio.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/GLAUX.h>

double a=0.0,b=0.0,c=5.0;
//double a=0.0,b=0.0,c=9.0;
//double a=10.0,b=0.0,c=9.0;
//double a=10.0,b=10.0,c=1.0;
GLfloat	l_t=0;

// Simple QUAD Draw

void quad()
{



 glBegin(GL_QUADS); // Front Roof of the house

    glColor3f(0.54f,0.26f,0.07f);
    glVertex3f(-0.5f,0.0f,2.5f);
    glColor3f(0.54f,0.26f,0.07f);
    glVertex3f(-0.8f,-0.7f,2.5f);

   glColor3f(0.54f,0.26f,0.07f);
    glVertex3f(0.8f,-0.7f,2.5f);


    glColor3f(0.54f,0.26f,0.07f);
    glVertex3f(0.5f,0.0f,2.5f);






    glEnd();




    glBegin(GL_QUADS); // Back Roof of the house

    glColor3f(0.54f,0.26f,0.07f);
    glVertex3f(-0.5f,0.0f,0.1f);
    glColor3f(0.54f,0.26f,0.07f);
    glVertex3f(-0.8f,-0.7f,0.1f);

   glColor3f(0.54f,0.26f,0.07f);
    glVertex3f(0.8f,-0.7f,0.1f);


    glColor3f(0.54f,0.26f,0.07f);
    glVertex3f(0.5f,0.0f,0.1f);






    glBegin(GL_QUADS); // Right_Side Roof of the house

    glColor3f(0.80f,0.51f,0.24f);
    glVertex3f(0.5f,0.0f,2.5f);
    glColor3f(0.80f,0.51f,0.24f);
    glVertex3f(0.5f,0.0f,0.1f);

   glColor3f(0.80f,0.51f,0.24f);
    glVertex3f(0.8f,-0.7f,0.1f);


    glColor3f(0.80f,0.51f,0.24f);
    glVertex3f(0.8f,-0.7f,2.5f);






    glEnd();


   glBegin(GL_QUADS); // Left_Side Roof of the house

    glColor3f(0.80f,0.51f,0.24f);
    glVertex3f(-0.5f,0.0f,2.5f);
    glColor3f(0.80f,0.51f,0.24f);
    glVertex3f(-0.5f,0.0f,0.1f);

   glColor3f(0.80f,0.51f,0.24f);
    glVertex3f(-0.8f,-0.7f,0.1f);


    glColor3f(0.80f,0.51f,0.24f);
    glVertex3f(-0.8f,-0.7f,2.5f);






    glEnd();



    glBegin(GL_QUADS); // Upper_Side Roof of the house

    glColor3f(0.54f,0.53f,0.53f);
    glVertex3f(-0.5f,0.0f,2.5f);
   glColor3f(0.54f,0.53f,0.53f);
    glVertex3f(-0.5f,0.0f,0.1f);

  glColor3f(0.54f,0.53f,0.53f);
    glVertex3f(0.5f,0.0f,0.1f);


   glColor3f(0.54f,0.53f,0.53f);
    glVertex3f(0.5f,0.0f,2.5f);






    glEnd();



    glBegin(GL_QUADS); // Front_side wall of the house

    glColor3f(0.99f,0.75f,0.14f);
    glVertex3f(-0.6f,-0.7f,2.5f);
   glColor3f(0.99f,0.75f,0.14f);
    glVertex3f(0.6f,-0.7f,2.5f);

   glColor3f(0.99f,0.75f,0.14f);
     glVertex3f(0.6f,-1.90f,2.5f);


    glColor3f(0.99f,0.75f,0.14f);
    glVertex3f(-0.6f,-1.90f,2.5f);





    glEnd();

     glBegin(GL_QUADS); // Back_side wall of the house

    glColor3f(0.99f,0.75f,0.14f);
    glVertex3f(-0.6f,-0.7f,0.1f);
   glColor3f(0.99f,0.75f,0.14f);
    glVertex3f(0.6f,-0.7f,0.1f);

   glColor3f(0.99f,0.75f,0.14f);
     glVertex3f(0.6f,-1.90f,0.1f);


    glColor3f(0.99f,0.75f,0.14f);
    glVertex3f(-0.6f,-1.90f,0.1f);





    glEnd();


    glBegin(GL_QUADS); // Right_side wall of the house

    glColor3f(0.99f,0.54f,0.47f);
    glVertex3f(0.6f,-0.7f,2.5f);
   glColor3f(0.99f,0.54f,0.47f);
    glVertex3f(0.6f,-0.7f,0.1f);

   glColor3f(0.99f,0.54f,0.47f);
     glVertex3f(0.6f,-1.90f,0.1f);


   glColor3f(0.99f,0.54f,0.47f);
    glVertex3f(0.6f,-1.90f,2.5f);





    glEnd();


    glBegin(GL_QUADS); // Left_side wall of the house

    glColor3f(0.99f,0.54f,0.47f);
    glVertex3f(-0.6f,-0.7f,2.5f);
   glColor3f(0.99f,0.54f,0.47f);
    glVertex3f(-0.6f,-0.7f,0.1f);

   glColor3f(0.99f,0.54f,0.47f);
     glVertex3f(-0.6f,-1.90f,0.1f);


   glColor3f(0.99f,0.54f,0.47f);
    glVertex3f(-0.6f,-1.90f,2.5f);





    glEnd();




 /*    glBegin(GL_QUADS); // Floor of the house

    glColor3f(0.99f,0.54f,0.47f);
    glVertex3f(0.6f,-1.90f,0.8f);
   glColor3f(0.99f,0.54f,0.47f);
    glVertex3f(0.6f,-1.90f,0.1f);

   glColor3f(0.99f,0.54f,0.47f);
     glVertex3f(-0.6f,-1.90f,0.1f);


   glColor3f(0.99f,0.54f,0.47f);
    glVertex3f(-0.6f,-1.90f,0.8f);





    glEnd();


*/


     glBegin(GL_QUADS); // Door of the house

    glColor3f(0.99f,0.54f,0.47f);
    glVertex3f(-0.2f,-1.90f,2.59f);
   glColor3f(0.99f,0.54f,0.47f);
    glVertex3f(0.2f,-1.90f,2.59f);

   glColor3f(0.99f,0.54f,0.47f);
     glVertex3f(0.2f,-1.00f,2.59f);


   glColor3f(0.99f,0.54f,0.47f);
    glVertex3f(-0.2f,-1.00f,2.59f);





    glEnd();


   glBegin(GL_QUADS); // Table Inside the house

    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(0.0f,-0.2f,1.0f);
   glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(0.3f,-0.2f,1.0f);

  glColor3f(0.0f,0.0f,0.0f);
     glVertex3f(0.3f,-0.2f,2.0f);


   glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(0.0f,-0.2f,2.0f);





    glEnd();



  glBegin(GL_LINES); // Table er paya

    glColor3f(1.0f,0.0f,0.0f);
    glVertex3f(0.0f,-0.2f,1.0f);
   glColor3f(1.0f,0.0f,0.0f);
    glVertex3f(0.0f,-0.5f,1.0f);







    glEnd();







}

void init(void)
{

   glClearColor (1, 1, 0, 0);
}

void display(void)
{

   glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT); // GL_COLOR_BUFFER_BIT indicates that the buffer is currently enabled for color writing, GL_DEPTH_BUFFER_BIT indicates that the buffer is currently enabled for depth buffer
   glMatrixMode(GL_PROJECTION);       // Specify which matrix is the current matrix mode
   glLoadIdentity();                  // Replace the current matrix with the identity matrix and essentially resets the matrix back to its default state
   int w=glutGet(GLUT_WINDOW_WIDTH);
   int h=glutGet(GLUT_WINDOW_HEIGHT);
   gluPerspective(40,w/h,0.1,100);    // fovy specifies the field of view angle in degrees in y direction, aspect specifies aspect ratio that determines the field of view in the x direction, znear and zfar specifies the distance from viewer to the near and far clipping plane respectively (always positive)
   glMatrixMode(GL_MODELVIEW);       //  To allow modeling and viewing transformation on 3D object

   glLoadIdentity();
   gluLookAt(                       //  eyex, eyey, eyez specify the position of the eye point, centerx, centery, centerz specify the position of reference point, upx, upy, upz specify the direction of up vector
               a,b,c,
               0,0,1,
               0,1,0
             );

   glPushMatrix();
   glRotatef(l_t,1.0f,0.0f,0.0f);


   quad();


    glPopMatrix();

   glutSwapBuffers();

}
void my_keyboard(unsigned char key, int p, int q)
{
switch (key) {
    case 'f':  //front view
        a=0.0,b=0.0,c=15.0;
        glutPostRedisplay();
		break;
    case 'b':  //back view
        a=0.0,b=0.0,c=-15.0;
        glutPostRedisplay();
		break;
    case 'l':  //left view
        a=-50.0,b=0.0,c=0.0;
        glutPostRedisplay();
		break;
    case 'r':  //right view
        a=50.0,b=0.0,c=0.0;
        glutPostRedisplay();
		break;
    case 't': //top view
        a=0.0,b=50.0,c=0.0001;
        glutPostRedisplay();
		break;
    case 'm': //bottom view
        a=0.0,b=-50.0,c=0.0001;
        glutPostRedisplay();
		break;
     default:
        break;
}
}

void spinDisplay_left(void)		//spin speed
{

    l_t =l_t-0.2;
    glutPostRedisplay();
}

void spinDisplay_right(void)		//spin speed
{

    l_t =l_t+0.2;
    glutPostRedisplay();
}

void specialKeys(int key,int x,int y)
{
    if(key==GLUT_KEY_RIGHT)
           a++;
    else if(key==GLUT_KEY_LEFT)
            a--;
    else if(key==GLUT_KEY_UP)
            c--;
   else if(key==GLUT_KEY_DOWN)
            c++;
    glutPostRedisplay();
}

void mouse(int button, int state, int s, int t)
{

   switch (button)
   {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_left);
         break;
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_right);
          break;
      case GLUT_MIDDLE_BUTTON:
          if (state == GLUT_DOWN)
            glutIdleFunc(NULL);
         break;
      default:
         break;
   }
}

int main()
{
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize (800, 800);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("3D House Making");
	init();
	glEnable(GL_DEPTH_TEST);
    glutSpecialFunc(specialKeys);
    glutDisplayFunc(display);
    glutKeyboardFunc(my_keyboard);
    glutMouseFunc(mouse);
	glutMainLoop();
	return 0;
}

