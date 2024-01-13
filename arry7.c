#include<stdio.h>
#define SIZE 5 

int main()
{
	int values,x,sum=0; 	
	int Motion[SIZE]={0};


	while(x<SIZE)
	{

		printf("Enter values :"); //input 5 values
		scanf("%d",&values);
		
		Motion[x]=values;//motion array

            x++;
		   
	}
	printf("\n\n");
	
	//Initial values and After rotating 
	
	printf("Initial values    %d %d %d %d %d\n",Motion[0],Motion[1],Motion[2],Motion[3],Motion[4]);
	printf("After rotating    %d %d %d %d %d",Motion[1],Motion[2],Motion[3],Motion[4],Motion[0]);

    printf("\n\n");
    
 return 0;	
}
