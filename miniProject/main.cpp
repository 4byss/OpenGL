#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#include<stdio.h>

double cameraAngle;
double cameraAngleDelta;
float pos1, pos2, pos3;

void drawBuilding(int x1, int y1, int x2,int y2, int z)
{
    //back side
    int minZ = 0;
    glColor3f(0,1,1);
    glBegin(GL_QUADS);
    glVertex3f(x1, y1, minZ);
    glVertex3f(x1, y1, z);
    glVertex3f(x2, y2, z);
    glVertex3f(x2, y2, minZ);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);

    glVertex3f(x1, y1, minZ);
    glVertex3f(x1, y1, z);

    glVertex3f(x1, y1, z);
    glVertex3f(x2, y2, z);

    glVertex3f(x2, y2, z);
    glVertex3f(x2, y2, minZ);

    glVertex3f(x2, y2, minZ);
    glVertex3f(x1, y1, minZ);

    glEnd();

    //left side
    glColor3f(0,1,1);
    glBegin(GL_QUADS);

    glVertex3f(x1, y1, minZ);
    glVertex3f(x1, y1, z);
    glVertex3f(x1+20, y1, z);
    glVertex3f(x1+20, y1, minZ);

    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);

    glVertex3f(x1, y1, minZ);
    glVertex3f(x1, y1, z);

    glVertex3f(x1, y1, z);
    glVertex3f(x1+20, y1, z);

    glVertex3f(x1+20, y1, z);
    glVertex3f(x1+20, y1, minZ);

    glVertex3f(x1+20, y1, minZ);
    glVertex3f(x1, y1, minZ);

    glEnd();

    //front side
    glColor3f(0,1,1);
    glBegin(GL_QUADS);

    glVertex3f(x1+20, y1, minZ);
    glVertex3f(x1+20, y1, z);
    glVertex3f(x2+20, y2, z);
    glVertex3f(x2+20, y2, minZ);

    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);

    glVertex3f(x1+20, y1, minZ);
    glVertex3f(x1+20, y1, z);

    glVertex3f(x1+20, y1, z);
    glVertex3f(x2+20, y2, z);

    glVertex3f(x2+20, y2, z);
    glVertex3f(x2+20, y2, minZ);

    glVertex3f(x2+20, y2, minZ);
    glVertex3f(x1+20, y1, minZ);

    glEnd();

    //right side
    glColor3f(0,1,1);
    glBegin(GL_QUADS);

    glVertex3f(x2, y2, minZ);
    glVertex3f(x2, y2, z);
    glVertex3f(x2+20, y2, z);
    glVertex3f(x2+20, y2, minZ);

    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);

    glVertex3f(x2, y2, minZ);
    glVertex3f(x2, y2, z);

    glVertex3f(x2, y2, z);
    glVertex3f(x2+20, y2, z);

    glVertex3f(x2+20, y2, z);
    glVertex3f(x2+20, y2, minZ);

    glVertex3f(x2+20, y2, minZ);
    glVertex3f(x2, y2, minZ);

    glEnd();

    //roof
    glColor3f(0,1,1);
    glBegin(GL_QUADS);

    glVertex3f(x1, y1, z);
    glVertex3f(x2, y2, z);
    glVertex3f(x2+20, y2, z);
    glVertex3f(x1+20, y1, z);

    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);

    glVertex3f(x1, y1, z);
    glVertex3f(x2, y2, z);

    glVertex3f(x2, y2, z);
    glVertex3f(x2+20, y2, z);

    glVertex3f(x2+20, y2, z);
    glVertex3f(x1+20, y1, z);

    glVertex3f(x1+20, y1, z);
    glVertex3f(x1, y1, z);

    glEnd();
}

//red car
void car1(int x)
{
    glColor3f(1,0,0);
    glBegin(GL_QUADS);

    glVertex3f(-10, 80-x, 5);
    glVertex3f(-10, 80-x, 10);
    glVertex3f(-10, 100-x, 10);
    glVertex3f(-10, 100-x, 5);

    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_QUADS);

    glVertex3f(-10, 85-x, 5);
    glVertex3f(-10, 85-x, 20);
    glVertex3f(-10, 95-x, 20);
    glVertex3f(-10, 95-x, 5);

    glEnd();
}

