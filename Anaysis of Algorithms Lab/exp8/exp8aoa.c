#include<stdio.h>
#include<conio.h>
int w[20],a=1,total,n;
int x[20];
int sumsubset(int s, int k, int r)
{	int i;
	x[k]=1;
	if(s+w[k]==total)
	{	printf("SUBSET[%d]>>>{",a++);
		for(i=0;i<n;i++)
			{	printf("%d ",x[i]);
			}
		printf("}\n");
		for(i=k;i<n;i++)
			x[i]=0;	   
	}
	else if((s+w[k]+w[k+1])<=total)
		sumsubset(s+w[k],k+1,r-w[k]);	 
	if(((s+(r-w[k])>=total) && ((s+w[k+1])<=total)))
	{	x[k]=0;	   
		sumsubset(s,k+1,r-w[k]);
	}	 	 	 	 	 
	return 0;
}
int main()
{	int sum=0,temp,i,j;
	printf("***************SUM OF SUBSETS USING BACKTRACKING***************\n");
	printf("ENTER THE NUMBER OF ELEMENTS>>>>");
	scanf("%d",&n);
	printf("ENTER THE ELEMENTS>>>>\n");
	for(i=0;i<n;i++)
		scanf("%d",&w[i]);
	
	for (i=0;i<=n;i++)
		for (j=0;j<n-1;j++)
	   	if(w[j]>w[j+1])
	    {
			temp=w[j];
			w[j]=w[j+1];
			w[j+1]=temp;
		}
	for(i=0;i<n;i++)
		sum=sum+w[i];
	printf("ENTER SUM VALUE FOR THE SUBSET>>>>");
	scanf("%d",&total);
	if(sum < total)
 	{	printf("SORRY!!!NO SUBSETS POSSIBLE!!! ");
		 
 	}
	else
	{
 	printf("ALL SUBSETS POSSIBLE ARE>>>>\n");
 	sumsubset(0,0,sum);
	}
}
	

