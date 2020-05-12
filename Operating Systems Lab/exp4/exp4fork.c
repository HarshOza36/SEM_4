#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
	printf("MY PROCESS ID IS %d \n",(int) getpid());
	pid_t pid=fork();
	printf("FORK RETURNED =%d \n",(int) pid);
	if(pid<0)
	{printf("FORK HAS FAILED\n");}
	if(pid==0)
	{printf("I HAVE CHILD PROCESS WITH PID %d\n",(int) getpid());
	 printf("PARENT ID IS %d\n",(int) getppid());	
	}
	else{
	wait(NULL);
	printf("CHILD COMPLETE");
	}
	return 0;
}
/*
output:
[student@PC-17 ~]$ cc exp4fork10.c
[student@PC-17 ~]$ ./a.out
MY PROCESS ID IS 5472 
FORK RETURNED =5473 
FORK RETURNED =0 
I HAVE CHILD PROCESS WITH PID 5473
PARENT ID IS 5472
CHILD COMPLETE[student@PC-17 ~]$ 
	

*/
