#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main(){
	int gd=DETECT,gm,theta,rx,ry,sx,sy,fx,fy,xmax,ymax,i,ch;
	int/*for y shear*/a[8]={50,50,50,100,100,50,50,50},tx,ty,ans[8];
	/* for all except y shear a[8]={60,60,60,120,120,60,60,60}*/
	int x1,y1,value,shx,shy;
	float t=0.0,b[3][3];
	printf("***********2D TRANSFORMATION***********");
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	xmax=getmaxx()/2;
	ymax=getmaxy()/2;
	line(xmax,0,xmax,getmaxy());
	line(0,ymax,getmaxx(),ymax);
	for(i=0;i<6;i+=2)
	{	line(xmax+a[i],ymax-a[i+1],xmax+a[i+2],ymax-a[i+3]);
	}
	printf("\n--------------------MENU--------------------");
	printf("\n1.TRANSLATION 2.SCALING with Fixed point");
	printf("\n3.SCALING without Fixed Point 4.ROTATION without Fixed point");
	printf("\n5.ROTATION with fixed point 6.X Shear 7.Yshear");
	printf("\n8.REFLECTION X axis 9.REFLECTION Y AXIS");
	printf("\nENTER YOUR CHOICE>>");
	scanf("%d",&ch);
	switch(ch)
	{	case 1:printf("ENTER Tx and Ty>>");
		scanf("%d %d",&tx,&ty);
		b[0][0]=b[1][1]=b[2][2]=1;
		b[0][2]=tx;
		b[1][2]=ty;
		b[0][1]=0;
		b[1][0]=0;
		break;
		case 2:printf("ENTER Sx and Sy>>");
		scanf("%d %d",&sx,&sy);
		printf("ENTER THE FIXED POINT>>");
		scanf("%d %d",&x1,&y1);
		b[0][0]=sx;
		b[1][1]=sy;
		b[0][2]=(-x1*sx)+x1;
		b[1][2]=(-y1*sy)+y1;
		b[0][1]=b[1][0]=b[2][0]=b[2][1]=0;
		b[2][2]=1;
		break;
		case 3:printf("ENTER Sx and Sy>>");
		scanf("%d %d",&sx,&sy);
		b[0][0]=sx;
		b[1][1]=sy;
		b[0][1]=b[1][0]=b[2][0]=b[2][1]=b[0][2]=b[1][2]=0;
		b[2][2]=1;
		break;
		case 4:printf("ENTER THE VALUE OF THETA>>");
		scanf("%d",&theta);
		printf("FOR ANTICLOCKWISE PRESS 1\nFOR CLOCKWISE PRESS 2\n");
		scanf("%d",&value);
		if(value==1)
		{t=theta*(3.1416/180);}
		else if(value==2)
		{t=-(theta)*(3.1416/180);}
		else
		{printf("INVALID CHIOce");}
		b[0][0]=b[1][1]=cos(t);
		b[0][1]=-sin(t);
		b[1][0]=sin(t);
		b[0][2]=b[1][2]=b[2][0]=b[2][1]=0;
		b[2][2]=1;
		break;
		case 5:
		printf("ENTER THE FIXED POINT RX RY>>");
		scanf("%d %d",&rx,&ry);
		printf("ENTER THE VALUE OF THETA>>");
		scanf("%d",&theta);
		printf("FOR ANTICLOCKWISE PRESS 1\nFOR CLOCKWISE PRESS 2\n");
		scanf("%d",&value);
		if(value==1)
		{t=theta*(3.1416/180);}
		else if(value==2)
		{t=-(theta)*(3.1416/180);}
		else
		{printf("INVALID CHIOce");}
		b[0][0]=b[1][1]=cos(t);
		b[0][1]=-sin(t);
		b[1][0]=sin(t);
		b[0][2]=-(rx*cos(t))+(ry*sin(t))+rx;
		b[1][2]=-(rx*sin(t))-(ry*cos(t))+ry;
		b[2][0]=b[2][1]=0;
		b[2][2]=1;
		break;
		case 6:printf("ENTER THE VALUE OF SHX>>");
		scanf("%d",&shx);
		b[0][0]=b[1][1]=b[2][2]=1;
		b[0][1]=shx;
		b[0][2]=b[1][0]=b[1][2]=b[2][0]=b[2][1]=0;
		break;
		case 7:printf("ENTER THE VALUE OF SHY>>");
		scanf("%d",&shy);
		b[0][0]=b[1][1]=b[2][2]=1;
		b[1][0]=shy;
		b[0][2]=b[1][2]=b[2][0]=b[2][1]=b[0][1]=0;
		break;
		case 8:
		b[0][0]=b[2][2]=1;
		b[1][1]=-1;
		b[0][2]=b[1][0]=b[1][2]=b[2][0]=b[2][1]=0;
		break;
		case 9:
		b[1][1]=b[2][2]=1;
		b[0][0]=-1;
		b[0][2]=b[1][0]=b[1][2]=b[2][0]=b[2][1]=0;
		break;
	}
	for(i=0;i<=6;i=i+2)
	{       ans[i]=(b[0][0]*a[i])+(b[0][1]*a[i+1])+(b[0][2]*1);
		ans[i+1]=(b[1][0]*a[i])+(b[1][1]*a[i+1])+(b[1][2]*1);
	}
	setcolor(6);
	for(i=0;i<6;i=i+2)
	{	line(ans[i]+xmax,ymax-ans[i+1],xmax+ans[i+2],ymax-ans[i+3]);
	}
	getch();
	closegraph();
}