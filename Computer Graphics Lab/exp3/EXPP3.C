#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main(){
	int gd=DETECT,gm;
	float rx,ry,xc,yc,x,y,p,dx,dy,p2;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("ENTER THE X AND Y RADIUS >>>>");
	scanf("%f %f",&rx,&ry);
	printf("ENTER THE CENTER (X,Y) >>>>");
	scanf("%f %f",&xc,&yc);
	x=0;
	y=ry;
	p=(ry*ry)-(rx*rx*ry)+0.25*(rx*rx);
	dx=2*rx*rx*y;
	dy=2*ry*ry*x;
	while(dx>dy)
	{	putpixel((int)x+xc,(int)y+yc,11);
		putpixel((int)x+xc,(int)-y+yc,14);
		putpixel((int)-x+xc,(int)-y+yc,6);
		putpixel((int)-x+xc,(int)y+yc,12);
		if(p<0)
		{	x=x+1;
			y=y;
			p=p+(2*ry*ry*x)+(ry*ry);
			dx=2*rx*rx*y;
			dy=2*ry*ry*x;
		}
		else
		{	x=x+1;
			y=y-1;
			p=p+(2*ry*ry*x)-(2*rx*rx*y)+(rx*rx);
			dx=2*rx*rx*y;
			dy=2*ry*ry*x;
		}

	}
	p2=(ry*ry*(x+0.5)*(x+0.5))+(rx*rx*(y-1)*(y-1))-(rx*rx*ry*ry);
	while(y!=0)
	{	putpixel((int)x+xc,(int)y+yc,11);
		putpixel((int)x+xc,(int)-y+yc,14);
		putpixel((int)-x+xc,(int)-y+yc,6);
		putpixel((int)-x+xc,(int)y+yc,12);
		if(p2>0)
		{
			x=x;
			y=y-1;
			p2=p2-(2*rx*rx*y)+(rx*rx);
		}
		else
		{	x=x+1;
			y=y-1;
			p2=p2+(2*ry*ry*x)-(2*rx*rx*y)+(rx*rx);
		}
	}
	getch();
	closegraph();
}