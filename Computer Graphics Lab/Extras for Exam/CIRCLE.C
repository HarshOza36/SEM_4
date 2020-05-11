#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\Tc\\BGI");
//for moving circle from left to right,the following loop works
for(i=50;i<=getmaxx();i++)
{
 setcolor(3);
 setfillstyle(SOLID_FILL,9);
 circle(50+i,50,50);
 floodfill(52+i,52,3);
 delay(20);
 cleardevice();
}
//for moving circle from right to left, the following loop works
for(i=getmaxy();i>=0;i--)
{
 setcolor(3);
 setfillstyle(SOLID_FILL,9);
 circle(i,50,50);
 floodfill(i+2,52,3);
 delay(20);
 cleardevice();
}
//for moving circle from top to bottom,the following loop works
for(i=50;i<=getmaxy();i++)
{
 setcolor(3);
 setfillstyle(SOLID_FILL,9);
 circle(50,i,50);
 floodfill(52,i+2,3);
 delay(20);
 cleardevice();
}
//for moving circle from bottom to top,the following loop works
for(i=getmaxy();i>=0;i--)
{
 setcolor(3);
 setfillstyle(SOLID_FILL,9);
 circle(50,i,50);
 floodfill(52,i+2,3);
 delay(20);
 cleardevice();
}
//for moving circle in diagonal direction,the following loop works
for(i=50;i<=getmaxx();i++)
{
 setcolor(3);
 setfillstyle(SOLID_FILL,9);
 circle(i,i,50);
 floodfill(i+2,i+2,3);
 delay(20);
 cleardevice();
}
//for moving circle in reverse diagonal direction,the following loop works
for(i=getmaxx();i>=0;i--)
{
 setcolor(3);
 setfillstyle(SOLID_FILL,9);
 circle(i,i,50);
 floodfill(i+2,i+2,3);
 delay(20);
 cleardevice();
}
getch();
closegraph();
}