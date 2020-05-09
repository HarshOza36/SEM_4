#include<stdio.h>
#include<conio.h>
int x[50],g[50][50],n,i,j,m;
void next_value(int k)
{	while(1)
	{	x[k]=(x[k]+1)%(m+1);
		if(x[k]==0)
			return;
		for(j=1;j<=n;j++)
		{
			if(g[k][j]!=0&&(x[k]==x[j]))
				break;
		}
		if(j==n+1)
			return;
	}
}
void coloring(int k)
{	do
	{	next_value(k);
		if(x[k]==0)
			return;
		if(k==n)
		{
			for(i=1;i<=n;i++)
				/*printf("||V{%d}=COLOR{%d}||",i,x[i]);*/
				printf("%d|",x[i]);
				printf("\n");
		}
		else
			coloring(k+1);
		}while(k<n+1);
}
int main()
{
	int e,k,l;
	printf("GRAPH COLORING USING BACKTRACKING\n");
	printf("ENTER NUMBER OF VERTICES>>>>");
	scanf("%d",&n);
	printf("ENTER NUMBER OF EDGES>>>>");
	scanf("%d",&e);
	m=n-1;
	printf("\nThe maximum possible colours that can be assigned are: %d",m);
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			g[i][j]=0;
		}
	}
	printf("\nENTER ADJACENCY MATRIX>>>\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&g[i][j]);
		}
	}
	/*for(i=0;i<=n;i++)
		for(j=0;j<=n;j++)
		g[i][j]=0;
		printf("\nENTER u AND v OF AN EDGE\n");
	for(i=1;i<=e;i++)
	{
		printf("\nFOR EDGE %d\n",i);
		scanf(" %d %d",&k,&l);
		g[k][l]=1;
		g[l][k]=1;
	}*/
	for(i=0;i<=n;i++)
		{x[i]=0;}
	printf("\nThe COLORING POSSIBILITIES ARE>>>>\n");
		coloring(1);
	getch();
	return 0;
}

