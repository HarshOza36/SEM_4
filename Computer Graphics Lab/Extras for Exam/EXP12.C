#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int sign(int a, int b)
{
	if(b-a > 0)
	{
		return 1;
	}
	return -1;
}

void bresenhamLine(int x1, int y1, int x2, int y2)
{
	int dx, dy, p, x, y, swap = 0, s1, s2, i;
	dx = abs(x2-x1);
	dy = abs(y2-y1);
	p = (2*dy)-dx;
	s1 = sign(x1, x2);
	s2 = sign(y1, y2);
	x = x1;
	y = y1;
	if(dy > dx)
	{
		swap = dy;
		dy = dx;
		dx = swap;
		swap = 1;
	}
	for(i=0; i<dx; i++)
	{
		putpixel(x, y, 11);
		if(p<0)
		{       if(swap)
			{
				x = x +s1;
			}
			else
			{
				y = y+ s2;
			}
			p = p + 2*dy;
		}
		else

		{
			x = x +s1;
			y = y+ s2;
			p = p + 2*dy - 2*dx;
		}
	}
}

void kite()
{
	int i = 0, j = 0, cx = 1, cy = 1;
	while(!kbhit())
	{
		cleardevice();
		bresenhamLine(150+i, 150+j, 250+i, 150+j);
		bresenhamLine(200+i, 98+j, 200+i, 198+j);
		bresenhamLine(100+i, 100+j, 150+i, 50+j);
		bresenhamLine(150+i, 50+j, 200+i, 100+j);
		bresenhamLine(200+i, 100+j, 150+i, 150+j);
		bresenhamLine(150+i, 150+j, 100+i, 100+j);
		bresenhamLine(150+i, 150+j, 130+i, 160+j);
		bresenhamLine(150+i, 150+j, 170+i, 160+j);
		bresenhamLine(160+i, 167+j, 160+i, 187+j);
		delay(100);
		i += 3*cx;
		j += 3*cy;
		if(i > getmaxx()-200 || i <  0)
			cx *= -1;
		if(j > getmaxy()-180 || j <  0)
			cy *= -1;
	}
}

void main()
{
	int gd = DETECT, gm;
	clrscr();
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	kite();
	getch();
	closegraph();
}
