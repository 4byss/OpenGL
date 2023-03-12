#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>

/*float cx = 0.0;
float cy = 0.0;
float cz = 0.0;*/
GLfloat spin = 0.0;
//float tx = 0.0;
//float ty = 0.0;
float s = 0.0;
float m = 0.0;
float h = 0.0;
int scount = 1;
int mcount = 1;
int hcount = 1;

void timer(int);

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //frame

    glPushMatrix();

	//glRotatef(spin, 0.0, 0.0, 1.0);

	glTranslatef(0,0,0);
	glColor3f(0.0,0.0,0.0);

	glRectf(-300.0, -300.0, 300.0, 300.0);
	glPopMatrix();

    //glTranslatef(0.0,0.0,0.0);
    //glRotatef(0.0,0.0,0.0,1.0);

    /*glBegin(GL_LINES);

    glVertex2d(-300,-300);
    glVertex2d(300,-300);

    glVertex2d(300,300);
    glVertex2d(-300,300);

    glVertex2d(300,-300);
    glVertex2d(300,300);

    glVertex2d(-300,-300);
    glVertex2d(-300,300);

    glEnd();*/

    glColor3f(1.0,1.0,1.0);

    //clock body
    glBegin(GL_LINES);

    glVertex2d(0,200);
    glVertex2d(0,280);

    glVertex2d(200,0);
    glVertex2d(280,0);

    glVertex2d(0,-200);
    glVertex2d(0,-280);

    glVertex2d(-200,0);
    glVertex2d(-280,0);

    glEnd();

    glColor3f(1.0,1.0,1.0);

    //clock hands
    glTranslatef(0.0,0.0,0.0);
    glRotatef(h,0.0,0.0,-1.0);


    //hours hand
    glBegin(GL_LINES);

    glVertex2d(0,0);
    glVertex2d(110,0);

    glEnd();

    glTranslatef(0.0,0.0,0.0);
    glRotatef(m,0.0,0.0,-1.0);

    //minutes hand
    glBegin(GL_LINES);

    glVertex2d(0,0);
    glVertex2d(0,150);

    glEnd();

    glTranslatef(0.0,0.0,0.0);
    glRotatef(s,0.0,0.0,-1.0);

    //seconds hand
    glBegin(GL_LINES);

    glColor3f(1.0,0.0,0.0);
    glVertex2d(0,0);
    glVertex2d(0,180);

    glEnd();

    glutSwapBuffers();
}

void spinLeft(void)
{
    spin = 5.0;
    glutPostRedisplay();
    glRotatef(spin,0.0,0.0,1.0);
}

void spinRight(void)
{
    spin = 5.0;
    glutPostRedisplay();
    glRotatef(spin,0.0,0.0,-1.0);
}

/*void colorChange(void)
{
    glutPostRedisplay();
    glColor3f(cx,cy,cz);
}*/

void keyAction(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'a':
        spinLeft();
        break;
    case 'd':
        spinRight();
        break;
    default:
        break;
    }
}

void init()
{
    glClearColor(1.0,0.0,0.5,1.0);
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

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Animation");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,timer,0);
    init();

    glutKeyboardFunc(keyAction);

    glutMainLoop();
    return 0;
}

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/1,timer,0);


    if(s<scount)
    {
        s+=6;
        if(s==360*mcount)
        {
            m+=6;
            if(m==360*hcount)
            {
                h+=6;
                hcount++;
            }
            mcount++;
        }
    }
    scount+=6;
}
