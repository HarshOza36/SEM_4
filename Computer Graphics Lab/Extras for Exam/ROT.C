#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>
 
int xc=50,yc=200,r=35;
int x[15],y[15];
void drawcircles()
{
	setcolor(YELLOW);
	circle(xc,yc,r);
	circle(xc,yc,r+5);
}
void main()
{
	double angle=0,theta;
	int i,a;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	a=xc+r;
	while(!kbhit())
	{
		while(a<=630)
		{
			theta=M_PI*angle/180;
			cleardevice();
			drawcircles();
			for(i=0;i<18;i++)
			{
				theta=M_PI*angle/180;
				x[i]=xc+r*cos(theta);
				y[i]=yc+r*sin(theta);
				angle+=20;
				line(xc,yc,x[i],y[i]);
			}
			angle+=2; xc+=2; a=xc+r;
			delay(50);
		}
		xc=50;	r=35; a=xc+r;
	}
	getch();
	closegraph();
}