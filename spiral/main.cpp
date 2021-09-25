#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float theta;
float spin;

//second scene
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //glLoadIdentity();

    //50% white circle(big)
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i>-180; i--)
    {
        theta=i*3.142/180;
        glVertex2f(0+400*sin(theta),0+400*cos(theta));
    }
    glEnd();

    //50% black circle(big)
    glColor3f(1.0,1.0,1.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<182; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+400*sin(theta),0+400*cos(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i>-180; i--)
    {
        theta=i*3.142/180;
        glVertex2f(0+380*sin(theta),20+380*cos(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<183; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+360*sin(theta),0+360*cos(theta));
    }
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i>-180; i--)
    {
        theta=i*3.142/180;
        glVertex2f(0+340*sin(theta),20+340*cos(theta));
    }
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<183; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+320*sin(theta),0+320*cos(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i>-180; i--)
    {
        theta=i*3.142/180;
        glVertex2f(0+300*sin(theta),20+300*cos(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<183; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+280*sin(theta),0+280*cos(theta));
    }
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i>-180; i--)
    {
        theta=i*3.142/180;
        glVertex2f(0+260*sin(theta),20+260*cos(theta));
    }
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<183; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+240*sin(theta),0+240*cos(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i>-180; i--)
    {
        theta=i*3.142/180;
        glVertex2f(0+220*sin(theta),20+220*cos(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<183; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+200*sin(theta),0+200*cos(theta));
    }
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i>-180; i--)
    {
        theta=i*3.142/180;
        glVertex2f(0+180*sin(theta),20+180*cos(theta));
    }
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<183; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+160*sin(theta),0+160*cos(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i>-180; i--)
    {
        theta=i*3.142/180;
        glVertex2f(0+140*sin(theta),20+140*cos(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<183; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+120*sin(theta),0+120*cos(theta));
    }
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i>-180; i--)
    {
        theta=i*3.142/180;
        glVertex2f(0+100*sin(theta),20+100*cos(theta));
    }
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<183; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+80*sin(theta),0+80*cos(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i>-180; i--)
    {
        theta=i*3.142/180;
        glVertex2f(0+60*sin(theta),20+60*cos(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<183; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+40*sin(theta),0+40*cos(theta));
    }
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i>-180; i--)
    {
        theta=i*3.142/180;
        glVertex2f(0+20*sin(theta),20+20*cos(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<183; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+20*sin(theta),20+20*cos(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i>-180; i--)
    {
        theta=i*3.142/180;
        glVertex2f(0+20*sin(theta),10+20*cos(theta));
    }
    glEnd();

    glFlush();
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
    spin = 0.3;
    glutPostRedisplay();
    glRotatef(spin, 0.0, 0.0, 1.0);
}

//spin right
void spinRight(void)
{
    spin = 0.3;
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
    case 32:                             //start
        glutDisplayFunc(display);
        glutPostRedisplay();
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
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(400,150);
    glutInitWindowSize(500,500);
    glutCreateWindow("Yin and Yang");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();

    glutKeyboardFunc(keyAction);
    glutMouseFunc(mouseAction);

    glutMainLoop();
}

