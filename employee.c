#include<stdio.h>

float calcincrement(float salary,int noofYearsWorked);
float calcTotSalary(float salary,float increment);

int main()
{	
   float salary,years,result,result1;
   
   printf("Enter Salary:");
   scanf("%f",&salary);
   
   printf("Enter no of years worked:");
   scanf("%f",&years);
   
   result=calcincrement(salary,years);
   printf("Increment:%.2f\n",result);
   
   result1=calcTotSalary(salary,calcincrement(salary,years));
   printf("Total salary:%.2f\n",result1);
}
float calcincrement(float salary,int noofYearsWorked)
{
	float increment;
	
    if(noofYearsWorked>2)
    increment=salary*0.1;
    else
    increment=0;
    
	return increment;
}
float calcTotSalary(float salary,float increment)
{
	float total;
	
	total=salary+increment;
	
	return total;
}
