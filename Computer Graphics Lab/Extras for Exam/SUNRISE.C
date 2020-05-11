#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int gd=DETECT,gm;
int i,j,k,t,q;
float x,y;
initgraph(&gd,&gm,"c:\\tc\\bgi");
setcolor(2);
rectangle(0,0,getmaxx(),getmaxy());
//&nbsp;
setcolor(2);
//&nbsp;i=0;
for(t=0;t<getmaxx();t+=120)
{
line(t,250,t+60,170);
line(t+60,170,t+120,250);
}
line(0,400,getmaxx(),350);
setfillstyle(11,CYAN);
floodfill(2,420,2);
setfillstyle(4,LIGHTGREEN);
floodfill(1,300,2);

i=0;
while(i!=150)
{

setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
fillellipse(k,j,30,30);
setfillstyle(SOLID_FILL,LIGHTRED);
fillellipse(170+i,235-i,30,30);
j=235-i;
k=170+i;
i++;
setcolor(2);
for(t=0;t<getmaxx();t+=120)
{
line(t,250,t+60,170);
line(t+60,170,t+120,250);
}
setfillstyle(1,GREEN);
floodfill(202,200,GREEN);
delay(25);
}

for(i=36;i<80;i++)
for(j=0;j<=360;j+=20)
{
x=319+i*cos(((float)j*3.14)/180);
y=86+i*sin(((float)j*3.14)/180);
putpixel(x,y,LIGHTRED);
delay(1);
}
getch();
}