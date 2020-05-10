#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],m[10],q[10],i,j,c=0,b[10],mc[10],z=0,s[10],x[10];
	printf("---------RESTORING DIVISION ALGORITHM---------");
	printf("\nENTER DIVISOR [M] IN BINARY>>>>>");
	for(i=4;i>=1;i--)
	{	scanf("%d", &m[i]);
		mc[i]=!m[i];
		a[i]=0, x[i]=0;
	}
	x[1]=1,x[5]=0,m[5]=0,mc[5]=1;
	for(i=1;i<=5;i++)
	{	s[i]=x[i]^mc[i]^z;
		c=(x[i]&&mc[i]) || (x[i]&&z) || (mc[i]&&z);
		z=c;
		mc[i]=s[i];
	}
	printf("ENTER DIVIDEND [Q] IN BINARY>>>>>");
	for(i=4;i>=1;i--)
	{	scanf("%d", &q[i]);
	}
	printf("\n\n Step \t\t OPERATION \t\t A \t\tQ\n");
	printf("\n 0\t\t Initialization\t\t  0 0 0 0 0\t ");
	for(i=4;i>=1;i--)
	{	printf(" %d", q[i]);
	}
	for(j=1;j<=4;j++)
	{
		printf("\n\n\n %d", j);
		printf("\t\t SHIFT LEFT A,Q \t ");
		for (i=5;i>=2;i--)
		{	a[i]=a[i-1];
		}
		a[1]=q[4];
		for(i=4;i>=2;i--)
		{	 q[i]=q[i-1];
		}
		for(i=5;i>=1;i--)
		{	 printf(" %d", a[i]);
		}
		printf("\t ");
		for(i=4;i>=2;i--)
		{	 printf(" %d", q[i]);
		}
		z=0;
		for(i=1;i<=5;i++)
		{	s[i]=a[i]^mc[i]^z;
			c=(a[i]&&mc[i]) || (a[i]&&z) || (mc[i]&&z);
			z=c;
			a[i]=s[i];
		}
		printf("\n\n\t\t A =A-M \t\t ");
		for(i=5;i>=1;i--)
		{	printf(" %d", a[i]);
		}
		printf("\t ");
		for(i=4;i>=1;i--)
		{	 printf(" %d", q[i]);
		}
		if(a[5] == 1)
		{
			q[1]=0;
			printf("\n\n\t\tSet Q0=0\t\t");
			for(i=5;i>=1;i--)
			{	printf(" %d", a[i]);
			}
			printf("\t ");
			for(i=4;i>=1;i--)
			{	 printf(" %d", q[i]);
			}
			z=0;
			for(i=1;i<=5;i++)
			{	s[i]= a[i]^m[i]^z;
				c=(a[i]&&m[i]) || (a[i]&&z) || (m[i]&&z);
				z=c;
				a[i]=s[i];
			}
			printf("\n\n\t\t A =A+M \t\t ");
			for(i=5;i>=1;i--)
			{	printf(" %d", a[i]);
			}
			printf("\t ");
			for(i=4;i>=1;i--)
			{	 printf(" %d", q[i]);
			}
		}
		else
		{	 q[1]=1;
			 printf("\n\n\t\tSet Q0=1\t\t");
			for(i=5;i>=1;i--)
			{	printf(" %d", a[i]);
			}
			printf("\t ");
			for(i=4;i>=1;i--)
			{	 printf(" %d", q[i]);
			}
		}
		
	}
	printf("\n\n\nQuotient [Q] >>>>>");
	for(i=4;i>=1;i--)
	{	 printf(" %d", q[i]);
	}
	printf("\n\nRemainder [A] >>>>>");
	for(i=4;i>=1;i--)
	{	 printf(" %d", a[i]);
	}
	getch();
}

