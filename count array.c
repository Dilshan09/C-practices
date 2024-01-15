#include<stdio.h>

int main()
{
	int i;
	char Arr[6]={'M','a','R','k','e','t'};
	
	printf("Before\n");
	
	for(i = 0;i < 6 ; i++)
	{
		printf(" %c  ",Arr[i]);
	}
	printf("\nAfter\n");
	for(i = 0;i < 6 ; i++)
	{
		if(Arr[i]>=65&&Arr[i]<=90)
		printf(" %c  ",Arr[i]);
		if(Arr[i]>=97&&Arr[i]<=122)
		printf("*   ");
	}
	
	return 0;
}
