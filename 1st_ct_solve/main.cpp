

#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


void init(){
     glClearColor(1.0f,1.0f,1.0f,0.0f);
     glOrtho(-11,11,-11,11,-11,11);

}

void myDisplay(){



    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);



       glColor3f(0.30f,0.50f,0.08f);
       glVertex2d(8.0d,0.0d);

       glColor3f(0.430f,0.750f,0.08f);
       glVertex2d(-8.0d,0.0d);

   glColor3f(0.30f,0.50f,0.0638f);
       glVertex2d(-6.0d,-3.0d);


       glColor3f(1.0f,0.0f,1.0f);
       glVertex2d(6.0d,-3.0d);

    glEnd();


    glBegin(GL_QUADS);

       glColor3f(0.934f,0.06978f,0.098f);
       glVertex2d(0.4,9.0);

       glColor3f(0.30f,0.753230f,0.08f);
       glVertex2d(-0.4,9.0);

       glColor3f(0.36740f,0.530f,0.08f);
       glVertex2d(-0.4,0.0);


       glColor3f(0.30f,0.5068f,0.08f);
       glVertex2d(0.4,0.0);

    glEnd();



    glBegin(GL_TRIANGLES);
       glColor3f(0.934f,0.06978f,0.098f);
       glVertex2d(-0.4,9.0);

       glColor3f(0.30f,0.753230f,0.08f);
       glVertex2d(-5.0,3.0);

       glColor3f(0.36740f,0.530f,0.08f);
       glVertex2d(-0.4,3.0);
    glEnd();



    glBegin(GL_TRIANGLES);
        glColor3f(0.934f,0.06978f,0.098f);
       glVertex2d(0.4,9.0);

       glColor3f(0.30f,0.753230f,0.08f);
       glVertex2d(0.4,3.0);

       glColor3f(0.36740f,0.530f,0.08f);
       glVertex2d(5.0,3.0);

    glEnd();

    glFlush();

}

int main(){

    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(900,900);
    glutInitWindowPosition(10,0);
    glutCreateWindow("Student 011151062_nopa");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}

