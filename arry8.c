#include<stdio.h>
#define SIZE 10 

int main()
{
	int Value,x,j,sum=0; 	
	int graph[SIZE]={0};


	while(x<SIZE)
	{

		printf("Enter Value :"); //enter values
		scanf("%d",&Value);
		
		graph[x]=Value;

        x++;
		   
	}
	printf("\n\nElement\tValue\tHistogram\n");//name the columns
	
	for(x=0;x<10;x++)
	{
	printf("%d        %d\t",x,graph[x]);
                  
        
		for(j=0;j<graph[x];j++)
		{
			printf("*");//graph with stars
		}
		printf("\n");


	}
   return 0; 
}
