#include<windows.h>
#include<GL/glut.h>


float angle=0;
float x=0;
float count=1;
int state=0;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glTranslatef(0.0,x,-10.0);
    glRotatef(55,-1.0,0.0,1.0);
    glRotatef(angle,1.0,1.0,1.0);

    glBegin(GL_QUADS);

    //front
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-1.0,-1.0,1.0);
    glVertex3f(1.0,-1.0,1.0);
    glVertex3f(1.0,1.0,1.0);
    glVertex3f(-1.0,1.0,1.0);

    //right
    glColor3f(0.0,1.0,0.0);
    glVertex3f(1.0,-1.0,1.0);
    glVertex3f(1.0,-1.0,-1.0);
    glVertex3f(1.0,1.0,-1.0);
    glVertex3f(1.0,1.0,1.0);

    //left
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-1.0,-1.0,1.0);
    glVertex3f(-1.0,-1.0,-1.0);
    glVertex3f(-1.0,1.0,-1.0);
    glVertex3f(-1.0,1.0,1.0);

    //bottom
    glColor3f(1.0,1.0,0.0);
    glVertex3f(-1.0,-1.0,1.0);
    glVertex3f(-1.0,-1.0,-1.0);
    glVertex3f(1.0,-1.0,-1.0);
    glVertex3f(1.0,-1.0,1.0);


    //top
    glColor3f(1.0,0.0,1.0);
    glVertex3f(-1.0,1.0,1.0);
    glVertex3f(-1.0,1.0,-1.0);
    glVertex3f(1.0,1.0,-1.0);
    glVertex3f(1.0,1.0,1.0);

    //back
    glColor3f(0.0,1.0,1.0);
    glVertex3f(-1.0,-1.0,-1.0);
    glVertex3f(1.0,-1.0,-1.0);
    glVertex3f(1.0,1.0,-1.0);
    glVertex3f(-1.0,1.0,-1.0);

    glEnd();

    glFlush();
}

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);

    angle+=1;
    if(angle>360)
        angle-=360;

    switch(state)
    {
    case 0:
        if(x<0.5)
            x+=0.015;
        else
            state=1;
    break;
    case 1:
        if(x>0)
            x-=0.015;
        else
            state=0;
    break;
    }
}

void init()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glEnable(GL_DEPTH_TEST);
}

void reshape(int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60,1,2.0,50.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Animation");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,timer,0);
    init();

    glutMainLoop();
}

