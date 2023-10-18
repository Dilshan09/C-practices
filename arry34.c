#include<stdio.h>

int main()
{
	double salaries[5]={0};
	double money;
    int i;
    
	for(i=0;i<5;i++)
	{
		printf("Input he salary of employee %d:",i+1);
		scanf("%lf",&money);
		    if(money<0)
		    {
		    	printf("Please re-enter the amount\n");
		    	i--;
			}
			else
			{
				salaries[i]=money;
			}
		
	}
	printf("\nEmployee number\t\tSalary\n");
	for(i=0;i<5;i++)
	{
		printf("%d",i+1);
		
		if(salaries[i]<10000)
		{
			salaries[i]=salaries[i]+(salaries[i]*10)/100;
		}
		printf("\t\t\t%.2lf\n",salaries[i]);
		
	}

	return 0;
}
