#include<stdio.h>

int main()
{
	char ID[10];
	int i,num;
	
	FILE*hospital;
	hospital=fopen("patient.dat","w");
	if(hospital=NULL)
	{
		printf("File can not be open");
		return -1;
	}
	for(i=0;i<5;i++)
	{
		printf("Pls input the Division ID:");
        scanf("%s",ID);
        printf("Number 0f patients:");
        scanf("%d", &num);
        printf("\n");
        fprintf(hospital,"%s     %d\n",ID,num);
	}
	
	fclose(hospital);
	
	return 0;
}
