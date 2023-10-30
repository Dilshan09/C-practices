#include<stdio.h>

int main()
{
	int numArr[6]={0};
	int odd[6];
	int even[6];
	int i,j,num;
	
	for(i=0;i<6;i++)
	{
		printf("Enter integer %d:",i+1);
		scanf("%d",&num);
		
		numArr[i]=num;
	}
	printf("Number series:");
	for(i=0;i<6;i++)
	{
		printf("%d ",numArr[i]);	
	}
	printf("\nOdd Numbers:");
	for(i=0;i<6;i++)
	{
		if(1==numArr[i]%2)
		{
			odd[i]=numArr[i];
			printf("%d ",odd[i]);
		}
			
	}
	printf("\nEven Numbers:");
	for(i=0;i<6;i++)
	{
		if(0==numArr[i]%2)
		{
			even[i]=numArr[i];
			printf("%d ",even[i]);
		}
			
	}

	return 0;
}
