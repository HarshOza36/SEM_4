#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{       int gd=DETECT,gm,i,c,p,x,y,xc,yc,r,a;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("********MIDPOINT CIRCLE ALGO********");
	printf("\nENTER THE NUMBER OF CIRCLES YOU WANt");
	scanf("%d",&a);
	printf("ENTER THE RADIUS>>>>");
	scanf("%d",&r);
	for(i=0;i<a;i++)
	{
	printf("ENTER THE CENTER Xc,Yc>>>>");
	scanf("%d %d",&xc,&yc);
	printf("COLOR:");
	scanf("%d",&c);
	x=0;
	y=r;
	p=1-r;
	while(x<=y)
	{	putpixel(x+xc,y+yc,c);
		putpixel(y+xc,x+yc,c);
		putpixel(-y+xc,x+yc,c);
		putpixel(-x+xc,y+yc,c);
		putpixel(-y+xc,-x+yc,c);
		putpixel(-x+xc,-y+yc,c);
		putpixel(y+xc,-x+yc,c);
		putpixel(x+xc,-y+yc,c);
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
	}
	getch();
	closegraph();
}
