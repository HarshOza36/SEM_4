#include<conio.h>   //console input output

#include<math.h>   //math calculation
					#include<graphics.h>
#define PI 3.14   //value constant pi=3.14

char speed[4]; //array declaration for speed

int theta=0,change=1,temp=0,ch;

float x,y,r=100;

void main()

{

int gd=DETECT,gm;

initgraph(&gd,&gm,"c:\\tc\\bgi"); //path where ur BGI file is stored

strcpy(speed,"on 1");

outtextxy(200,20,"Working Fan");

outtextxy(150,50,"Use number 0 1 2 3 to change fan speed");

outtextxy(475,375,"Fan Speed");

fan:

do

{

cleardevice();

outtextxy(200,20,"Working Fan");

outtextxy(150,50,"Use number 0 1 2 3 to change fan speed");

outtextxy(475,375,"Fan Speed");

if(kbhit())

{

ch=getch();

if(ch=='0')

{

rectangle(495,395,535,410);

floodfill(515,405,15);

temp=1;

}

if(ch=='1')

{

strcpy(speed,"on 1");

change=1;

}

else if(ch=='2')

{

strcpy(speed,"on 2");

change=3;

}

else if(ch=='3')

{

strcpy(speed,"on 3");

change=18;

}

}

outtextxy(500,400,speed);

circle(320,240,(r/12));

circle(320,240,(r/6));

circle(320,240,(r/4));

x=r*(cos((PI * theta)/180));

y=r*sin((PI * theta)/180);

line(320+(x/4),240+(y/4),320+(1.6*x),230+(1.6*y)); /*draw the line for fan*/

line(320+(x/4),240+(y/4),320+(1.6*x),250+(1.6*y));

line(320+(1.6*x),230+(1.6*y),320+(1.6*x),250+(1.6*y));

x=r*cos((PI *(theta+120))/180);

y=r*sin((PI *(theta+120))/180);

line(320+(x/4),240+(y/4),320+(1.6*x),230+(1.6*y));

line(320+(x/4),240+(y/4),320+(1.6*x),250+(1.6*y));

line(320+(1.6*x),230+(1.6*y),320+(1.6*x),250+(1.6*y));

x=r*cos((PI * (theta+240))/180);

y=r*sin((PI * (theta+240))/180);

line(320+(x/4),240+(y/4),320+(1.6*x),230+(1.6*y));

line(320+(x/4),240+(y/4),320+(1.6*x),250+(1.6*y));

line(320+(1.6*x),230+(1.6*y),320+(1.6*x),250+(1.6*y));

if(temp!=1) delay(36/change);

else

{

ch=getche();

if(ch=='\r') exit(0);

if(ch=='0') temp=1;

if(ch=='1')   //for speed

{

strcpy(speed,"on 1");

temp=0;

change=1;

}

else if(ch=='2')

{

strcpy(speed,"on 2");

temp=0;

change=3;

}

else if(ch=='3')

{

strcpy(speed,"on 3");

temp=0;

change=18;

}

else

{

strcpy(speed,"off!");

temp=1;

}

}

if(theta==360) theta=0;

theta++;

}

while(temp==0);

goto fan;

}