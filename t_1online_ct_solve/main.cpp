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

#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>



void display(){
    float cx=0.6;
    float cx1=0.8;
    float cy=0.35;
    float r=0.05;
    int num_segments=10000;
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_POLYGON);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = r * cos(theta);//calculate the x component
		float y = r * sin(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();



	glBegin(GL_POLYGON);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = r * cos(theta);//calculate the x component
		float y = r * sin(theta);//calculate the y component

		glVertex2f(x + cx1, y + cy);//output vertex

	}
	glEnd();






     glBegin(GL_QUADS);


     glColor3f(1.0f,0.0f,0.0f);

    glVertex2f(0.5f,0.5f);
    glVertex2f(0.90f,0.5f);

     glVertex2f(0.90f,0.4f);
    glVertex2f(0.5f,0.4f);


     glEnd();


      glBegin(GL_POLYGON);


     glColor3f(0.0f,0.0f,1.0f);




     glVertex2f(0.56f,0.5f);
    glVertex2f(0.84f,0.5f);

    glVertex2f(0.8f,0.6f);
    glVertex2f(0.6f,0.6f);






     glEnd();



    /*glBegin(GL_LINES);
// draw line for x axis
    glColor3f(0.0, 1.0, 0.0);

    glVertex2f(0.0, 0.0);
    glVertex2f(1.0, 0.0);


    glVertex2f(0.0, 0.0);
    glVertex2f(-1.0, 0.0);



    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 1.0);


    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, -1.0);



glEnd();*/




    glFlush();

}

int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutCreateWindow("Test Window");
    glutInitWindowSize(350,350);
    glutInitWindowPosition(50,50);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

