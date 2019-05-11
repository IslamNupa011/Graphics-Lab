//#include<bits/stdc++.h>
#include<windows.h>
#include<GL/glut.h>
#include<stdio.h>
#include <math.h>

//#ifdef __APPLE__
//#include <GLUT/glut.h>
//#else
//#include <GL/glut.h>
//#endif





void display(){

     float cx=1.37;
    float cx1=0.60;
    float cy=0.30;
    float r=0.1;
    int num_segments=10000;
 glClearColor(0.0f,0.0f,0.0f,0.0f);
glClear(GL_COLOR_BUFFER_BIT);


    glColor3f(0.0f,1.0f,0.0f);
    glBegin(GL_POLYGON);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = r * cos(theta);//calculate the x component
		float y = r * sin(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();


    glColor3f(0.0f,1.0f,0.0f);
	glBegin(GL_POLYGON);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = r * cos(theta);//calculate the x component
		float y = r * sin(theta);//calculate the y component

		glVertex2f(x + cx1, y + cy);//output vertex

	}
	glEnd();





    //glClearColor(0.0f,0.0f,0.0f,0.0f);
    glOrtho(-5,5,-5,5,-5,5);
   // glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_QUADS);

        glVertex2f(2.0f,4.0f);


         glVertex2f(2.0f,2.0f);


          glVertex2f(8.0,2.0);


           glVertex2f(8.0,4.0);


    glEnd();

    glColor3f(0.0f,0.0f,1.0f);
    glBegin(GL_QUADS);

        glVertex2f(4.0f,6.0f);


         glVertex2f(3.0f,4.0f);


          glVertex2f(7.0,4.0);


           glVertex2f(6.0,6.0);


    glEnd();


    glBegin(GL_LINES);
// draw line for x axis
    glColor3f(0.0, 1.0, 0.0);

    glVertex2f(0.0, 0.0);
    glVertex2f(30.0, 0.0);


    glVertex2f(0.0, 0.0);
    glVertex2f(-30.0, 0.0);



    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, 30.0);


    glVertex2f(0.0, 0.0);
    glVertex2f(0.0, -30.0);



glEnd();

    glFlush();


}
int main(){

   glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
   glutCreateWindow("Nupa");
   glutInitWindowSize(600,600);
   glutInitWindowPosition(100,100);
   glutDisplayFunc(display);
   glutMainLoop();



  return 0;
}
