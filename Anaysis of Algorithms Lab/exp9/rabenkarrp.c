#include<stdio.h>
#include<string.h> 
#define d 256
int count=0,a=0; 
void search(char pat[], char txt[], int q)
{	int M = strlen(pat);
    int N = strlen(txt);
    int i, j;
    int p = 0; 
    int t = 0; 
    int h = 1;
 
    for (i = 0; i < M-1; i++)
        h = (h*d)%q;
 
    for (i = 0; i < M; i++)
    {
        p = (d*p + pat[i])%q;
        t = (d*t + txt[i])%q;
    }
 
    
    for (i = 0; i <= N - M; i++)
    {
 
        
        if ( p == t )
        {
            
            for (j = 0; j < M; j++)
            {
                if (txt[i+j] != pat[j])
                    break;
            }
            if (j == M)
                {printf("PATTERN FOUND AT INDEX>>>>%d \n", i);
				count=count+1;
				a=count;
				}
        }
 
        
        if ( i < N-M )
        {
            t = (d*(t - txt[i]*h) + txt[i+M])%q;
 
            
            if (t < 0)
            t = (t + q);
        }
    }
printf("\nTOTAL VALID SHIFTS>>>>%d",a);
}
 

int main()
{   char txt[80],pat[80];
    int q;
	printf("*******RABEN KARP STRING MATCHING*************");
    printf("\nENTER THE LENGTH OF TEXT>>>");
    scanf("%d",&q);
	printf("\nENTER THE TEXT>>>");
    scanf("%s",txt);
    printf("\nENTER A PATTERN>>>");
    scanf("%s",&pat);
    
    search(pat, txt, q);
    return 0;
}

