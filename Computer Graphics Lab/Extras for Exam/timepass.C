#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>



int main()
{
int i,gd=DETECT,gm,j,ch,b;
initgraph(&gd,&gm,"C:\\TC\\BGI");
i=0;
settextstyle(1,0,4);
outtextxy(40,200,"WHEEL OF FORTUNE");
for(j=i;j<500+i;j++)
{
delay(1);
setfillstyle(SOLID_FILL,3);
pieslice(300,300,0+j,60+j,20);
setfillstyle(SOLID_FILL,4);
pieslice(300,300,60+j,120+j,20);
setfillstyle(SOLID_FILL,5);
pieslice(300,300,120+j,180+j,20);
setfillstyle(SOLID_FILL,6);
pieslice(300,300,180+j,240+j,20);
setfillstyle(SOLID_FILL,7);
pieslice(300,300,240+j,300+j,20);
setfillstyle(SOLID_FILL,2);
pieslice(300,300,300+j,360+j,20);
}

cleardevice();
setfillstyle(SOLID_FILL,3);
pieslice(300,200,0+i,60+i,100);
setfillstyle(SOLID_FILL,4);
pieslice(300,200,60+i,120+i,100);
setfillstyle(SOLID_FILL,5);
pieslice(300,200,120+i,180+i,100);
setfillstyle(SOLID_FILL,6);
pieslice(300,200,180+i,240+i,100);
setfillstyle(SOLID_FILL,7);
pieslice(300,200,240+i,300+i,100);
setfillstyle(SOLID_FILL,2);
pieslice(300,200,300+i,360+i,100);
settextstyle(1,0,1);
outtextxy(10,10,"Press W to SPIN");
outtextxy(10,30,"Press S to STOP");
outtextxy(400,450,"Press Esc to EXIT");
while(ch!=27)
{
if(kbhit)
{
ch=getch();
if(ch=='w')
{
outtextxy(10,10,"Press W to SPIN                   ");
outtextxy(10,30,"Press S to STOP");
outtextxy(400,450,"Press Esc to EXIT");
for(i=0;i<38999&&!kbhit();i+=2)
{
delay(1);
setfillstyle(SOLID_FILL,3);
pieslice(300,200,0+i,60+i,100);
setfillstyle(SOLID_FILL,4);
pieslice(300,200,60+i,120+i,100);
setfillstyle(SOLID_FILL,5);
pieslice(300,200,120+i,180+i,100);
setfillstyle(SOLID_FILL,6);
pieslice(300,200,180+i,240+i,100);
setfillstyle(SOLID_FILL,7);
pieslice(300,200,240+i,300+i,100);
setfillstyle(SOLID_FILL,2);
pieslice(300,200,300+i,360+i,100);

}
b=getch();
if(b=='s')
{

for(j=j;j<50+i;j++)
{
delay(1);
setfillstyle(SOLID_FILL,3);
pieslice(300,200,0+j,60+j,100);
setfillstyle(SOLID_FILL,4);
pieslice(300,200,60+j,120+j,100);
setfillstyle(SOLID_FILL,5);
pieslice(300,200,120+j,180+j,100);
setfillstyle(SOLID_FILL,6);
pieslice(300,200,180+j,240+j,100);
setfillstyle(SOLID_FILL,7);
pieslice(300,200,240+j,300+j,100);
setfillstyle(SOLID_FILL,2);
pieslice(300,200,300+j,360+j,100);
}
outtextxy(10,10,"Press S to See Your Fortune");
outtextxy(10,30,"                                 ");
getch();
}

if(getpixel(300,105)==3)
{
		
	cleardevice();

	settextstyle(1,0,1);
	outtextxy(10,10,"Press W to SPIN AGAIN");

	outtextxy(400,450,"Press Esc to EXIT");
	setfillstyle(SOLID_FILL,3);
	fillellipse(300,200,100,100);

	
	
}
else if(getpixel(300,105)==4)
{

	cleardevice();

	settextstyle(1,0,1);
	outtextxy(400,450,"Press Esc to EXIT");
	outtextxy(10,10,"Press W to SPIN AGAIN");
	      
	setfillstyle(SOLID_FILL,4);
	fillellipse(300,200,100,100);
}
else if(getpixel(300,105)==5)
{
	cleardevice();
	settextstyle(1,0,1);
	outtextxy(400,450,"Press Esc to EXIT");
	outtextxy(10,10,"Press W to SPIN AGAIN");

	setfillstyle(SOLID_FILL,5);
	fillellipse(300,200,100,100);
}
else if(getpixel(300,105)==6)
{
	cleardevice();
	settextstyle(1,0,1);
	outtextxy(400,450,"Press Esc to EXIT");
	outtextxy(10,10,"Press W to SPIN AGAIN");
	      
	setfillstyle(SOLID_FILL,6);
	fillellipse(300,200,100,100);
}
else if(getpixel(300,105)==7)
{
	cleardevice();
	settextstyle(1,0,1);
	outtextxy(400,450,"Press Esc to EXIT");
	outtextxy(10,10,"Press W to SPIN AGAIN");

	setfillstyle(SOLID_FILL,7);
	fillellipse(300,200,100,100);
}
else if(getpixel(300,105)==2)
{
	cleardevice();
	settextstyle(1,0,1);
	outtextxy(400,450,"Press Esc to EXIT");
	outtextxy(10,10,"Press W to SPIN AGAIN");

	setfillstyle(SOLID_FILL,2);
	fillellipse(300,200,100,100);
}
}

else if(ch==27)
{
	exit(0);
}
}
}
closegraph();
return 0;
}

