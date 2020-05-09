#include<stdio.h>
#include<conio.h>
float temp;
int knapsack(int n, float weight[],int item[], float profit[], float capacity)
{
	float x[20];
	float tp = 0.0;
	int i, j, u;
	u = capacity;
	for (i = 0; i < n; i++)
	{
		x[i] = 0.0;
	}
	for (i = 0; i < n; i++)
	{
		if (weight[i] > u)
			break;
		else
		{
				x[i] = 1.0;
				tp = tp + profit[i];
				u = u - weight[i];
		 }
	}
	if (i < n)
		x[i] = u / weight[i];
		tp = tp + (x[i] * profit[i]);
	printf("\nOPTIMAL SOLUTION is>>>>");
	for (i = 0; i < n; i++)
	{
		for(j=i+1;j<n;j++)
		{
			  if(item[i]>item[j])
			  {
				temp=item[i];
				item[i]=item[j];
				item[j]=temp;

				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			 }
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%.2f\t", x[i]);
	}
	printf("\nTOTAL PROFIT is>>>>%.2f", tp);
	return(0);
}
int main()
{
	 float weight[20], profit[20], capacity;
	 int num,item[20] ,i, j,k=1;
	 float ratio[20];
	 printf("ENTER THE NUMBER OF ITEMS>>>>");
	 scanf("%d", &num);
	 for (i = 0; i < num; i++)
	 {
		printf("ENTER THE PROFITS AND WEIGHTS ITEM no.%d: ",k);
		scanf(" %f %f", &profit[i],&weight[i]);
		item[i]=i;
		k++;
	 }
	for (i = 0; i < num; i++)
	{
		 ratio[i] = profit[i] / weight[i];

	}
	/*printf("\tITEMS  \t\tPROFIT    \t\tWEIGHT    \t\tPROFIT/WEIGHT\n");
	for(i=0;i<num;i++)
	{
		printf("\t%d\t%.2f\t%.2f\t%.2f",m,profit[i],weight[i],ratio[i]);
		m++;
	} */
	printf("\nSIZE OF KNAPSACK>>>>");
	scanf("%f", &capacity);
	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{
				if (ratio[i] < ratio[j])
			 {
					temp = ratio[j];
					ratio[j] = ratio[i];
					ratio[i] = temp;
					temp = weight[j];
					weight[j] = weight[i];
					weight[i] = temp;
					temp = profit[j];
					profit[j] = profit[i];
					profit[i] = temp;
					temp=item[j];
					item[j]=item[i];
					item[i]=temp;
			}
		}
	}
	knapsack(num, weight,item,profit, capacity);
	getch();
	return(0);
}

