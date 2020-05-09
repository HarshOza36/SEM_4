#include<stdio.h>
#include<conio.h>
int pass=0,n;
void MergeSort(int a[],int p,int r);
void Merge(int a[],int p,int q,int r);
void MergeSort(int a[],int p,int r)
{	int i,q;
	if(p<r)
	{	q=(p+r)/2;
		MergeSort(a,p,q);
		MergeSort(a,q+1,r);
		Merge(a,p,q,r);
		printf("\npass: %d>>>\n",pass);
		pass++;
		for(i=0;i<n;i++)
		{printf("%d    ",a[i]);}
	}
}
void Merge(int a[],int p,int q,int r)
{
	int b[20];   
    int i,j,k;
    k=0;
    i=p;
    j=q+1;
    while(i<=q && j<=r)
    {
        if(a[i]<a[j])
        {
            b[k++]=a[i++];    
        }
        else
        {
            b[k++]=a[j++];
        }
    }
  
    while(i<=q)
    {
        b[k++]=a[i++];
    }
  
    while(j<=r)
    {
        b[k++]=a[j++];
    }
  
    for(i=r;i>=p;i--)
    {
        a[i]=b[--k];  
    } 	   
}
int main()
{	int a[100],i;
printf("__________________MERGESORT___________________");
    printf("\nEnter number of elements: ");
    scanf("%d",&n);
    printf("Enter the array >>>>>");
    
	for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
    MergeSort(a,0,n-1);
    printf("\nSorted array is >>>>> \t");
    for(i=0;i<n;i++)
    {
    	printf("%d,",a[i]);
		
	}
	return 0; 
}

