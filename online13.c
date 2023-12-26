#include<stdio.h> 
int main() 
{
	int number,count;

	printf("Enter Number:");
	scanf("%d",&number); 
	
	while(number<=0) 
	{
		if(number<=0)
		{
		printf("Invalid Number.\n\n");	
		}
		printf("Enter Number:");
	    scanf("%d",&number);
	}
	while(number>0)
	{
		for(count=1;count<=12;count++)
		{
			printf("%d*%d=%d\n",number,count,number*count);
		}
	break;	
	}
	
	
	
	
	return 0;
}
