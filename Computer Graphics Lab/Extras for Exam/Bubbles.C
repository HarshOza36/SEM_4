#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>

int main() {
    int gd = DETECT, gm;
    int i,k, x, y;
    initgraph(&gd, &gm, "C:\\TC\\BGI");


 while (!kbhit()) {
      /* color 500 random pixels on screen */
   for(i=0; i<=50; i++) {
       x=rand()%getmaxx();
	  y=rand()%getmaxy();
	 // putpixel(x,y,j[i]);
	// k=rand()%30+10;
	// setcolor(i);
	// setfillstyle(SOLID_FILL,k);
	 circle(x,y,k);
	// floodfill(x,y,i);
      }
      delay(500);

      /* clears screen */
      cleardevice();
    }

    getch();
    closegraph();
    return 0;
}