//blue car
void car2(int x)
{
    glColor3f(0,0,1);
    glBegin(GL_QUADS);

    glVertex3f(10, -80+x, 5);
    glVertex3f(10, -80+x, 10);
    glVertex3f(10, -100+x, 10);
    glVertex3f(10, -100+x, 5);

    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_QUADS);

    glVertex3f(10, -85+x, 5);
    glVertex3f(10, -85+x, 20);
    glVertex3f(10, -95+x, 20);
    glVertex3f(10, -95+x, 5);

    glEnd();
}

//green car
void car3(int x)
{
    glColor3f(0,1,0);
    glBegin(GL_QUADS);

    glVertex3f(-100+x, 10, 5);
    glVertex3f(-100+x, 10, 10);
    glVertex3f(-80+x, 10, 10);
    glVertex3f(-80+x, 10, 5);

    glEnd();
    glColor3f(0,1,0);
    glBegin(GL_QUADS);

    glVertex3f(-95+x, 10, 5);
    glVertex3f(-95+x, 10, 20);
    glVertex3f(-85+x, 10, 20);
    glVertex3f(-85+x, 10, 5);

    glEnd();
}

void display()
{
    GLfloat position[]= {0.0,0.0,7.0,1.0};

    //clear the display
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //border
    glColor3f(1,1,1);
    glBegin(GL_LINES);

    glVertex3f(-100, -100, 0);
    glVertex3f(-100, 100, 0);

    glVertex3f(-100, 100, 0);
    glVertex3f(100, 100, 0);

    glVertex3f(100, 100, 0);
    glVertex3f(100, -100, 0);

    glVertex3f(100, -100, 0);
    glVertex3f(-100, -100, 0);

    glEnd();

    //roads
    glColor3f(1,1,1);
    glBegin(GL_QUADS);

    glVertex3f(-100,-20,0);
    glVertex3f(-100,20,0);
    glVertex3f(100,20,0);
    glVertex3f(100,-20,0);

    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_QUADS);

    glVertex3f(-20,100,0);
    glVertex3f(20,100,0);
    glVertex3f(20,-100,0);
    glVertex3f(-20,-100,0);

    glEnd();

    //top left buildings 1st row
    glPushMatrix();
    drawBuilding(-90, -90, -90, -70, 70);
    drawBuilding(-90, -60, -90, -40, 50);

    //top left buildings 2nd row
    drawBuilding(-60, -90, -60, -70, 80);
    drawBuilding(-55, -60, -55, -40, 60);

    //top right buildings 1st row
    drawBuilding(-90, 90, -90, 70, 90);
    drawBuilding(-90, 60, -90, 40, 70);

    //top right buildings 2nd row
    drawBuilding(-60, 90, -60, 75, 100);
    drawBuilding(-60, 70, -60, 35, 65);

    //middle left buildings
    drawBuilding(40, -90, 40, -70, 60);
    drawBuilding(40, -60, 40, -40, 70);

    //middle right buildings
    drawBuilding(30, 90, 30, 70, 50);
    drawBuilding(30, 60, 30, 40, 70);

    //bottom left buildings
    drawBuilding(70, -90, 70, -70, 50);
    drawBuilding(75, -60, 75, -40, 50);

    //bottom right buildings
    drawBuilding(70, 90, 70, 70, 110);
    drawBuilding(70, 65, 70, 40, 50);

    glPushMatrix();

    //moving car
    glPushMatrix();
    pos1 += .2;
    if(pos1>180)
        pos1 = 0;
    car1(pos1);

    pos2 += .075;
    if(pos2>180)
        pos2 = 0;
    car2(pos2);

    pos3 += .1;
    if(pos3>180)
        pos3 = 0;
    car3(pos3);
    glPopMatrix();

    glPushMatrix();
    glLightfv(GL_LIGHT0,GL_POSITION,position);
    glDisable(GL_LIGHTING);
    glEnable(GL_LIGHTING);
    glTranslatef(0,0,120);
    //glColor3f(1.5,0.5,0.0);
    glutSolidSphere(0,100,100);
    glPopMatrix();

    glutPostRedisplay();
    glFlush();
}

void animate0()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(200*cos(cameraAngle), 200*sin(cameraAngle),120,0,0,0,0,0,1);
    glMatrixMode(GL_MODELVIEW);

    cameraAngleDelta = .0007;
    cameraAngle += cameraAngleDelta;

    glutPostRedisplay();
}

