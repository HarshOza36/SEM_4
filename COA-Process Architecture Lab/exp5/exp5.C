#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<math.h>
 
int get(int a)
{
char ch='B';
int flag=0;
if(a==1)
ch='A';
do
{
printf("ENTER VALUE OF %c: ",ch);
scanf("%d",&a);
if(a< 0)
{
a = a * -1;
flag = 1;
}
if(8<=a)
printf("\n\t!INVALID NUMBER.ENTER VALUE (-8 < A < 8)!\n");
}while(8<=a);
if(flag)
a = a *-1;
return(a);
}

void add(int *a,int *b)
{
int x,i,c=0;
for(i=3;i>=0;i--)
{
x=a[i];
a[i]=c^x^b[i];
if(((c==1)&&(x==1))||((x==1)&&(b[i]==1))||((b[i]==1)&&(c==1)))
c = 1;
else
c = 0;
}
}

void binary(int x,int*arr)
{
int i,p=x,c[4]={0,0,0,1};
for(i=0;i<4;i++)
arr[i] = 0;
if(x < 0)
x = x *-1;
i = 3;
do
{
arr[i]=x%2;
x = x/2;
i--;
}while(x!=0);
if(p<0)
{
for(i=0;i<4;i++)
arr[i]=1-arr[i];
add(arr,c);
}
printf("\n\nTHE BINARY EQUIVALENT OF %d IS : ",p);
for(i=0;i<4;i++)
printf("%d",arr[i]);
}

void rshift(int x,int *y)
{
int i;
for(i=3;i>0;i--)
y[i] = y[i-1];
y[0] = x;
}

int main()
{

int q=0,i,j,a,b,A[4]={0,0,0,0},C[4]={0,0,0,1},C1[8]={0,0,0,0,0,0,0,1};
int s=0,z=0,Q[4],M[4],temp,temp1[4],ans[8],y,x=0,c=0;
printf("----------------------------------------------------------------------\n");
printf("----------------------------------------------------------------------\n");
printf("\n\n\t\tBOOTHS MULTIPLICATION ALGORITHM \n");
printf("\n----------------------------------------------------\n");
a=get(1);
b=get(0);
printf("\n---------------------------------------------------\n");
binary(a,M);
binary(b,Q);
printf("\n---------------------------------------------------\n");
printf("OPERATION\t\t A\t Q\tQ'\t M");
printf("\n\n INITIAL\t\t");
for(i=0;i<4;i++)
printf("%d",A[i]);
printf("\t");
for(i=0;i<4;i++)
printf("%d",Q[i]);
printf("\t");
printf("%d\t",q);
for(i=0;i<4;i++)
printf("%d",M[i]);
for(j=0;j<4;j++)
{
if((Q[3]==0)&&(q==1))
{
printf("\n A:=A+M \t\t");
add(A,M);
for(i=0;i< 4;i++)
printf("%d",A[i]);
printf("\t");
for(i=0;i< 4;i++)
printf("%d",Q[i]);
printf("\t%d\t",q);
for(i=0;i< 4;i++)
printf("%d",M[i]);
}
if((Q[3]==1)&&(q==0))
{
printf("\n A:=A-M \t\t");
for(i=0;i<4;i++)
temp1[i] = 1-M[i];
add(temp1,C);
add(A,temp1);
for(i=0;i< 4;i++)
printf("%d",A[i]);
printf("\t");
for(i=0;i< 4;i++)
printf("%d",Q[i]);
printf("\t%d\t",q);
for(i=0;i< 4;i++)
printf("%d",M[i]);
}
printf("\n Shift \t\t\t");
y = A[3];
q = Q[3];
rshift(A[0],A);
rshift(y,Q);
for(i=0;i<4;i++)
printf("%d",A[i]);
printf("\t");
for(i=0;i<4;i++)
printf("%d",Q[i]);
printf("\t");
printf("%d\t",q);
for(i=0;i<4;i++)
printf("%d",M[i]);
}
printf("\n\n---------------------------------------------------\n");
printf("\nTHE ANSWER IN BINARY IS : ");
for(i=0;i<4;i++)
ans[i]=A[i];
for(i=0;i<4;i++)
ans[i+4]=Q[i];
if(((a< 0)&&(b>0))||((a>0)&&(b< 0)))
{
for(i=0;i<8;i++)
ans[i]=1-ans[i];
for(i=7;i>=0;i--)
{
x = ans[i];
ans[i]=c^x^C1[i];
if(((c==1)&&(x==1))||((x==1)&&(C1[i]==1))||((C1[i]==1)&&(c==1)))
c=1;
else
c=0;
}
}
for(i=0;i<8;i++)
printf("%d",ans[i]);
for(i=7;i>=0;i--)
{
s = s + (pow(2,z) * ans[i]);
z = z+1;
}
if(((a< 0)&&(b>0))||((a>0)&&(b< 0)))
printf("\nTHE ANSWER IN DECIMAL IS : -%d\n",s);
else
printf("\nTHE ANSWER IN DECIMAL IS : %d\n",s);
getch();
}

