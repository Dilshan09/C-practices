#include<stdio.h>

int main()
{
	char ID[12];
	char name[12];
	int num,value,i;
	
	FILE *gg999;
	
	gg999=fopen("fgroup.dat","w");
	
	if(gg999==NULL)
	{
		printf("File can not be open.");
		return -1;
	}
	
	for(i=0;i<3;i++)
	{
		printf("Enter ID:");
		scanf("%s",ID);
		printf("Enter name:");
		scanf("%s",name);
		printf("Enter num:");
		scanf("%d",&num);
		printf("Enter value:");
		scanf("%d",&value);
		fprintf(gg999,"%s\t%s\t%d\t%d\n",ID,name,num,value);
	}
	
	fclose(gg999);
	
	return 0;
}
