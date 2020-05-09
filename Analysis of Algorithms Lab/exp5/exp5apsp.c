#include<stdio.h>
#include<conio.h>
#define infi 999
#define MAX 10
void display(int arr[][MAX], int size);
void floyds(int D[][MAX], int S[][MAX], int size);
int main() {
	int i,j,D[MAX][MAX],S[MAX][MAX],size;
	printf("*********FLOYDS WARSHALL ALGORITHM********\n");
	printf("ENTER THE VERTICES>>");
	scanf("%d",&size);
	printf("ENTER ADJACENCY MATRIX>>>");
	for(i=0;i<size;i++)
	{	for(j=0;j<size;j++)
		{	scanf("%d",&D[i][j]);}
	}
	printf("ENTER PI MATRIX>>>");
	for(i=0;i<size;i++)
	{	for(j=0;j<size;j++)
		{	scanf("%d",&S[i][j]);}
	}
  floyds(D, S, size);
  return 0;
}
void floyds(int D[][MAX], int S[][MAX], int size) {
	int i, j, k, l;
	int Dk[MAX][MAX], Sk[MAX][MAX];
 	for(i=0; i<size;i++) {
    	for(j=0;j<size;j++) {
      	if(i == j) {
       	 	Dk[i][j]=0;
        	Sk[i][j]=infi;
      	} else {
        	Dk[i][j]=0;
        	Sk[i][j]=0;
      }
    }
  }
  	for(k=0;k<size;k++) {
		for(l=0;l<size;l++) {
      
      	Dk[k][l] = D[k][l];
      	Sk[k][l] = S[k][l];
      	Dk[l][k] = D[l][k];
      	Sk[l][k] = S[l][k];
    }
	for(i=0;i<size;i++) {
		if(i==k) {
        continue;
      }
    for(j=0;j<size;j++) {
       if(j==k) {
          continue;
        }
      	if(i==j) {
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
    for(i = 0; i < size; i++) {
      for(j = 0; j < size; j++) {
        D[i][j] = Dk[i][j];
        S[i][j] = Sk[i][j];
      }
    }
  }
  printf("DISTANCE ARRAY>>>\n");
  display(D, size);
  printf("PI MATRIX>>>\n");
  display(S, size);
}

void display(int arr[][MAX], int size) {
  int i, j;
  for(i = 0; i < size; i++) {
    for(j = 0; j < size; j++) {
      if(arr[i][j] == infi) {
        printf("N ");
      } else {
        printf("%d ", arr[i][j]);
      }
    }
    printf("\n");
  }
}
 /*INPUT MATRICES:
 	D[MAX][MAX] = {
    {0, 3, 8, infi,-4},
    {infi,0, infi, 1, 7},
    {infi, 4, 0, infi,infi},
    {2, infi, -5,0, infi},
	{infi,infi,infi,6,0}
  };
  S[MAX][MAX] = {
    {infi, 1,1,infi,1},
    {infi,infi,infi,2,2},
    {infi, 3, infi,infi, infi},
    {4,infi, 4, infi,infi
	},
	{infi,infi,infi,5,infi}
  };*/  

