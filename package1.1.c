#include<stdio.h> 
int main() 
{
	int package,total,number; 
	
	printf("Package Type-1\nPackage Type-2\nPackage Type-3"); 
	printf("\n\nEnter your need using above numbers :");
	scanf("%d",&number);
	
	if (number==1) //Horse ride
	{
		printf("\nEnter your number of members :");
		scanf("%d",&package);
		total=package*2000;
		printf("Your total cost is %d .",total);
	}
	else if (number==2) //Scuba Diving
	{
		printf("\nEnter your number of members :");
		scanf("%d",&package);
		total=package*5000;
		printf("Your total cost is %d .",total);
	}
	else if (number==3) //Water Rafting
	{
		printf("\nEnter your number of members :");
		scanf("%d",&package);
		total=package*7000;
		printf("Your total cost is %d .",total);
	}
	else
	{
		printf("\n\nInvalid input !!");
	}	
	return 0;
}
