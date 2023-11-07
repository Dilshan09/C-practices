#include<stdio.h>
//# define SIZE 5
int main()
{
	double sales[5]={0};
	int i;
	double sal;

	for(i=0;i<5;i++)
		{
			printf("Input the sales of salesmen %d:",i+1);
			scanf("%lf",&sal);
			if(sal>0)
			{
				sales[i]=sal;
			}
			else
			{
				printf("Please re-enter the amount\n");
				i--;
			}	
		}
	printf("Sales person number\t\tSales amount\n");	
	for(i=0;i<5;i++)
    	{
			printf("%d",i+1);
			if(sales[i]>20000)
			{
				sales[i]=sales[i]+5000;
			}
			else
			{
				sales[i]=sales[i]+0;
			}	
		
		   printf("\t\t\t\t%.2lf\n",sales[i]);
    	}
	return 0;
}
