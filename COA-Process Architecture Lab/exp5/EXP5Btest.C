#include<stdio.h>
#include<conio.h>
#define s 100
void rshift(int x,int y[]){
	int i;
	for(i=3;i>0;i--)
	y[i] = y[i-1];
	y[0] = x;
}
void add(int c,int d){
	int i;
	for(i=0;i<3;i++)
	{
		if(c==0&&d==1 || c==1&&d==0)
			return 1;
		else
			return 0;
	}
}
void binary(int n){
	int bn[1000];
	int i=0,j;
	while(n>0)
	{
		bn[i]=n%2;
		n=n/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{	printf("  %d",bn[j]);
	}
}
void main(){
	int q,q0,q_1=0,i,j,k,m,a=0;
	clrscr();
	printf("ENTER 4bit NUMBER MULTIPLICAND");
	scanf("%d",&m);
	binary(m);
	printf("\nENTER 4bit NUMBER MULTIPLIPLIER");
	scanf("%d",&q);
	binary(q);
	if(q==0 && q_1==0 || q==1 && q_1==1)
		rshift(a,q)
	else if(q==0 &&)
	getch();
}