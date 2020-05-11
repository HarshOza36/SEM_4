#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void boundaryFillll(int x,int y,int border_color,int fill_color){
	int interior_color;
	interior_color=getpixel(x,y);
	if(interior_color!=border_color && interior_color!=fill_color)
	{	putpixel(x,y,fill_color);
		delay(2);
		boundaryFillll(x+1,y,border_color,fill_color);
		boundaryFillll(x,y+1,border_color,fill_color);
		boundaryFillll(x-1,y,border_color,fill_color);
		boundaryFillll(x,y-1,border_color,fill_color);
		boundaryFillll(x-1,y+1,border_color,fill_color);
		boundaryFillll(x-1,y-1,border_color,fill_color);
		boundaryFillll(x+1,y+1,border_color,fill_color);
		boundaryFillll(x+1,y-1,border_color,fill_color);
	}
}
void main(){
	int gd=DETECT,gm,x,y,left,top,right,bottom,boundcolor,fillcolor;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	printf("BOUNDARY FILL 8WAY\n");
	printf("ENTER COORDS FOR LEFT TOP(X,Y)>>");
	scanf("%d %d",&left,&top);
	printf("ENTER COORDS FOR RIGHT BOTTOM(X,Y)>>");
	scanf("%d %d",&right,&bottom);
	printf("ENTER BOUNDARY COLOR");
	scanf("%d",&boundcolor);
	printf("ENTER FILL COLOR");
	scanf("%d",&fillcolor);
	setcolor(boundcolor);
	rectangle(left,top,right,bottom);
	printf("ENTER THE POINTS IN THE RECTANGLE(X,Y)");
	scanf("%d %d",&x,&y);
	boundaryFillll(x,y,boundcolor,fillcolor);
	getch();
	closegraph();
}
