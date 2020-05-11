#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void koch(float x1,float y1,float x2,float y2,int n);
void main()
{
int gd=DETECT,gm;
float x1,y1,x2,y2 ;
int n,i;
initgraph(&gd,&gm,"C:\\TC\\BGI");
for(i=0;i<2;i++)
{
printf("Enter x1,y1,x2,y2: ");
scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
printf("Enter the level of curve: ");
scanf("%d",&n);
koch(x1,y1,x2,y2,n);
}
getch();
closegraph();
}
void koch(float x1,float y1,float x2,float y2,int n)
{
int i;
float x[5],y[5],r,lx,ly;
lx=(x2-x1)/3;
ly=(y2-y1)/3;
r=-60*3.1416/180;
lx=(x2-x1)/3;
ly=(y2-y1)/3;
x[0]=x1;
x[1]=x1+lx;
x[3]=x1+(2*lx);
x[4]=x2;
y[0]=y1;
y[1]=y1+ly;
y[3]=y1+(2*ly);
y[4]=y2;
x[2]=x[3]*cos(r)-y[3]*sin(r)-x[1]*cos(r)+y[1]*sin(r)+x[1];
y[2]=x[3]*sin(r)+y[3]*cos(r)-x[1]*sin(r)-y[1]*cos(r)+y[1];
if(n>1)
{
koch(x[0],y[0],x[1],y[1],n-1);
koch(x[1],y[1],x[2],y[2],n-1);
koch(x[2],y[2],x[3],y[3],n-1);
koch(x[3],y[3],x[4],y[4],n-1);
}
else
{
line(x[0],y[0],x[1],y[1]);
line(x[1],y[1],x[2],y[2]);
line(x[2],y[2],x[3],y[3]);
line(x[3],y[3],x[4],y[4]);
}
}
