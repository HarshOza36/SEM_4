#include<stdio.h>
#include<conio.h>
void bestFit()
{
	int num_memory, i, j, n, n1;
	int flag[10], num_of_process;
	int process[10], mem_access[10];
	int b = 10000;
	int p, value;
	printf("ENTER THE NO OF PROCESSES>>>");
	scanf("%d", &n);
	printf("ENTER THE NO OF MEMORY BLOCKS>>>>");
	scanf("%d", &n1);
	printf("ENTER SIZE OF MEMORY BLOCKS\n");
	for (i = 1;i <= n1;i++)
	{
		printf("Memory size of %d block is>>>>", i);
		scanf("%d", &mem_access[i]);
	}
	printf("\n\nENTER DETAILS OF PROCESS\n\n");
	for (i = 1;i <= n;i++)
	{
		printf("THE PROCESS %d is>>>>", i);
		scanf("%d", &process[i]);
		flag[i] = 0;
	}
	printf("\n\nBefore allocation,Memory is>>>>\n\n");
	for (i = 1;i <= n1;i++)
	{
		printf("%d\t", mem_access[i]);
	}
	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= n1;j++)
		{
			if (mem_access[j] > process[i])
			{
				if (mem_access[j] < b)
				{
					b = mem_access[j];
					value = j;
				}
			}
		}
		if (b == 1000)
		{
			printf("\nProcess %d cannot be allocated\n");
		}
		b = b - process[i];
		printf("\nProcess %d is allocated to meomory %d, after allocating the size is:%d\n", i, value, b);
		b = 10000;
		mem_access[value] = b;
	}
}
void firstFit()
{
	int num_memory, i, j, n, n1, p;
	int flag[10];
	int num_of_process;
	int process[10];
	int mem_access[10];
	printf("ENTER THE NO OF PROCESSES>>>");
	scanf("%d", &n);
	printf("ENTER THE NO OF MEMORY BLOCKS>>>>");
	scanf("%d", &n1);
	printf("ENTER SIZE OF MEMORY BLOCKS\n");
	for (i = 1;i <= n1;i++)
	{
		printf("Memory size of %d block is>>>>>", i);
		scanf("%d", &mem_access[i]);
	}
	printf("\n\nEnter the details of the process\n\n");
	for (i = 1;i <= n;i++)
	{
		printf("The process %d is: ", i);
		scanf("%d", &process[i]);
		flag[i] = 0;
	}
	printf("\n\nBefore allocation,Memory is:\n\n");
	for (i = 1;i <= n1;i++)
	{
		printf("%d\t", mem_access[i]);
	}
	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= n1;j++)
		{
			if (process[i] <= mem_access[j])
			{
				int p;
				mem_access[j] = mem_access[j] - process[i];
				printf("\nProcess %d is allocated to memory %d,Remaining size is %d\n", i, j, mem_access[j]);
				flag[i] = 1;
				break;
			}
		}
		if (flag[i] == 0)
		{
			printf("\nProcess %d cant be allocated any memory size\n", i);
		}
	}
}
void worstFit()
{
	int num_memory, flag[10];
	int i, j, n, n1, num_of_process;
	int process[10];
	int mem_access[10];
	int a, value;
	printf("ENTER THE NO OF PROCESSES>>>");
	scanf("%d", &n);
	printf("ENTER THE NO OF MEMORY BLOCKS>>>>");
	scanf("%d", &n1);
	printf("ENTER SIZE OF MEMORY BLOCKS\n");
	for (i = 1;i <= n1;i++)
	{
		printf("Memory size of %d block is>>>>", i);
		scanf("%d", &mem_access[i]);
	}
	printf("\n\nEnter the details of the process\n\n");
	for (i = 1;i <= n;i++)
	{
		printf("The process %d is: ", i);
		scanf("%d", &process[i]);
		flag[i] = 0;
	}
	printf("\n\nBefore allocation,Memory is>>>>>\n\n");
	for (i = 1;i <= n1;i++)
	{
		printf("%d\t", mem_access[i]);
	}
	for (i = 1;i <= n;i++)
	{
		a = process[i];
		value = 0;
		for (j = 1;j <= n1;j++)
		{
			if (a <= mem_access[j])
			{
				a = mem_access[j];
				value = j;
			}
		}
		if (value == 0)
		{
			printf("\nProcess %d cannot be allocated the memory\n", i);
			break;
		}
		a = a - process[i];
		printf("\nThe process %d is allocated the memory %d,after allocating size is %d\n", i, value, a);
		mem_access[value] = a;
	}
	printf("\nAfter allocating the memory to the process>>>>\n");
	for (i = 1;i <= n1;i++)
	{
		printf("%d\t", mem_access[i]);
	}
}

int main()
{
 int ch; 
 printf("\n********Memory Allocation Techniques**********");
 while(ch!=4)
 {
  printf("\nMenu:");
  printf("\n1.Best Fit   2.First Fit   3.Worst Fit  4.Exit");
  printf("\nEnter your choice>>>>");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:bestFit();
          break;
   case 2:firstFit();
          break;
   case 3:worstFit();
          break;
   case 4:
   	printf("EXIT!!");
   default:printf("Invalid Choice!");	 	     
  }
 }
}

