#include<stdio.h>
#include<string.h>
char txt[100],pat[100];
int M ,N ,lps[100],j=0,i=0;
int count=0,a=0;
void computeLPSArray()
{
  int len = 0, i;
  lps[0] = 0;
  i = 1;
  while(i < M)
  {
   if(pat[i] == pat[len])
   {
	   len++;
	   lps[i] = len;
	   i++;
   }
   else
   {
	   if( len != 0 )
	     len = lps[len-1];
	   else
	   {
	     lps[i] = 0;
	     i++;
	   }
	}
  }
  printf("THE PREFIX ARRAY>>>\n");
  for(i=0;i<M;i++)
  	printf("%d |",lps[i]);
  printf("\n");
}
void KMPSearch()
{
  int j=0,i=0;
  M = strlen(pat);
  N = strlen(txt);
  computeLPSArray();
  while(i < N)
  {
  if(pat[j] == txt[i])
  {
    j++;
    i++;
  }

  if (j == M)
  {
    printf("PATTERN FOUND AT INDEX>>>>>%d\n",i-j);
    j = lps[j-1];
	count=count+1;
	a=count;
  }
  else if(pat[j] != txt[i])
  {
    if(j != 0)
   j = lps[j-1];
    else
   i = i+1;
  }
  }
  printf("NUMBER OF VALID SHIFTS >>>%d",a);
}

int main()
{printf("**********KNUTH MORRIS PRATT*********");
 printf("\nENTER THE TEXT>>>>");
 gets(txt);
 printf("ENTER THE PATTERN>>>>");
 gets(pat);
 KMPSearch();
 return 0;
}
/*output:-
ENTER THE TEXT    : Welcome To CampusCoke
ENTER THE PATTERN : C
Found pattern at index 11
Found pattern at index 17*/

