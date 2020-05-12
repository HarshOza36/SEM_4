#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[10],b[10],t[10],w[10],gantt[10],i;
	float att=0,awt=0;
    for(i=0;i<10;i++)
    {
    	a[i]=0; 
		b[i]=0; 
		w[i]=0; 
		gantt[i]=0;
    }
	printf("Enter the no. of process>>>");
    scanf("%d",&n);
	printf("Enter the BURST TIME>>>");
    for(i=0;i<n;i++)
    	{scanf("%d",&b[i]);}
    printf("Enter the ARRIVAL TIME>>>");
    for(i=0;i<n;i++)
    	{scanf("%d",&a[i]);}
    gantt[0]=0;
    for(i=0;i<10;i++)
    	{gantt[i+1]=gantt[i]+b[i];}
    for(i=0;i<n;i++)
    {    
		w[i]=gantt[i]-a[i];
        t[i]=gantt[i+1]-a[i];
        awt=awt+w[i];
        att=att+t[i]; 
    }
    awt =awt/n;
    att=att/n;
     printf("\nPROCESS\t\tWAITING TIME\tTURNAROUND TIME\t\tARRIVAL TIME\n");
  for(i=0;i<n;i++)
    {
      printf("ProcessNo:%d\t\t%dms\t\t%dms\t\t%dms\n",i,w[i],t[i],a[i]);
    }
	printf("\nAverage WAITING TIME>>>>>%f ms\n",awt);
	printf("Average TURNAROUND TIME>>>>>%f ms\n",att);
	getch();
}

