#include <stdio.h>
#include<conio.h>
#define INF 999
#define MAX 10

void display(int arr[][MAX], int n);

void displays(int arr[][MAX], int n);
void floyds(int D[][MAX], int S[][MAX], int n);

int main()
  {
  
  int n,i,j,D[MAX][MAX],S[MAX][MAX];   
  printf("\n-------------Floyd Warshall's Algorithm-----------");
  printf("\nEnter the number of vertices:");
  scanf("%d",&n);
  printf("\nEnter Adjacency Matrix:\n");
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
	{
	 scanf(" %d",&D[i][j]);
	}

   }
  printf("\nEnter Source Matrix:\n");
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
	{
	 scanf(" %d",&S[i][j]);
	}
   }
  
  floyds(D, S, n);
  
  return 0;
}

void floyds(int D[][MAX], int S[][MAX], int n) {
  int i, j, k, l;
  
  
  int Dk[MAX][MAX], Sk[MAX][MAX];
  
  
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      if(i == j) {
       
	    Dk[i][j] = 0;
        Sk[i][j] = INF;
      } else {
        Dk[i][j] = 0;
        Sk[i][j] = 0;
      }
    }
  }
  
  
  
  for(k = 0; k < n; k++) {
    
    
    for(l = 0; l < n; l++) {
      
      Dk[k][l] = D[k][l];
      Sk[k][l] = S[k][l];
      
      
      Dk[l][k] = D[l][k];
      Sk[l][k] = S[l][k];
    }
    
    
    for(i = 0; i < n; i++) {
      
      
      if(i == k) {
        continue;
      }
        
      for(j = 0; j < n; j++) {
        
        
        if(j == k) {
          continue;
        }
        
        if(i == j) {
          continue;
        }
        
        
        if(D[i][j] > D[i][k] + D[k][j]) {
          Dk[i][j] = D[i][k] + D[k][j];
          Sk[i][j] = (k+1);  
        } else {
          Dk[i][j] = D[i][j];
          Sk[i][j] = S[i][j];
        }
      }
    }
    
    
    for(i = 0; i < n; i++) {
      for(j = 0; j < n; j++) {
        D[i][j] = Dk[i][j];
        S[i][j] = Sk[i][j];
      }
    }
  }
  
  
  printf("Distance array: \n");
  display(D, n);
  printf("Source array: \n");
  displays(S, n);
}

void display(int arr[][MAX], int n) {
  int i, j;
  	for(i=0;i<n;i++)
 	{
  		for(j=0;j<n;j++)
   		if(arr[i][j]==INF)
    		printf("INF\t");
  		else
    		printf("%10d\t", arr[i][j]);
 		printf("\n");
	}
 
}
void displays(int arr[][MAX], int n) {
  int i, j;
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      if(arr[i][j] == INF) {
        printf("%10s\t","N");
      } else {
        printf("%10d\t", arr[i][j]);
      }
    }
    printf("\n");
  }
}


