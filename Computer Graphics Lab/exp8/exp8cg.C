#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
void bezier(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int c)
{	float u=0,x,y;
	while(u<=1)
	{	x=(((1-u)*(1-u)*(1-u)*x1)+(3*u*((1-u)*(1-u))*x2)+(3*u*u*(1-u)*x3)+(u*u*u*x4));
		y=(((1-u)*(1-u)*(1-u)*y1)+(3*u*((1-u)*(1-u))*y2)+(3*u*u*(1-u)*y3)+(u*u*u*y4));
		putpixel((int)x,(int)y,c);
		u=u+0.00001;
	}
}
void main()
{	int col,gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	setfillstyle(SOLID_FILL,12);
	rectangle(0, 0, getmaxx(), getmaxy());
	printf("\nHeart and Fish through Bezier Curve");
	col=4;
	bezier(200,290,130,230,180,190,200,220,col);
	bezier(200,290,270,230,220,190,200,220,col);
	//bezier(130,350,200,200,400,200,550,400);
	//bezier(130,350,200,500,400,500,550,300);
	col=15;
	bezier(113,162,116,114,190,105,309,181,col);
	bezier(113,162,125,215,190,215,309,120,col);
	setcolor(15);
	line(309,181,309,120);
	getch();
	floodfill(131,135,15);
	floodfill(205,260,4);
	floodfill(308,121,15);
	getch();
	closegraph();
}