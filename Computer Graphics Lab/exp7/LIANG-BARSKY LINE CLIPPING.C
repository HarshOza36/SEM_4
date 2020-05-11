#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main(){
	int gd=DETECT,gm,i;
	float xwmax,xwmin,ywmax,ywmin,x1,x2,y1,y2,m;
	float temp,dx,dy,t,p[4],q[4],t1=0,t2=1;
	float xx1,xx2,yy1,yy2;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("*******LIANG-BARSKY LINE CLIPPING*******\n");
	printf("ENTER THE POINTS XwMIN,YwMIN,XwMAX,YwMAX \nFOR CLIPPING WINDOW>>>");
	scanf("%f %f %f %f",&xwmin,&ywmin,&xwmax,&ywmax);
	setcolor(14);
	rectangle(xwmin,ywmax,xwmax,ywmin);
	printf("ENTER THE LINE COORDINATES x1,y1,x2,y2>>>");
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	setcolor(2);
	line(x1,y1,x2,y2);
	dx=x2-x1;
	dy=y2-y1;
	p[0]=-dx;
	p[1]=dx;
	p[2]=-dy;
	p[3]=dy;
	q[0]=x1-xwmin;
	q[1]=xwmax-x1;
	q[2]=y1-ywmin;
	q[3]=ywmax-y1;
	for(i=0;i<4;i++)
	{	if(p[i]==0)
		{       if(q[i]>=0)
			{	if(i<2)
				{ 	if(y1<ywmin)
					{	y1=ywmin;}
					if(y2>ywmax)
					{	y2=ywmax;}
				}
				if(i>1)
				{ 	if(x1<xwmin)
					{	x1=xwmin;}
					if(x2>xwmax)
					{	x2=xwmax;}
				}
			}
		}
	}
	for(i=0;i<4;i++)
	{	temp=q[i]/p[i];
		if(p[i]<0)
		{	if(t1<=temp)
			{t1=temp;}
		}
		else
		{	if(t2>temp)
			{t2=temp;}
		}
	}
	if(t1<t2)
	{	xx2=x1+t2*(dx);
		xx1=x1+t1*(dx);
		yy2=y1+t2*(dy);
		yy1=y1+t1*(dy);
		x1=xx1;
		x2=xx2;
		y1=yy1;
		y2=yy2;
	}
	getch();
	cleardevice();
	setcolor(14);
	rectangle(xwmin,ywmax,xwmax,ywmin);
	setcolor(5);
	line(x1,y1,x2,y2);
	getch();
	closegraph();
}