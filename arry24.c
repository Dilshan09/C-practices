#include<stdio.h> 
# define SIZE 10

int main()
{
	int myArray[10];
	int i,value;
    float sum=0,sum1;
    
	for(i=0;i<SIZE;i++)
	{	
		printf("Enter the number series:");
	    scanf("%d",&myArray[i]);
	}
	printf("\n\n");
	printf("Average:");
	
	for(i=0;i<SIZE;i++)
	{
	   
	   	sum=sum+myArray[i];
	    sum1=sum/10;
  
	}
	printf("%.1f",sum1);
	printf("\n\n");
	printf("my Array");
	for(i=0;i<SIZE;i++)
	{

	    printf("%d  ",myArray[i]);
  
	}
	printf("\n\n");
	printf("largeNum:");
	for(i=0;i<SIZE;i++)
	{
        if(sum1<myArray[i])
	    printf("%d  ",myArray[i]);
  
	}
	   	
	return 0;
}
