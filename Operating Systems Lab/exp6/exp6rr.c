#include<stdio.h> 
#include<conio.h> 
int main(){ 
      int i,limit,total=0,x,count=0,quantum; 
      int wait_time=0,turnaround_time=0,arrival_time[10],burst_time[10],temp[10]; 
      float awt,atat;
      printf("-----------------ROUND ROBIN-----------------");
	  printf("\nENTER NUMBER OF PROCESSES>>>>"); 
      scanf("%d",&limit); 
      x=limit; 
      for(i=0;i<limit;i++) 
      {
            printf("\nENTER DETAILS OF Process[%d]\n",i+1);
            printf("ARRIVAL TIME>>>>");
            scanf("%d", &arrival_time[i]);
            printf("CPU BURST TIME>>>>");
            scanf("%d", &burst_time[i]); 
            temp[i]=burst_time[i];
      } 
      printf("\nENTER TIME QUANTUM>>>"); 
      scanf("%d", &quantum); 
      printf("\nPROCESS ID\t\tBURST TIME\t TURNAROUND TIME\t WAITING TIME\n");
      for(total=0,i=0;x!= 0;) 
	  
      { 
            if((temp[i] <= quantum) && temp[i] > 0) 
            { 
                  total=total+temp[i]; 
                  temp[i]=0; 
                  count=1; 
            } 
            else if(temp[i]>0) 
            { 
                  temp[i]=temp[i]-quantum; 
                  total=total+quantum; 
            } 
            if(temp[i]==0 && count==1) 
            { 
                  x--; 
                  printf("\nPROCESS[%d]\t\t%dms\t\t %dms\t\t\t %dms",i+1,burst_time[i],total-arrival_time[i],total-arrival_time[i]-burst_time[i]);
                  wait_time = wait_time + total - arrival_time[i] - burst_time[i]; 
                  turnaround_time = turnaround_time + total - arrival_time[i]; 
                  count=0; 
            } 
            if(i==limit-1) 
            {
                  i=0; 
            }
            else if(arrival_time[i+1] <= total) 
            {
                  i++;
            }
            else 
            {
                  i=0;
            }
      } 
      awt= wait_time*(1.0/limit);
      atat= turnaround_time*(1.0/limit);
      printf("\nAVERAGE WAITING TIME>>>>>%.2f", awt); 
      printf("\nAVERAGE TURNAROUND TIME>>>>>%.2f", atat); 
      return 0; 
}

