
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void dda();
void main(){
	int gd=DETECT,gm,a,j;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("ENTER THE NUMBER OF LINES YOU WANt");
	scanf("%d",&a);
	for(j=0;j<a;j++)
	{
	dda();
	}
	getch();
	closegraph();
}
void dda(){
	float i,length,x1,x2,y1,y2,dx,dy,xinc,yinc,x,y;
	printf("ENTER THE POINTS (X1,Y1) and (X2,Y2)");
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx) >= abs(dy))
	{
		length=abs(dx);
	}
	else
	{	length=abs(dy);}
	xinc=(dx)/length;
	yinc=(dy)/length;
	x=x1+0.5*sign(xinc);
	y=y1+0.5*sign(yinc);
	i=1;
	while(i<=length)
	{	putpixel((int)x,(int)y,12);
		x=x+xinc;
		y=y+yinc;
		i=i+1;
	}
}
int sign(int a){
	if(a<0)
	return (-1);
	else if(a>0)
	return(1);
	else
	return 0;
}