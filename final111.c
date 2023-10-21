#include<stdio.h>

int main()
{
	int type=0,quentity ;
	float total,discount,amount;
	char size,card,online;
	
	while(type!=-1)
	{
	printf("Input pizza type :");
	scanf("%d",&type);
	if(type!=1&&type!=2){
		printf("Invalid Type\n");
		break;
	}
	printf("Input the pizza size :");
	scanf(" %c",&size);
	if(size!='L'&&size!='M'){
		printf("Invalid Type\n");
		break;
	}
	printf("Input the number of pizza :");
	    scanf("%d",&quentity);
	         if(type==1&&size=='L')
	         {
	         	total=total+1720;	
			 }
			 if(type==2&&size=='L')
	         {
	         	total=total+1820;	
			 }
			 if(type==1&&size=='M')
	         {
	         	total=total+975;	
			 }
			 if(type==2&&size=='M')
	         {
	         	total=total+1000;	
			 }
	
		total=total*quentity;
		printf("\n");
	}
	printf("Are you paying by credit card (Y/N)?");
	scanf(" %c",&card);
	if(card=='Y')
	{
		discount=total*0.20;
		amount=total-discount;
	}
	else
	{
	printf("Are you a loyalty customer (Y/N)?");
	scanf(" %c",&card);
	if(card=='Y')
		{
		discount=total*0.15;
		amount=total-discount;
    	}
	}	
    printf("Is this an online order (Y/N)?");
	scanf(" %c",&online);
	if(online=='Y')
	{
		discount=discount*0.5;
		amount=total-discount;
	}
	printf("\nTotal bill amount:%.2f",total);
	printf("\nDiscount:%.2f",discount);
	printf("\nNet amount:%.2f",amount);
	
	return 0;
}
