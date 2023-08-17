#include<stdio.h>

struct employee{
	char id[20];
	char name[20];
	int years;
	float salary;
}employeeArr[3];
int main()
{
	int i;
	
	for(i=0;i<3;i++){
		printf("Enter ID:");
		scanf("%s",&employeeArr[i].id);
		printf("Enter NAME:");
		scanf("%s",&employeeArr[i].name);
		printf("Enter YEARS:");
		scanf("%d",&employeeArr[i].years);
		printf("Enter SALARY:");
		scanf("%f",&employeeArr[i].salary);
		printf("\n");
	}
	for(i=0;i<3;i++){
		
		printf("%s ",&employeeArr[i].id);
		
		printf("%s ",&employeeArr[i].name);
		
		printf("%d ",&employeeArr[i].years);
		
		printf("%.2f ",&employeeArr[i].salary);
		printf("\n");
	}
//	printf("Employee ID\t\tName\t\tIncrement");
//	for(i=0;i<3;i++){
		
//	}
	
	
	
	
	
	return 0;
}

