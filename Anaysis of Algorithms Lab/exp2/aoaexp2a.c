#include<stdio.h>
#include<conio.h>
int size,list[100],pass=1;
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x = *y;
    *y = temp;
}
void quicksort(int list[],int m,int n){
    int key,i,j,k;
    if(m<n){
        k=m;
        swap(&list[m],&list[k]);
        key=list[m];
        i=m+1;
        j=n;
		while(i<=j){
            while((i<=n)&&(list[i]<=key))
                i++;
            while((j>=m)&&(list[j]>key))
                j--;
            
            if(i<j)
                swap(&list[i],&list[j]);
        }
		swap(&list[m],&list[j]);
		printf("\nPass>>> %d\n",pass);
		pass++;
        for(i=0;i<size;i++){
            printf("%d  ",list[i]);
		}
			
        quicksort(list,m,j-1);
        quicksort(list,j+1,n);
    }
}
int main(){
	int n,i;
	printf("_______________QUICKSORT_________________");
    printf("\nEnter the number of elements>>>>");
    scanf("%d",&n);
    printf("\nEnter %d elements>>>\n ",n);
	for(i=0;i<n;i++)
        scanf("%d",&list[i]);	 
	size=n;
	quicksort(list,0,n-1);
	printf("\nThe list after sorting is>>>>>\n");
    for(i=0;i<n;i++)
        printf("%d  ",list[i]);
	
    return 0;}

