#include <stdio.h>
# define SIZE 5

int main(void)
{
    int i=0,service;
	int rate[SIZE]={0};
	int count0=0,count1=0,count2=0,count3=0,count4=0,count;
	
	while(i<SIZE)
	{
	printf("Pls input the service rating(1-5):");
	scanf("%d",&service);
	
	if (service==-1)
	{
		break;
	}
	if(service<1||service>5)
	{
		printf("Error!!\n");  
	}
	if(service>=1&&service<=5)
	{
    rate[i]=service;
	}
	else 
	{
	   	i--;
	}
	i++;    	
	}
	printf("\n\n");
	printf("Rating\t\tNumber of response\n");
	for(i=0;i<SIZE;i++)
	{
			//for(rate[i]=0;rate[i]<SIZE;rate[i]++)
	//{		
   
    if( rate[i]==1)
	{
		count0=count0+1;	
	}
	if( rate[i]==2)
	{
		count1=count1+1;	
	}
	if( rate[i]==3)
	{
		count2=count2+1;	
	}
	if( rate[i]==4)
	{
		count3=count3+1;		
	}
	if( rate[i]==5)
	{
		count4=count4+1;		
	}
	//}
    count=count0+count1+count2+count3+count4;
    printf("%d\t\t%d\n",i+1,count);
	}	
	
return 0;
}
