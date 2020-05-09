#include<stdio.h>
#include<conio.h>
#define s 100
int main(){
	int ch,a[s],n,i;
	printf("Enter the limit for the array>>>>"); 
	scanf("%d",&n);
	printf("ENTER THE ARRAY NOW>>>");
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);
	}
	do{
		printf("\n_________________MENU_________________");
		printf("\n1.SELECTION SORT    2.INSERTION SORT  3.EXIT\n");
		printf("\nENTER CHOICE\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			select_sort(a,n);
			break;
			case 2:
			insert_sort(a,n);
			break;
			case 3:
			printf("EXIT!\n");
			default:
			printf("INVALID CHOICE");
		
		}
	}while(ch!=3);
	
	
}
int insert_sort(int a[], int n){
	int pass=0,temp,i,j;
	for(j=0;j<n;j++)
	{
		temp=a[j];
		i=j-1;
		while(i>=0 && a[i]>temp)
		{
			a[i+1]=a[i];
			i--;
			
		}
		a[i+1]=temp;
		printf("\npass: %d>>>>",++pass);
		for(i=0;i<n;i++)
		{printf(" %d ",a[i]);}
	} 
		printf("\nTHE SORTED ARRAY IS>>>>   ");
	for(i=0;i<n;i++)
	{	printf(" %d ",a[i]);
	}
}

int select_sort(int a[],int n)
{
	int large,i,k,j,pass=0,pos;
	for(i=n-1;i>=0;i--)
	{
		large=a[0];
		pos=0;
		for(j=1;j<=i;j++)
		{
			if(a[j]>large)
			{large=a[j];
			pos=j;
			}
		}
		a[pos]=a[i];
		a[i]=large;
		printf("\npass:%d\n",++pass);
		for(k=0;k<n;k++)
		{printf(" %d ",a[k]);}
	}
	printf("\nTHE SORTED ARRAY IS>>>>   ");
	for(i=0;i<n;i++)
	{	printf(" %d ",a[i]);
	}
}

