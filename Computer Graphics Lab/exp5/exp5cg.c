     
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void scanfill(int a[20][2],int col1,int col2,int n)
{	int i,j,k,dy,dx;
	int x,y,temp;
	int xi[20];
	float slope[20];
	clrscr();
	setcolor(col1);
	for(i=0;i<n;i++)
	{
	line(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);
	}
	getch();
	setcolor(col2);
	for(i=0;i<n;i++)
	{
	dy=a[i+1][1]-a[i][1];
	dx=a[i+1][0]-a[i][0];
	if(dy==0)
		 slope[i]=1;
	if(dx==0)
		 slope[i]=0;
	if((dy!=0)&&(dx!=0))
		{
		slope[i]=(float) dx/dy;
		}
	}
	for(y=0;y< 480;y++)
	{
	k=0;
	for(i=0;i<n;i++)
	{
	if( ((a[i][1]<=y)&&(a[i+1][1]>y))||((a[i][1]>y)&&(a[i+1][1]<=y)))
		{
		xi[k]=(int)(a[i][0]+slope[i]*(y-a[i][1]));
		k++;
		}
	}
	for(j=0;j<k-1;j++)
	for(i=0;i<k-1;i++)
	{
	if(xi[i]>xi[i+1])
		{
		temp=xi[i];
		xi[i]=xi[i+1];
		xi[i+1]=temp;
		}
	}
	for(i=0;i<k;i+=2)
	{
	int temp2;
	if(xi[i]<xi[i+1])
	for(temp2=xi[i];temp2<=xi[i+1];temp2++)
		{
		putpixel(temp2,y,col2);
		}
	else
	for(temp2=xi[i+1];temp2<=xi[i];temp2++)
		{
		putpixel(temp2,y,col2);
		}
	line(xi[i],y,xi[i+1]+1,y);
	}
}/*end of y for*/
}



int main(void)
{
int gdriver=DETECT,gmode;
int i,col1,col2,n,a[20][2];
clrscr();
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
clrscr();
printf("Enter the no. of vertices of polygon : ");
scanf("%d",&n);
printf("Enter the cordinates of polygon\n ");

for(i=0;i<n;i++)
{
printf("\nEnter co-ordinates:\n");
scanf("%d %d",&a[i][0],&a[i][1]);
}
a[n][0]=a[0][0];
a[n][1]=a[0][1];
printf("Enter the border color: ");
scanf("%d",&col1);
printf("Enter the fill color: ");
scanf("%d",&col2);

scanfill(a,col1,col2,n);
getch();
closegraph();
return 0;
}

