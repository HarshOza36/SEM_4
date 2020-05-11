#include <stdio.h>
#include <stdlib.h>
#include<graphics.h>
#include<conio.h>
void draw3d(int fs,int x[20],int y[20],int tx,int ty,int d);
void draw3d(int fs,int x[20],int y[20],int tx,int ty,int d)
{
int i,j,k=0;
for(j=0;j<2;j++)
{
for(i=0;i<fs;i++)
{
if(i!=fs-1)
line(x[i]+tx+k,y[i]+ty-k,x[i+1]+tx+k,y[i+1]+ty-k);
else
line(x[i]+tx+k,y[i]+ty-k,x[0]+tx+k,y[0]+ty-k);
}
k=d;
}
for(i=0;i<fs;i++)
{
line(x[i]+tx,y[i]+ty,x[i]+tx+d,y[i]+ty-d);
}
}

void main()
{
int gd=DETECT,gm;
int x[20],y[20],tx=0,ty=0,i,fs,d;
initgraph(&gd,&gm,"c://tc//bgi");
printf("No of sides (front view only) : ");
scanf("%d",&fs);
printf("Co-ordinates : ");
for(i=0;i<fs;i++)
{
printf("(x%d,y%d)",i,i);
scanf("%d%d",&x[i],&y[i]);
}
printf("Depth :");
scanf("%d",&d);
draw3d(fs,x,y,tx,ty,d);
getch();//front view
setcolor(14);
for(i=0;i<fs;i++)
{
if(i!=fs-1)
line(x[i]+200,y[i],x[i+1]+200,y[i+1]);
else
line(x[i]+200,y[i],x[0]+200,y[0]);
}
getch();//top view
for(i=0;i<fs-1;i++)
{
line(x[i],300,x[i+1],300);
line(x[i],300+d*2,x[i+1],300+d*2);
line(x[i],300,x[i],300+d*2);
line(x[i+1],300,x[i+1],300+d*2);
}
getch();//side view
for(i=0;i<fs-1;i++)
{
line(10,y[i],10,y[i+1]);
line(10+d*2,y[i],10+d*2,y[i+1]);
line(10,y[i],10+d*2,y[i]);
line(10,y[i+1],10+d*2,y[i+1]);
}
getch();
closegraph();


}