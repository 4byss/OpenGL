#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float theta;
float spin;

//front scene
void welcomeDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(1.0,0.9,0.5);
    glRasterPos3f(-110,400,0);
    char msg1[] = "ROTATION";
    for(int i=0; i<strlen(msg1); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg1[i]);

    glColor3f(1.0,0.9,0.5);
    glRasterPos3f(-160,300,0);
    char msg2[] = "USN: 1KS17CS012";
    for(int i=0; i<strlen(msg2); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg2[i]);

    glColor3f(1.0,0.9,0.5);
    glRasterPos3f(-200,250,0);
    char msg3[] = "NAME: ARITRA RAY";
    for(int i=0; i<strlen(msg3); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg3[i]);

    glColor3f(1.0,0.9,0.5);
    glRasterPos3f(-150,100,0);
    char msg4[] = "INSTRUCTIONS";
    for(int i=0; i<strlen(msg4); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg4[i]);

    glColor3f(1.0,0.9,0.5);
    glRasterPos3f(-300,0,0);
    char msg5[] = "Press 'w': bgcolor change to WHITE";
    for(int i=0; i<strlen(msg5); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg5[i]);

    glColor3f(1.0,0.9,0.5);
    glRasterPos3f(-300,-50,0);
    char msg6[] = "Press 'b': bgcolor change to BLACK";
    for(int i=0; i<strlen(msg6); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg6[i]);

    glColor3f(1.0,0.9,0.5);
    glRasterPos3f(-300,-100,0);
    char msg7[] = "Press 'R': bgcolor change to RED";
    for(int i=0; i<strlen(msg7); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg7[i]);

    glColor3f(1.0,0.9,0.5);
    glRasterPos3f(-300,-150,0);
    char msg8[] = "Press 'G': bgcolor change to GREEN";
    for(int i=0; i<strlen(msg8); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg8[i]);

    glColor3f(1.0,0.9,0.5);
    glRasterPos3f(-300,-200,0);
    char msg9[] = "Press 'B': bgcolor change to BLUE";
    for(int i=0; i<strlen(msg9); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg9[i]);

    glColor3f(1.0,0.9,0.5);
    glRasterPos3f(-300,-250,0);
    char msg10[] = "Press '0': to stop";
    for(int i=0; i<strlen(msg10); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg10[i]);

    glColor3f(1.0,0.9,0.5);
    glRasterPos3f(-300,-300,0);
    char msg11[] = "Press 'mouse_left': rotate left";
    for(int i=0; i<strlen(msg11); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg11[i]);

    glColor3f(1.0,0.9,0.5);
    glRasterPos3f(-300,-350,0);
    char msg12[] = "Press 'mouse_right': rotate right";
    for(int i=0; i<strlen(msg12); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg12[i]);

    glColor3f(1.0,0.9,0.5);
    glRasterPos3f(-300,-400,0);
    char msg13[] = "Press 'ESC' to exit";
    for(int i=0; i<strlen(msg13); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg13[i]);

    glColor3f(1.0,0.9,0.5);
    glRasterPos3f(-150,-470,0);
    char msg14[] = "Press 'SPACE' to start";
    for(int i=0; i<strlen(msg14); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg14[i]);

    glutPostRedisplay();
    glutSwapBuffers();
}

//second scene
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //white circle(small)
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+60*sin(theta),-200+60*cos(theta));
    }
    glEnd();

    //black circle(medium)
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+200*sin(theta),-200+200*cos(theta));
    }
    glEnd();

    //white circle(small)
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+60*sin(theta),200+60*cos(theta));
    }
    glEnd();

    //white circle(medium)
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+200*sin(theta),200+200*cos(theta));
    }
    glEnd();

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
    glColor3f(0.0,0.0,0.0);
    glTranslatef(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<180; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+400*sin(theta),0+400*cos(theta));
    }
    glEnd();

    glutSwapBuffers();
}

void init()
{
    //background color
    glClearColor(1.0,0.0,0.0,1.0);
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
    case 'w':                                   //white
        glutPostRedisplay();
        glClearColor(1.0,1.0,1.0,0.0);
        break;
    case 'b':                                  //black
        glutPostRedisplay();
        glClearColor(0.0,0.0,0.0,0.0);
        break;
    case 'R':                                 //red
        glutPostRedisplay();
        glClearColor(1.0,0.0,0.0,0.0);
        break;
    case 'G':                                //green
        glutPostRedisplay();
        glClearColor(0.0,1.0,0.0,0.0);
        break;
    case 'B':                               //blue
        glutPostRedisplay();
        glClearColor(0.0,0.0,1.0,0.0);
        break;
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
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowPosition(400,150);
    glutInitWindowSize(500,500);
    glutCreateWindow("Yin and Yang");
    glutDisplayFunc(welcomeDisplay);
    glutReshapeFunc(reshape);
    init();

    glutKeyboardFunc(keyAction);
    glutMouseFunc(mouseAction);

    glEnable(GL_DEPTH_TEST);

    glutMainLoop();
}