void animate1()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(200*cos(cameraAngle), 200*sin(cameraAngle),120,0,0,0,0,0,1);
    gluLookAt(1,0,tan(cameraAngle),0,0,0,1,1,0);
    glMatrixMode(GL_MODELVIEW);

    cameraAngleDelta = .001;
    cameraAngle += cameraAngleDelta;

    glutPostRedisplay();
}

void animate2()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(200*cos(cameraAngle), 200*sin(cameraAngle),0,0,0,0,0,0,1);
    glMatrixMode(GL_MODELVIEW);

    cameraAngleDelta = .001;
    cameraAngle += cameraAngleDelta;

    glutPostRedisplay();
}

void animate3()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(200*cos(cameraAngle), 100*sin(cameraAngle),120,0,0,0,0,0,1);
    glMatrixMode(GL_MODELVIEW);

    cameraAngleDelta = .001;
    cameraAngle += cameraAngleDelta;

    glutPostRedisplay();
}

void animate4()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.2, -sin(cameraAngle),0,0,0,0,0,0,1);
    glMatrixMode(GL_MODELVIEW);

    cameraAngleDelta = .001;
    cameraAngle += cameraAngleDelta;

    glutPostRedisplay();
}

void keyboardListener(unsigned char key,int x,int y)
{
    switch(key)
    {
    case '0':
        glutIdleFunc(animate0);
        break;
    case '1':
        glutIdleFunc(animate1);
        break;
    case '2':
        glutIdleFunc(animate2);
        break;
    case '3':
        glutIdleFunc(animate3);
        break;
    case '4':
        glutIdleFunc(animate4);
        break;
    case 27:
        exit(0);
    default:
        break;
    }
}

void menu(int id)
{
    switch(id)
    {
    case 1:
        glutIdleFunc(animate0);
        break;
    case 2:
        glutIdleFunc(animate1);
        break;
    case 3:
        glutIdleFunc(animate2);
        break;
    case 4:
        glutIdleFunc(animate3);
        break;
    case 5:
        glutIdleFunc(animate4);
        break;
    case 0:
        exit(0);
    }
}

//Menu
void popUpMenu()
{
    int subMenu = glutCreateMenu(menu);
	glutAddMenuEntry("Animation 1           NUM0",1);
    glutAddMenuEntry("Animation 2           NUM1",2);
    glutAddMenuEntry("Animation 3           NUM2",3);
    glutAddMenuEntry("Animation 4           NUM3",4);
    glutAddMenuEntry("Animation 5           NUM4",5);

	int mainMenu = glutCreateMenu(menu);
	glutAddSubMenu("Animations", subMenu);
	glutAddMenuEntry("Exit                  ESC",0);

	glutAttachMenu(GLUT_RIGHT_BUTTON);
}

void init()
{
    cameraAngle = 0;	//// init the cameraAngle
	cameraAngleDelta = 0;

    glClearColor(0.0,0.0,0.0,1);
    glEnable(GL_DEPTH_TEST);
    GLfloat mat_diffuse[]= {1.0,1.0,1.0,1.0};
    GLfloat mat_ambient[]= {0.0,0.0,0.0,1.0};
    GLfloat mat_specular[]= {1.0,1.0,1.0,1.0};
    GLfloat light_position[]= {1.0,1.0,1.0,0.0};
    glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_diffuse);
    glMaterialfv(GL_FRONT,GL_AMBIENT,mat_ambient);
    glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);
    glMaterialf(GL_FRONT,GL_SHININESS,100.0);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0,GL_POSITION,light_position);
    glColorMaterial(GL_FRONT,GL_DIFFUSE);
    glEnable(GL_COLOR_MATERIAL);
}

void reshape(int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60,(float) w/h,0.1,10000.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(150,-30,150,0,0,0,0,0,1);

}

int main(int argc, char **argv)
{
    printf(" **********INSTRUCTIONS********** \n");
    printf(" *  Press NUM0 for animation 1  * \n");
    printf(" *  Press NUM1 for animation 2  * \n");
    printf(" *  Press NUM2 for animation 3  * \n");
    printf(" *  Press NUM3 for animation 4  * \n");
    printf(" *  Press NUM4 for animation 5  * \n");
    printf(" *      Press ESC to exit       * \n");
    printf(" ******************************** \n");

    glutInit(&argc,argv);
    glutInitWindowSize(800, 500);
    glutInitWindowPosition(500, 100);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_RGB);
    glutCreateWindow("3-D City View");
    init();
    glEnable(GL_DEPTH_TEST);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboardListener);
    popUpMenu();

    glutMainLoop();

    return 0;
}
