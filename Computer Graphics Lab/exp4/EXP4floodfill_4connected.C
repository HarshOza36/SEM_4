#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void floodFillll(int x,int y,int old_color,int new_color){
	int color;
	color=getpixel(x,y);
	if(color==old_color)
	{	putpixel(x,y,new_color);
		floodFillll(x+1,y,old_color,new_color);
		floodFillll(x,y+1,old_color,new_color);
		floodFillll(x-1,y,old_color,new_color);
		floodFillll(x,y-1,old_color,new_color);
	}
}
void main(){
	int gd=DETECT,gm,old,x,y,left,top,right,bottom,boundcolor,fillcolor;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("ENTER COORDS FOR LEFT TOP(X,Y)>>");
	scanf("%d %d",&left,&top);
	printf("ENTER COORDS FOR RIGHT BOTTOM(X,Y)>>");
	scanf("%d %d",&right,&bottom);
	printf("ENTER BOUNDARY COLOR");
	scanf("%d",&boundcolor);
	printf("ENTER NEW FILL COLOR");
	scanf("%d",&fillcolor);
	setcolor(boundcolor);
	rectangle(left,top,right,bottom);
	printf("ENTER THE OLD fill COLOR");
	scanf("%d",&old);
	printf("ENTER THE POINTS IN THE RECTANGLE(X,Y)");
	scanf("%d %d",&x,&y);
	floodFillll(x,y,old,fillcolor);
	getch();
	closegraph();
}
