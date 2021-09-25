#include<windows.h>
#include<GL/glut.h>
#include<math.h>


float theta;
float spin;
//float a;
float count=1.0;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //sky
    glBegin(GL_POLYGON);

    glColor3f(1.0,1.0,1.0);
    glVertex2d(100,384);
    glVertex2d(100,0);
    glColor3f(0.6,0.9,1.0);
    glVertex2d(1500,0);
    glVertex2d(1500,384);

    glEnd();

    //land(back)
    glBegin(GL_POLYGON);

    glColor3f(1.0,0.95,1.0);
    glVertex2d(-683,0);
    glColor3f(0.9,0.9,1.0);
    glVertex2d(683,20);
    glColor3f(0.6,0.6,0.3);
    glVertex2d(683,-150);
    glVertex2d(-683,-150);

    glEnd();


    //land(front)
    glBegin(GL_POLYGON);

    glColor3f(0.6,0.5,0.2);
    for(int i=0; i<180; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-200+2000*cos(theta),-1000+1000*sin(theta));
        //glColor3f(0.9,0.9,0.5);
    }


    glEnd();

    //wall
    glBegin(GL_POLYGON);

    glColor3f(0.35,0.2,0.1);
    glVertex2d(190,31);
    glVertex2d(-71,68);//middle
    glVertex2d(-71,-150);//side bottom
    glVertex2d(190,-120);//right

    glEnd();

    //roof
    glBegin(GL_POLYGON);

    glColor3f(0.3,0.2,0.1);
    glVertex2d(-40,40);
    glVertex2d(-220,200);
    glVertex2d(50,150);
    glColor3f(0.22,0.2,0.1);
    glVertex2d(220,30);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.25,0.2,0.1);
    glVertex2d(-220,200);//another left
    glVertex2d(-205,187);
    glVertex2d(-365,50);//parallel another left
    glVertex2d(-410,40);//short
    glVertex2d(-365,42);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.55,0.2,0.1);
    glVertex2d(-365,-100);
    glVertex2d(-71,-130);//front top
    glColor3f(0.35,0.2,0.1);
    glVertex2d(-71,68);//middle
    glVertex2d(-205,187);
    glVertex2d(-365,50);//left

    glEnd();

    //front roof
    glBegin(GL_POLYGON);

    glColor3f(0.4,0.25,0.15);
    glVertex2d(-365,30);
    glVertex2d(-476,5);
    glVertex2d(-180,-5);
    glColor3f(0.3,0.2,0.1);
    glVertex2d(-71,20);

    glEnd();

    //box
    glBegin(GL_POLYGON);

    glColor3f(0.5,0.3,0.1);
    glVertex2d(100,-100);
    glVertex2d(150,-90);
    glVertex2d(100,-100);
    glVertex2d(130,-105);
    glVertex2d(150,-90);
    glVertex2d(180,-95);
    glVertex2d(180,-95);
    glColor3f(0.3,0.2,0.1);
    glVertex2d(130,-105);
    glVertex2d(100,-100);
    glVertex2d(100,-135);
    glVertex2d(180,-95);
    glVertex2d(180,-130);
    glVertex2d(130,-105);
    glVertex2d(130,-140);
    glVertex2d(130,-140);
    glVertex2d(180,-130);
    glVertex2d(130,-140);
    glVertex2d(100,-135);

    glEnd();

    //chimney
    glBegin(GL_POLYGON);

    glColor3f(0.5,0.5,0.5);
    glVertex2d(60,140);
    glColor3f(0.2,0.2,0.2);
    glVertex2d(70,130);
    glVertex2d(70,170);
    glVertex2d(60,170);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.5,0.5,0.5);
    glVertex2d(40,140);
    glVertex2d(40,120);
    glColor3f(0.2,0.2,0.2);
    glVertex2d(50,110);
    glVertex2d(50,130);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.5,0.5,0.5);
    glVertex2d(60,140);
    glVertex2d(40,140);
    glColor3f(0.2,0.2,0.2);
    glVertex2d(50,130);
    glVertex2d(70,130);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.5,0.5,0.5);
    glVertex2d(40,120);
    glVertex2d(15,120);
    glColor3f(0.2,0.2,0.2);
    glVertex2d(25,110);
    glVertex2d(50,110);

    glEnd();
    //triangle(chimney)
    glBegin(GL_POLYGON);

    glColor3f(0.4,0.4,0.4);
    glVertex2d(65,190);
    glColor3f(0.2,0.2,0.2);
    glVertex2d(50,170);
    glVertex2d(80,170);

    glEnd();

    //front platform
    glBegin(GL_POLYGON);

    glColor3f(0.5,0.3,0.1);
    glVertex2d(-365,-100);
    glVertex2d(-476,-110);
    glVertex2d(-180,-140);
    glColor3f(0.35,0.2,0.1);
    glVertex2d(-71,-130);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.5,0.3,0.1);
    glVertex2d(-476,-110);
    glVertex2d(-476,-134);
    glVertex2d(-180,-164);
    glVertex2d(-180,-140);

    glEnd();
    glBegin(GL_POLYGON);

    glVertex2d(-180,-140);
    glColor3f(0.35,0.2,0.1);
    glVertex2d(-71,-130);
    glVertex2d(-71,-150);
    glVertex2d(-180,-164);

    glEnd();

    //roof stand
    glBegin(GL_POLYGON);

    glColor3f(0.5,0.5,0.5);
    glVertex2d(-445,5);//left
    glVertex2d(-442,5);
    glColor3f(0.7,0.7,0.7);
    glVertex2d(-442,-110);
    glVertex2d(-445,-110);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.5,0.5,0.5);
    glVertex2d(-185,-5);//right
    glVertex2d(-182,-5);
    glColor3f(0.7,0.7,0.7);
    glVertex2d(-182,-135);
    glVertex2d(-185,-135);

    glEnd();

    //stairs
    glBegin(GL_POLYGON);

    glColor3f(0.5,0.3,0.1);
    glVertex2d(-370, -135);
    glVertex2d(-370, -147);
    glVertex2d(-320, -152);
    glVertex2d(-320, -141);

    glEnd();
    glBegin(GL_POLYGON);

    glVertex2d(-320, -141);
    glColor3f(0.35,0.2,0.1);
    glVertex2d(-300, -141);
    glVertex2d(-300, -151);
    glVertex2d(-320, -152);

    glEnd();

    //door
    glBegin(GL_POLYGON);

    glColor3f(0.0,0.0,0.0);
    glVertex2d(-275,-110);
    glVertex2d(-275,-25);
    glVertex2d(-215,-30);
    glVertex2d(-215,-115);

    glEnd();

    //closed
    glBegin(GL_POLYGON);

    glColor3f(0.2,0.8,0.5);
    glVertex2d(-275,-110);
    glVertex2d(-275,-25);
    glVertex2d(-215,-30);
    glVertex2d(-215,-115);

    glEnd();
    glBegin(GL_POLYGON);

    //middle
    glColor3f(0.0,0.0,0.0);
    glVertex2d(-225,-45);
    glVertex2d(-265,-42);
    glVertex2d(-265,-72);
    glVertex2d(-225,-75);

    glEnd();

    //open
    /*glBegin(GL_POLYGON);

    glColor3f(0.2,0.8,0.5);
    glVertex2d(-275,-110);
    glVertex2d(-275,-25);
    glVertex2d(-230,-29);
    glVertex2d(-230,-105);

    glEnd();
    glBegin(GL_POLYGON);

    //middle
    glColor3f(0.0,0.0,0.0);
    glVertex2d(-240,-40);
    glVertex2d(-265,-42);
    glVertex2d(-265,-72);
    glVertex2d(-240,-70);

    glEnd();*/

    //window
    glBegin(GL_POLYGON);

    glColor3f(0.8,0.8,0.8);
    glVertex2d(-135,-35);//front right
    glVertex2d(-135,-75);
    glVertex2d(-175,-72);
    glVertex2d(-175,-32);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.8,0.8,0.8);
    glVertex2d(-345,-22);
    glVertex2d(-305,-25);//front left
    glVertex2d(-305,-65);
    glColor3f(1.0,1.0,1.0);
    glVertex2d(-345,-62);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.3,0.3,0.3);
    glVertex2d(-0,-55);//middle bottom
    glVertex2d(-0,-95);
    glVertex2d(45,-90);
    glVertex2d(45,-50);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.3,0.3,0.3);
    glVertex2d(90,-15);//middle top
    glVertex2d(90,-45);
    glVertex2d(135,-40);
    glVertex2d(135,-10);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.8,0.8,0.8);
    glVertex2d(-185,45);//front top
    glVertex2d(-185,125);
    glVertex2d(-250,125);
    glColor3f(1.0,1.0,1.0);
    glVertex2d(-250,45);

    glEnd();

    //outlines
    glBegin(GL_LINES);

    glColor3f(0.0,0.0,0.0);
    //House
    //roof
    glVertex2d(-220,200);//top
    glVertex2d(50,150);

    glVertex2d(-220,200);//left
    glVertex2d(-40,40);

    //right
    glVertex2d(50,150);
    glVertex2d(60,144);

    glVertex2d(70,134);
    glVertex2d(220,30);

    glVertex2d(-40,40);//bottom
    glVertex2d(220,30);

    glVertex2d(-220,200);//another left
    glVertex2d(-410,40);

    glVertex2d(-365,50);//parallel another left
    glVertex2d(-206,186);

    glVertex2d(-410,40);//short
    glVertex2d(-365,42);

    //walls
    glVertex2d(-71,68);//middle
    glVertex2d(-71,-150);

    glVertex2d(-365,50);//left
    glVertex2d(-365,30);

    glVertex2d(-365,0);
    glVertex2d(-365,-100);

    glVertex2d(-71,-130);//front top
    glVertex2d(-365,-100);

    glVertex2d(-180,-164);//side bottom
    glVertex2d(100,-129);

    glVertex2d(190,-120);
    glVertex2d(180,-121);

    glVertex2d(190,-120);//right
    glVertex2d(190,31);

    //front platform
    glVertex2d(-180,-164);
    glVertex2d(-180,-140);

    glVertex2d(-180,-140);
    glVertex2d(-71,-130);

    glVertex2d(-180,-140);
    glVertex2d(-476,-110);

    glVertex2d(-476,-110);
    glVertex2d(-365,-100);

    glVertex2d(-180,-164);
    glVertex2d(-305, -152);

    glVertex2d(-476,-134);
    glVertex2d(-370, -145);

    glVertex2d(-476,-134);
    glVertex2d(-476,-110);

    //front roof
    glVertex2d(-71,20);
    glVertex2d(-365,30);

    glVertex2d(-365,30);
    glVertex2d(-476,5);

    glVertex2d(-71,20);
    glVertex2d(-180,-5);

    glVertex2d(-180,-5);
    glVertex2d(-476,5);

    //roof stand
    glVertex2d(-445,5);//left
    glVertex2d(-445,-110);

    glVertex2d(-442,5);
    glVertex2d(-442,-110);

    glVertex2d(-445,-110);
    glVertex2d(-442,-110);

    glVertex2d(-185,-5);//right
    glVertex2d(-185,-135);

    glVertex2d(-182,-5);
    glVertex2d(-182,-135);

    glVertex2d(-185,-135);
    glVertex2d(-182,-135);

    //door
    glVertex2d(-275,-25);//left
    glVertex2d(-275,-110);

    glVertex2d(-215,-30);//right
    glVertex2d(-215,-115);

    glVertex2d(-275,-25);//top
    glVertex2d(-215,-30);

    //window
    glVertex2d(-135,-35);//front right
    glVertex2d(-135,-75);

    glVertex2d(-175,-32);
    glVertex2d(-175,-72);

    glVertex2d(-175,-72);
    glVertex2d(-135,-75);

    glVertex2d(-135,-35);
    glVertex2d(-175,-32);

    glVertex2d(-135, -55);//horizontal
    glVertex2d(-175, -50);

    glVertex2d(-155, -34);//vertical
    glVertex2d(-155, -74);

    glVertex2d(-305,-25);//front left
    glVertex2d(-305,-65);

    glVertex2d(-345,-22);
    glVertex2d(-345,-62);

    glVertex2d(-345,-62);
    glVertex2d(-305,-65);

    glVertex2d(-305,-25);
    glVertex2d(-345,-22);

    glVertex2d(-305, -45);//horizontal
    glVertex2d(-345, -40);

    glVertex2d(-325, -24);//vertical
    glVertex2d(-325, -64);

    glVertex2d(-0,-55);//middle bottom
    glVertex2d(-0,-95);

    glVertex2d(45,-50);
    glVertex2d(45,-90);

    glVertex2d(-0,-55);
    glVertex2d(45,-50);

    glVertex2d(-0,-95);
    glVertex2d(45,-90);

    glVertex2d(0, -75);//horizontal
    glVertex2d(45, -70);

    glVertex2d(22, -55);//vertical
    glVertex2d(22, -90);

    glVertex2d(90,-15);//middle top
    glVertex2d(90,-45);

    glVertex2d(135,-10);
    glVertex2d(135,-40);

    glVertex2d(90,-15);
    glVertex2d(135,-10);

    glVertex2d(90,-45);
    glVertex2d(135,-40);

    glVertex2d(135, -25);//horizontal
    glVertex2d(90, -30);

    glVertex2d(112, -14);//vertical
    glVertex2d(112, -44);

    glVertex2d(-185,45);//front top
    glVertex2d(-185,125);

    glVertex2d(-250,45);
    glVertex2d(-250,125);

    glVertex2d(-185,45);
    glVertex2d(-250,45);

    glVertex2d(-185,125);
    glVertex2d(-250,125);

    glVertex2d(-185,100);//horizontal(top)
    glVertex2d(-250,100);

    glVertex2d(-185,70);//horizontal(bottom)
    glVertex2d(-250,70);

    glVertex2d(-218,45);//vertical
    glVertex2d(-218,125);

    //stairs
    glVertex2d(-350, -135);
    glVertex2d(-300, -141);

    glVertex2d(-370, -135);
    glVertex2d(-320, -141);

    glVertex2d(-350, -135);
    glVertex2d(-370, -135);

    glVertex2d(-300, -141);
    glVertex2d(-320, -141);

    glVertex2d(-370, -147);
    glVertex2d(-320, -152);

    glVertex2d(-370, -147);
    glVertex2d(-370, -135);

    glVertex2d(-320, -152);
    glVertex2d(-320, -141);

    glVertex2d(-300, -141);
    glVertex2d(-300, -151);

    glVertex2d(-300, -151);
    glVertex2d(-320, -152);

    //chimney
    glVertex2d(15,120);
    glVertex2d(40,120);

    glVertex2d(40,120);
    glVertex2d(40,140);

    glVertex2d(40,140);
    glVertex2d(60,140);

    glVertex2d(60,140);
    glVertex2d(60,170);

    glVertex2d(25,110);
    glVertex2d(50,110);

    glVertex2d(50,110);
    glVertex2d(50,130);

    glVertex2d(50,130);
    glVertex2d(70,130);

    glVertex2d(70,130);
    glVertex2d(70,170);

    glVertex2d(15,120);
    glVertex2d(25,110);

    glVertex2d(50,170);
    glVertex2d(80,170);

    glVertex2d(50,170);
    glVertex2d(65,190);

    glVertex2d(80,170);
    glVertex2d(65,190);

    //box
    glVertex2d(100,-100);
    glVertex2d(150,-90);

    glVertex2d(100,-100);
    glVertex2d(130,-105);

    glVertex2d(150,-90);
    glVertex2d(180,-95);

    glVertex2d(180,-95);
    glVertex2d(130,-105);

    glVertex2d(100,-100);
    glVertex2d(100,-135);

    glVertex2d(180,-95);
    glVertex2d(180,-130);

    glVertex2d(130,-105);
    glVertex2d(130,-140);

    glVertex2d(130,-140);
    glVertex2d(180,-130);

    glVertex2d(130,-140);
    glVertex2d(100,-135);

    //Windmill
    glVertex2d(270,220);
    glVertex2d(230,-90);

    glVertex2d(270,220);
    glVertex2d(270,-80);

    glVertex2d(270,220);
    glVertex2d(290,-90);

    glVertex2d(289,-70);
    glVertex2d(270,-50);

    glVertex2d(270,-50);
    glVertex2d(234,-60);

    glVertex2d(234,-60);
    glVertex2d(285,-20);

    glVertex2d(285,-20);
    glVertex2d(245,25);

    glVertex2d(245,25);
    glVertex2d(280,65);

    glVertex2d(280,65);
    glVertex2d(255,105);

    glVertex2d(255,105);
    glVertex2d(276,126);

    glVertex2d(276,126);
    glVertex2d(263,165);

    glVertex2d(263,165);
    glVertex2d(273,175);

    glEnd();

    //windmill fan
    glBegin(GL_POLYGON);

    glColor3f(0.5,0.5,0.5);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(270+20*cos(theta),219+20*sin(theta));
    }

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(0.8,0.8,0.8);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(267+20*cos(theta),219+20*sin(theta));
    }

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(0.5,0.5,0.5);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(270+10*cos(theta),219+10*sin(theta));
    }

    glEnd();

    glTranslatef(267.0,219.0,0.0);
    glRotatef(spin,0.0,0.0,1.0);

    glBegin(GL_POLYGON);

    glColor3f(0.8,0.8,0.5);
    //
    glVertex2f(150,0);
    glVertex2f(150,-40);

    glVertex2f(150,-40);
    glVertex2f(40,-40);

    glVertex2f(40,-40);
    glVertex2f(40,0);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.8,0.8,0.5);
    //
    glVertex2f(0,150);
    glVertex2f(40,150);

    glVertex2f(40,150);
    glVertex2f(40,40);

    glVertex2f(40,40);
    glVertex2f(0,40);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.8,0.8,0.5);
    //
    glVertex2f(-150,0);
    glVertex2f(-150,40);

    glVertex2f(-150,40);
    glVertex2f(-40,40);

    glVertex2f(-40,40);
    glVertex2f(-40,0);

    glEnd();
    glBegin(GL_POLYGON);

    glColor3f(0.8,0.8,0.5);
    //
    glVertex2f(0,-150);
    glVertex2f(-40,-150);

    glVertex2f(-40,-150);
    glVertex2f(-40,-40);

    glVertex2f(-40,-40);
    glVertex2f(0,-40);

    glEnd();

    glBegin(GL_LINES);

    glColor3f(0.0,0.0,0.0);
    //
    glVertex2f(0,0);
    glVertex2f(150,0);

    glVertex2f(150,0);
    glVertex2f(150,-40);

    glVertex2f(150,-40);
    glVertex2f(40,-40);

    glVertex2f(40,-40);
    glVertex2f(40,0);

    //
    glVertex2f(0,0);
    glVertex2f(0,150);

    glVertex2f(0,150);
    glVertex2f(40,150);

    glVertex2f(40,150);
    glVertex2f(40,40);

    glVertex2f(40,40);
    glVertex2f(0,40);

    //
    glVertex2f(0,0);
    glVertex2f(-150,0);

    glVertex2f(-150,0);
    glVertex2f(-150,40);

    glVertex2f(-150,40);
    glVertex2f(-40,40);

    glVertex2f(-40,40);
    glVertex2f(-40,0);

    //
    glVertex2f(0,0);
    glVertex2f(0,-150);

    glVertex2f(0,-150);
    glVertex2f(-40,-150);

    glVertex2f(-40,-150);
    glVertex2f(-40,-40);

    glVertex2f(-40,-40);
    glVertex2f(0,-40);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(0.8,0.8,0.8);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+10*cos(theta),0+10*sin(theta));
    }

    glEnd();

    glutSwapBuffers();
}

/*void Person()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    //glLoadIdentity();

    glBegin(GL_POLYGON);

    glColor3f(0.0,0.0,0.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+10*cos(theta),0+10*sin(theta));
    }

    glEnd();

}*/

/*void movement()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //init();
    glPushMatrix();
    glTranslated(a,0,0);

    Person();
    glPopMatrix();

    a+=50;
    glFlush();
}*/

/*void keyAction(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 's':
        movement();
        break;
    }
}*/

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);

    if(spin<count)
    {
        spin++;
    }
    count++;
}

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
}

void reshape(int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-683, 683, -384, 384);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(1366,768);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Animation");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,timer,0);
    init();

    //glutKeyboardFunc(keyAction);

    glutMainLoop();
}
