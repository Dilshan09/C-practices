#include<stdio.h>

int main()
{
	char ID[12];
	char name [10];
	int number,i;
	
	FILE *name2;
	
	name2=fopen("manage.dat","r");
	
	if(name2==NULL)
	{
		printf("File can not be open.");
		return -1;
	}
	
	printf("ID\tNAME\tNUMBERS\n");
	fscanf(name2,"%s %s %d",ID,name,&number);
	
	while(!feof(name2))
	{	
		printf("%s\t%s\t%d\n",ID,name,number);
		fscanf(name2,"%s %s %d",ID,name,&number);
	}
	
	fclose(name2);
	
	return 0;
}
