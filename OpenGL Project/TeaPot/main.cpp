#include<windows.h>
#include<GL/glut.h>

void teapot()
{
    glPushMatrix();
    glTranslatef(0.0,7.5,0.0);
    glColor3f(0.7,0.7,0.7);
    glutSolidTeapot(1.5);
    glPopMatrix();
}

void light()
{
    GLfloat qaAmbientLight[] = {0.1,0.1,0.1,1.0};
    GLfloat qaDiffusLight[] = {0.9,0.9,0.9,1.0};
    GLfloat qaSpecularLight[] = {0.7,0.7,0.7,1.0};

    GLfloat qaLightPosition[] = {0.0,0.0,0.0,1.0};

    GLfloat qaWhite[] = {1.0,1.0,1.0,1.0};
    GLfloat qaGray[] = {0.7,0.7,0.7,1.0};

    //glTranslatef(-25.0,12.0,32.0);
    glTranslatef(0.0,45.0,0.0);

    glPushMatrix();
    //glScalef(1.0,1.0,1.0);
    glutSolidSphere(0,100,100);

    glLightfv(GL_LIGHT0, GL_AMBIENT, qaAmbientLight);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, qaDiffusLight);
    glLightfv(GL_LIGHT0, GL_SPECULAR, qaSpecularLight);

    glLightfv(GL_LIGHT0, GL_POSITION, qaLightPosition);

    glMaterialfv(GL_FRONT, GL_AMBIENT, qaGray);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, qaGray);
    glMaterialfv(GL_FRONT, GL_SPECULAR, qaGray);
    glMaterialf(GL_FRONT, GL_SHININESS, 60.0);
    glPopMatrix();
}

void tableLeg(float thick, float len)
{
    glPushMatrix();
    glTranslatef(0.0,len/2,0.0);
    glScalef(thick,len,thick);
    glutSolidCube(10);
    glPopMatrix();
}

void table(float tabWidth, float tabThick, float legLen, float legThick)
{
    //top
    glPushMatrix();
    glTranslatef (0, legLen*5.5, 0);
    glScalef(tabWidth,tabThick,tabWidth);
    glutSolidCube(10);
    glPopMatrix();
    double dist = 8 * tabWidth/2.0 - legThick/2.0;
    //legs
    glPushMatrix();
    glTranslated (dist, 0, dist);
    tableLeg (legThick, legLen);
    glTranslated (0.0, 0.0, -2 * dist);
    tableLeg (legThick, legLen);
    glTranslated (-2*dist, 0, 2 *dist);
    tableLeg (legThick, legLen);
    glTranslated(0, 0, -2*dist);
    tableLeg (legThick, legLen);
    glPopMatrix();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //glLoadIdentity();

    //teapot
    glPushMatrix();
    glTranslatef(-3.0,0.0,-30.0);
    teapot();
    glPopMatrix();
    //table
    glPushMatrix();
    glTranslatef(0.0,0.0,-50.0);
    glRotated (30, 0, 1, 0);
    table(4,0.05,1,0.05);
    glPopMatrix();
    //light
    glPushMatrix();
    light();
    glPopMatrix();

    //glutPostRedisplay();
    glFlush();
}

void init()
{
    glClearColor(0.1,0.1,0.1,1.0);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
}

void reshape(int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //glFrustum(-1.0,1.0,-1*w/h,1*w/h,1.0,500.0);
    gluPerspective(60.0,(float) w/h,0.1,500.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt (0.0, 16.0, 0.0, 0.0, 0.0, -50.0, 0.0, 0.0, -1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(200,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("TeaPot");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();

    glutMainLoop();
}
