#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float theta;
float spin;

//display scene
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //lines
    glBegin(GL_LINES);

    glColor3f(1.0,1.0,1.0);
    glVertex2f(-283,-283);
    glVertex2f(283,283);

    glEnd();

    glBegin(GL_LINES);

    glColor3f(1.0,1.0,1.0);
    glVertex2f(-283,283);
    glVertex2f(283,-283);

    glEnd();

    glBegin(GL_LINES);

    glColor3f(1.0,1.0,1.0);
    glVertex2f(0,-400);
    glVertex2f(0,400);

    glEnd();

    glBegin(GL_LINES);

    glColor3f(1.0,1.0,1.0);
    glVertex2f(-400,0);
    glVertex2f(400,0);

    glEnd();

    //small red circle
    glColor3f(0.8,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    //glRotatef(45,0.0,0.0,-1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(80-40*cos(theta),250+40*sin(theta));
    }
    glEnd();

    glColor3f(0.8,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    //glRotatef(45,0.0,0.0,-1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(20-40*cos(theta),50+40*sin(theta));
    }
    glEnd();

    glColor3f(0.8,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    //glRotatef(45,0.0,0.0,-1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(100-40*cos(theta),20+40*sin(theta));
    }
    glEnd();

    glColor3f(0.8,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    //glRotatef(45,0.0,0.0,-1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-150-40*cos(theta),20+40*sin(theta));
    }
    glEnd();

    glColor3f(0.8,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    //glRotatef(45,0.0,0.0,-1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(100-40*cos(theta),-90+40*sin(theta));
    }
    glEnd();

    glColor3f(0.8,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    //glRotatef(45,0.0,0.0,-1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-100-40*cos(theta),-20+40*sin(theta));
    }
    glEnd();

    glColor3f(0.8,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    //glRotatef(45,0.0,0.0,-1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(150-40*cos(theta),-150+40*sin(theta));
    }
    glEnd();

    glColor3f(0.8,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    //glRotatef(45,0.0,0.0,-1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-200-40*cos(theta),-150+40*sin(theta));
    }
    glEnd();

    glColor3f(0.8,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    //glRotatef(45,0.0,0.0,-1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-200-40*cos(theta),150+40*sin(theta));
    }
    glEnd();

    glColor3f(0.8,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    //glRotatef(45,0.0,0.0,-1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(300-40*cos(theta),0+40*sin(theta));
    }
    glEnd();

    glColor3f(0.8,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    //glRotatef(45,0.0,0.0,-1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0-40*cos(theta),-200+40*sin(theta));
    }
    glEnd();

    //big circle
    glColor3f(1.0,1.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    //glRotatef(45,0.0,0.0,-1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i>-360; i--)
    {
        theta=i*3.142/180;
        glVertex2f(0-350*cos(theta),0+350*sin(theta));
    }
    glEnd();

    //50% black circle(big)
    glColor3f(1.0,0.7,0.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0-400*sin(theta),0+400*cos(theta));
    }
    glEnd();

    glutSwapBuffers();
}

void init()
{
    //background color
    glClearColor(0.0,0.0,0.0,1.0);
}

void reshape(int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D((float) -w, w, -h, h);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

//spin left
void spinLeft(void)
{
    spin = 0.2;
    glutPostRedisplay();
    glRotatef(spin, 0.0, 0.0, 1.0);
}

//spin right
void spinRight(void)
{
    spin = 0.2;
    glutPostRedisplay();
    glRotatef(spin, 0.0, 0.0, -1.0);
}

//keyboard input
void keyAction(unsigned char key, int x, int y)
{

    switch (key)
    {
    case '0':                              //stop
        glutIdleFunc(NULL);
        break;
    case 27:                             //start
        exit(0);
        break;
    default:
        break;
    }
}

//mouse input
void mouseAction(int button, int state, int x, int y)
{
    switch (button)
    {
    case GLUT_LEFT_BUTTON:                  //r-left
        if(state==GLUT_DOWN)
            //spinLeft();
            glutIdleFunc(spinLeft);
        break;
    case GLUT_RIGHT_BUTTON:                //r-right
        if(state==GLUT_DOWN)
            //spinRight();
            glutIdleFunc(spinRight);
        break;
    default:
        break;
    }
}

int main(int argc,char ** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowPosition(400,150);
    glutInitWindowSize(500,500);
    glutCreateWindow("Pizza");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();

    glutKeyboardFunc(keyAction);
    glutMouseFunc(mouseAction);

    glEnable(GL_DEPTH_TEST);

    glutMainLoop();
}
