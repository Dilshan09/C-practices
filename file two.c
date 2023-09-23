#include<stdio.h>

int main()
{
	char ID[10];
	int i,num,pices;
	
	FILE*online ;
	online=fopen("oders.dat","r");
	if(online=NULL)
	{
		printf("File can not be open");
		return -1;
	}
	for(i=0;i<5;i++)
	{
		printf("Oder ID:");
        scanf("%s",ID);
        printf("Item number:");
        scanf("%d", &num);
        printf("Quentity:");
        scanf("%d", &pices);
        fscanf(online,"%s   %d   %d\n",ID,num,pices);
	    printf("%s   %d   %d\n",ID,num,pices);
	}

	fclose(online);
	
	return 0;
}
