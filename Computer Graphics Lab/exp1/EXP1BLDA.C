#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main(){
	int gd=DETECT,gm;
	int x,y,i,dx,dy,p,x1,y1,x2,y2;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("ENTER X1,Y1 then X2,Y2");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	p=2*dy-dx;
	x=x1;
	y=y1;
	while(x<=dx)         //or(x<=x2)
	{ putpixel(x,y,12);
	  if(p<0)
	  {
		x=x+1;
		y=y;
		p=p+(2*dy);
	  }
	  else if(p>=0)
		{
			x=x+1;
			y=y+1;
		}	p=p+(2*dy)-(2*dx);
	}
	getch();
	closegraph();
}