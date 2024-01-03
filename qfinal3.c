#include<stdio.h>

int main()
{
	int phoneno,i;
	float Lcharges;
	float Icharges;
	float roaming;
	
	FILE*mPtr;
	
	mPtr=fopen("chargers.dat","w");
	
	if(mPtr==NULL)
	{
		printf("File can not open .");
	}
	for(i=0;i<5;i++)
	{
		printf("Enter phone number :");
		scanf("%d",&phoneno);
		printf("Enter local call charges  :");
		scanf("%f",&Lcharges);
		printf("Enter  international call charges :");
		scanf("%f",&Icharges);
		printf("Enter roaming charges :");
		scanf("%f",&roaming);
		fprintf(mPtr,"%d\t%.2f\t%.2f\t%.2f\n",phoneno,Lcharges,Icharges,roaming);
	}
	
	fclose(mPtr);
	
	return 0;
}
