#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <GL/glut.h>

void myinit()
{
      glClearColor(1.0, 1.0, 1.0, 1.0); /* white background */
      glColor3f(1.0, 0.0, 0.0); /* draw in red */
      glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
      gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
      glMatrixMode(GL_MODELVIEW);
}

void draw( void )
{
    int r=10;
    GLfloat theta; 
    
    glClear(GL_COLOR_BUFFER_BIT); 
        glBegin(GL_POLYGON);
        for(theta=0; theta<=360; theta+=0.01)
     {
      glVertex2f(5*sin(theta*3.142/180), 2*cos(theta*3.142/180));
      }
         glEnd();
     glFlush(); 
 }
 
 void gasket()
{
     
     
     GLfloat v[3][2] = {{1.0, 1.0}, {6.0, 1.0}, {3.5, 5.5}};    // Assign co-ordinates to draw 3 points for triangle
     GLfloat p[2] = {2.5, 2.5};                                 // Take an initial point
     int j, i;
     
     glClear(GL_COLOR_BUFFER_BIT);
     glBegin(GL_POINTS);
     for(i=0; i<50000; i++)
     {
              j=rand()%3;                                       // Select a vertex randomly in each iteration
              p[0]=(p[0] + v[j][0])/2.0;                        // Compute the mid-point between P and selected vertex
              p[1]=(p[1] + v[j][1])/2.0;                        // Compute the mid-point between P and selected vertex
              
              glVertex2fv(p);                                   // Display this point on the screen
     }
     glEnd();
     glFlush();
}
 
void myMouse(int button, int state, int x,int y)
{
     if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
     {
     draw();
     }
     else if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
     {
          gasket();
     }
    
}

void display( void )
{
    
    glClear(GL_COLOR_BUFFER_BIT); 
     glFlush(); 
 }
 
void myKey(unsigned char key, int x, int y)
{
     if(key=='g' || key=='G')
     {
                 gasket();
                 }
                 else if(key=='c' || key=='C')
                 {
                 draw();
                 }
                 else exit(0);
}
 

 


int main(int argc, char** argv)
{

/* Standard GLUT initialization */

    glutInit(&argc,argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); /* default, not needed */
    glutInitWindowSize(500,500); /* 500 x 500 pixel window */
    glutInitWindowPosition(0,0); /* place window top left on display */
    glutCreateWindow("First Window");
                                /* window title */
    glutDisplayFunc(display);
     glutMouseFunc(myMouse);  
     /* display callback invoked when window opened */
    glutKeyboardFunc(myKey);
         
     
    myinit(); /* set attributes */

    glutMainLoop(); /* enter event loop */
    return 0;
}
