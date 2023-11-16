#include<stdio.h>

void multiply(int number,int range);

int main()
{	
    int number,range;
    
	printf("Enter the number:");
	scanf("%d",&number);
	
	printf("Enter the range:");
	scanf("%d",&range);
	multiply(number,range);
	
}
void multiply(int number,int range)
{
	int value,total;
	
	for(value=1;value<=range;value++)
	{
		total=number*value;
		printf("%d*%d=%d\n",number,value,total);
	}
	
}
