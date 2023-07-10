#include<stdio.h>

int main()
{
	char ID[20];
	char name [20];
	int number,i;
	
	FILE *name2;
	
	name2=fopen("manage.dat","w");
	
	if(name2==NULL)
	{
		printf("File can not be open.");
		return -1;
	}
	
	for(i=0;i<5;i++)
	{
		printf("Enter id:");
		scanf("%s",ID);
		printf("Enter name:");
		scanf("%s",name);
		printf("Enter number:");
		scanf("%d",&number);
		
		fprintf(name2,"%s\t%s\t%d\n",ID,name,number);
	}
	
	fclose(name2);
	
	return 0;
}
