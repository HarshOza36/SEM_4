#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main(){
	int gd=DETECT,gm;
	int swap=0,temp,x,y,i,s1,s2,dx,dy,p,x1,y1,x2,y2;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("ENTER X1,Y1 then X2,Y2");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	x=x1;
	y=y1;
	if(dx>0)
		s1=1;
	else
		s1=-1;
	if(dy>0)
		s2=1;
	else
		s2=-1;
	if(dy>dx)
	{  temp=dx;
	   dx=dy;
	   dy=temp;
	   swap=1;
	}
	p=2*dx-dy;
	for(i=0;i<dx;i++)
	{
		putpixel(x,y,3);
		while(p>=0)
		{
			if(swap==1)
				x=x+s1;
			else
				y=y+s2;
			p=p-2*dx;
			 }
			if(swap==1)
				y=y+s2;
			else
				x=x+s1;
			p=p+2*dy;
			i=i+1;

	}
	getch();
	closegraph();
}