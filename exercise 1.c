#include<stdio.h> 

int main() 

{
	int number;
	 
	printf("Enter an integer :");
	scanf("%d",&number);
	
	if (number>=0)
	{
	   printf("This %d is already a positive value.",number); 
	}
    if (number<0)
	{
	   number=(number*-1);
	   printf("Above negative value coverted to this %d positive value.",number);
	}
	
	return 0;
}
