#include<stdio.h>
# define SIZE 5
void modifyArray(float arr[],int size);

int main()
{
	int i;
	float x[5]={2,8,3,9,10};
	
    modifyArray(x,5);
    
    for(i=0;i<5;i++)
	{
	   	printf("%.2f  ",x[i]);
	}
	
	return 0;
}
void modifyArray(float arr[],int size)
{
	int i;
	
	for(i=0;i<5;i++)
	{
	   	arr[i]+=arr[i]*0.1;
	}
	
}
