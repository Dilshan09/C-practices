#include<stdio.h>

int main()
{
	int next,i; 	
	int Motion[5];

	for(i=0;i<=4;i++)
	{
		printf("Enter values :"); //input 5 values
		scanf("%d",&Motion[i]);
	}
	printf("\n\n");
	printf("Initial values :"); //Intial values
	
	for(i=0;i<=4;i++)
	{
		printf("%d ",Motion[i]);
	}
	next=Motion[0]; //rotation values
	
	for(i=0;i<=4;i++)
	
	{
		Motion[i]=Motion[i+1];
	}
	
	Motion[4]=next;
	
	printf("\n");
	
	printf("After rotating :");//Values after rotating
	
	for(i=0;i<=4;i++)
	
	{
		printf("%d ",Motion[i]);
	}

 return 0;	
}
