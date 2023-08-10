#include<stdio.h>

int main()
{
	int numArr[10]={0};
	int positiveNum[10];
	int negativeNum[10];
	int i,j,num;
	
	for(i=0;i<10;i++)
	{
		printf("Enter integer %d:",i+1);
		scanf("%d",&num);
		
		numArr[i]=num;
	}
	printf("Number series:");
	for(i=0;i<10;i++)
	{
		printf("%d ",numArr[i]);	
	}
	printf("\nPositive Numbers:");
	for(i=0;i<10;i++)
	{
		if(0<numArr[i])
		{
			positiveNum[i]=numArr[i];
			printf("%d ",positiveNum[i]);
		}
			
	}
	printf("\nNegative Numbers:");
	for(i=0;i<10;i++)
	{
		if(0>numArr[i])
		{
			negativeNum[i]=numArr[i];
			printf("%d ",negativeNum[i]);
		}	
	}
	return 0;
}
