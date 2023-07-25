#include<stdio.h> 
float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);

int main()
{
	int grade;
	float hours,result;
	
	printf("Enter the grade :");
	scanf("%d",&grade);
	printf("Enter the no of hours :");
	scanf("%f",&hours); 
	
	result=calculateWeeklySalary(grade,hours);
	
	printf("Total salary is %.2f .",result);
	
    printDetails(grade,hours,calculateWeeklySalary(grade,hours));
}
float calculateWeeklySalary(int grade, float hrsWorked)
{
	float salary;
	if(grade==1)
	salary=100*hrsWorked;
	if(grade==2)
	salary=200*hrsWorked;
	if(grade==3)
	salary=300*hrsWorked;
	
	return salary;
	
}
void printDetails(int grade, float hrsWorked, float salary)
{
	
	
	printf("\ngrade:%d  hours of worked:%.2f  salary:%.2f",grade,hrsWorked,salary);
	
	
	
}
