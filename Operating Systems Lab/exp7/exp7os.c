#include<stdio.h>
#include<conio.h>
int main()
{
	int k = 0,op, output[10], d = 0, t = 0, ins[5], i, avail[5], allocated[10][5], need[10][5], MAX[10][5], pno, P[10], j, rz,rz1, count = 0;
	printf("*****************BANKERS ALGORITHM****************");
	printf("\nEnter the NUMBER OF RESOURCES>>>");
	scanf("%d", &rz);
	rz1=rz;
	printf("Enter the max instances of each resources>>>\n");
	for (i = 0;i < rz;i++)
	{
		avail[i] = 0;
		printf("%c= ", (i + 97));
		scanf("%d", &ins[i]);
	}
	printf("\nEnter the NUMBER OF PROCESSES>>>");
	scanf("%d", &pno);
	op=pno;
	printf("\nEnter the ALLOCATION MATRIX>>>\n     ");
	for (i = 0;i < rz;i++)
		printf(" %c", (i + 97));
	printf("\n");
	for (i = 0;i < pno;i++)
	{
		P[i] = i;
		printf("P[%d]  ", P[i]);
		for (j = 0;j < rz;j++)
		{
			scanf("%d", &allocated[i][j]);
			avail[j] += allocated[i][j];
		}
	}
	printf("\nEnter the MAX MATRIX>>>\n     ");
	for (i = 0;i < rz;i++)
	{
		printf(" %c", (i + 97));
		avail[i] = ins[i] - avail[i];
	}
	printf("\n");
	for (i = 0;i < pno;i++)
	{
		printf("P[%d]  ", i);
		for (j = 0;j < rz;j++)
			scanf("%d", &MAX[i][j]);
	}
	printf("\n");
	printf("\nENTER AVAILABLE RESOURCES>>>>\n");
	for (i = 0;i < rz;i++)
	{
		printf("%c ", (i + 65));
	}
	printf("\n");
	for(i=0;i<rz;i++)
	{
	 scanf("%d",&avail[i]);
	}	 
/*A:
	d = -1;*/
while(d!=-1){
     d=-1;	  
	for (i = 0;i < pno;i++)
	{
		count = 0;
		t = P[i];
		for (j = 0;j < rz;j++)
		{
			need[t][j] = MAX[t][j] - allocated[t][j];
			if (need[t][j] <= avail[j])
				count++;
		}
		if (count == rz)
		{
			output[k++] = P[i];
			for (j = 0;j < rz;j++)
				avail[j] += allocated[t][j];
		}
		else
			P[++d] = P[i];
	}
	pno = d + 1;
	}
	printf("NEED MATRIX\n");
	for(i=0;i<op;i++)
	{	printf("P[%d]\t",i);	
		for(j=0;j<rz1;j++)
		{	need[i][j] = MAX[i][j] - allocated[i][j];
			printf("%d ",need[i][j]);
		}
		printf("\n");
	}	 
/*	  if (d != -1)
	{
		pno = d + 1;
		goto A;
	}*/
	printf("THE SAFE SEQUENCE IS>>>>\n");
	printf("\t <");
	for (i = 0;i < k;i++)
		printf(" P[%d] ", output[i]);
	printf(">");
	
}

