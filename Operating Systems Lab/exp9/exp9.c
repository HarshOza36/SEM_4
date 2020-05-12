#include<stdio.h>
#include<conio.h>
#include<math.h>
#define n 100
#define LOW 0
#define HIGH 199
int fcfs(int track[],int head,int m){
	int i,j,dloc,headmove=0;
	for(i=0; i<m; i++){
	    if(head == track[i]){
	    dloc = i;
	    break;
    	}
    }
	if(abs(head-LOW) <= abs(head-HIGH)){
		for(j=dloc; j>=0; j--){
	        printf("%d --> ",track[j]);
	    }
	    for(j=dloc+1; j<m; j++){
	        printf("%d --> ",track[j]);
	    }
	
	} 
	else{
		for(j=dloc+1; j<m; j++){
	          printf("%d --> ",track[j]);
	    }
	    for(j=dloc; j>=0; j--){
	          printf("%d --> ",track[j]);
	    }
    }
	for(i=0;i<m;i++){	 
		headmove=(headmove)+abs(head-track[i]);
		head=track[i];
	}
	printf("\nHEAD MOVEMENT TOTAL>>>>%d",headmove);
}
int scan(int track[],int head,int m){
	int i,j,headmove=0,max;
	int temp, sum;
	int dloc; 
	track[m] = head; 
  	m++;
	for(i=0; i<m;i++){
    	for(j=i; j<m; j++){
		      if(track[i]>track[j]){
		        temp = track[i];
		        track[i] = track[j];
		        track[j] = temp;
		      }
    	}
  	}
	max = track[m-1];
	for(i=0; i<m; i++){
	    if(head == track[i]){
	    dloc = i;
	    break;
    	}
    }
	if(abs(head-LOW) <= abs(head-HIGH)){
		for(j=dloc; j>=0; j--){
	        printf("%d --> ",track[j]);
	    }
	    for(j=dloc+1; j<m; j++){
	        printf("%d --> ",track[j]);
	    }
	
	} 
	else{
		for(j=dloc+1; j<m; j++){
	          printf("%d --> ",track[j]);
	    }
	    for(j=dloc; j>=0; j--){
	          printf("%d --> ",track[j]);
	    }
    }
	sum  = head + max;
  	printf("\nHEAD MOVEMENT TOTAL>>>>%d", sum);
	return 0;
}
int main(){
	int ch,i,m,tracks[n],head;
	printf("DISK SCHEDULING ALGORITHM FCFS & SCAN\n");
	printf("ENTER THE NUMBER OF TRACKS>>>");
	scanf("%d",&m);
	printf("ENTER THE TRACKS>>>");
	for(i=0;i<m;i++)
	{	scanf("%d",&tracks[i]);}
	printf("ENTER THE STARTING HEAD>>>");
	scanf("%d",&head);
	do{
		printf("\n----------------MENU---------------\n");
		printf("1.FCFS 2.SCAN 3.EXIT\n");
		printf("ENTER YOUR CHOICE\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
			fcfs(tracks,head,m);
			break;
			case 2:
			scan(tracks,head,m);
			break;
			case 3:
			printf("EXIT!!!");
			break;
			default:
			printf("INVALID CHOICE!!!!!");
		}
	}while(ch!=3);
}

