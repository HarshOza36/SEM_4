
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   int gdriver = DETECT, gmode, errorcode;

   int radius = 100;

   initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   setcolor(4);

   /* draw the circle */
   circle(100, 100, radius);
   line(100,150,100,120);
   ellipse(50,50,0,360,20,10);
   ellipse(150,50,0,360,20,10);
   arc(100,100,180,360,70);

			   /* clean up */
   getch();
   closegraph();
   return 0;
}

