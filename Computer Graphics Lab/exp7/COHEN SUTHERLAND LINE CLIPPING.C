#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main(){
	int gd=DETECT,gm,i;
	int a1[4]={0,0,0,0},a2[4]={0,0,0,0},a3[4];
	float xwmax,xwmin,ywmax,ywmin;
	float x1,y1,x2,y2,m;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	printf("**********COHEN SUTHERLAND LINE CLIPPING**********\n");
	printf("ENTER THE POINTS XwMIN,YwMIN,XwMAX,YwMAX \nFOR CLIPPING WINDOW>>>");
	scanf("%f %f %f %f",&xwmin,&ywmin,&xwmax,&ywmax);
	setcolor(5);
	rectangle(xwmin,ywmax,xwmax,ywmin);
	printf("ENTER THE LINE COORDINATES x1,y1,x2,y2>>>");
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	setcolor(7);
	line(x1,y1,x2,y2);
	m=(x2-x1)/(y2-y1);
	if(x1<xwmin)
	{ a1[0]=1;}
	if(x1>xwmax)
	{ a1[1]=1;}
	if(y1<ywmin)
	{ a1[2]=1;}
	if(y1>ywmax)
	{ a1[3]=1;}
	if(x2<xwmin)
	{ a2[0]=1;}
	if(x2>xwmax)
	{ a2[1]=1;}
	if(y2<ywmin)
	{ a2[2]=1;}
	if(y2>ywmax)
	{ a2[3]=1;}
	//*for(i=0;i<4;i++){printf("%d",a1[i]);}*/
	if(a1[0]==0 && a1[1]==0 && a1[2]==0 && a1[3]==0 && a2[0]==0 && a2[1]==0 && a2[2]==0 && a2[3]==0)
	{	getch();
		cleardevice();
		printf("GIVEN LINE IS COMPLETELY INSIDE :) !!!");
		setcolor(12);
		rectangle(xwmin,ywmax,xwmax,ywmin);
		setcolor(2);
		line(x1,y1,x2,y2);
	}
	for(i=0;i<4;i++)
	{	a3[i]=a1[i] & a2[i];
	}
	if(a3[0]!=0 || a3[1]!=0 || a3[2]!=0 || a3[3]!=0)
	{	getch();
		cleardevice();
		printf("GIVEN LINE IS COMPLETELY OUTSIDE :( !!!");
		setcolor(12);
		rectangle(xwmin,ywmax,xwmax,ywmin);
	}
	if(a3[0]==0 && a3[1]==0 && a3[2]==0 && a3[3]==0)
	{	getch();
		printf("GIVEN LINE IS PARTIALLY OUTSIDE :( !!!");
		setcolor(12);
		rectangle(xwmin,ywmax,xwmax,ywmin);
		if(a1[0]==1)
		{
			y1=m*(xwmin-x1)+y1;
			x1=xwmin;
		}
		if(a1[1]==1)
		{
			y1=m*(xwmax-x1)+y1;
			x1=xwmax;
		}
		if(a1[2]==1)
		{	x1=x1+(ywmin-y1)*(1/m);
			y1=ywmin;
		}
		if(a1[3]==1)
		{
			x1=x1+(ywmax-y1)*(1/m);
			y1=ywmax;
		}
		if(a2[0]==1)
		{	y2=m*(xwmin-x2)+y2;
			x2=xwmin;
		}
		if(a2[1]==1)
		{	y2=m*(xwmax-x2)+y2;
			x2=xwmax;
		}
		if(a2[2]==1)
		{	x2=x2+(ywmin-y2)*(1/m);
			y2=ywmin;
		}
		if(a2[3]==1)
		{	x2=x2+(ywmax-y2)*(1/m);
			y2=ywmax;
		}
		setcolor(2);
		line(x1,y1,x2,y2);
	}
	getch();
	closegraph();
}