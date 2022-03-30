

#include<windows.h>
#include<GL/glut.h>
void flag()

{
    //First Quards

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(255,140,0);
    glBegin(GL_QUADS);
    glVertex2d(30.0,15.0);
    glVertex2d(30.0,5.0);
    glVertex2d(-30.0,5.0);
    glVertex2d(-30.0,15.0);
    glEnd();
    glFlush();

    //2Nd Quards

    glColor3f(255,255,255);
    glBegin(GL_QUADS);
    glVertex2d(30.0,5.0);
    glVertex2d(30.0,-5.0);
    glVertex2d(-30.0,-5.0);
    glVertex2d(-30.0,5.0);
    glEnd();
    glFlush();

    //3rd Quards

    glColor3f(0,100,0);
    glBegin(GL_QUADS);
    glVertex2d(30.0,-5.0);
    glVertex2d(30.0,-15.0);
    glVertex2d(-30.0,-15.0);
    glVertex2d(-30.0,-5.0);
    glEnd();
    glFlush();

    //Circle Point

    glPushMatrix();
    glColor3f(255,140,0);
    glScalef(1.9,1.5,2.0);
    glutSolidSphere(3,50.5,15);
    glPopMatrix();
    glEnd();
    glFlush();

}

void Initialize()
{
    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();
    glClearColor(0.96,0.87,0.70,0);
    glOrtho(-40,40,-20,20,-20,20);
}

int main(int argc, char** argv)
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1120,720);
    glutInitWindowPosition(50,50);
    glutCreateWindow("Raju");

    Initialize();
    glutDisplayFunc(flag);
    glutMainLoop();
    return 0;
}
