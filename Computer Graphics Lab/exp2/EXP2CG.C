#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{       int gd=DETECT,gm,p,x,y,xc,yc,r;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("********MIDPOINT CIRCLE ALGO********");
	printf("\nENTER THE RADIUS>>>>");
	scanf("%d",&r);
	printf("ENTER THE CENTER Xc,Yc>>>>");
	scanf("%d %d",&xc,&yc);
	x=0;
	y=r;
	p=1-r;
	while(x<=y)
	{	putpixel(x+xc,y+yc,1);
		putpixel(y+xc,x+yc,12);
		putpixel(-y+xc,x+yc,13);
		putpixel(-x+xc,y+yc,2);
		putpixel(-y+xc,-x+yc,3);
		putpixel(-x+xc,-y+yc,4);
		putpixel(y+xc,-x+yc,6);
		putpixel(x+xc,-y+yc,7);
		if(p<0)
		{	x=x+1;
			y=y;
			p=p+(2*x)+1;
		}
		else
		{	x=x+1;
			y=y-1;
			p=p+(2*x)+1-(2*y);
		}
	}
	getch();
	closegraph();
}