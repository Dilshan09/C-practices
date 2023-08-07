#include<stdio.h> 
float roomType(char room,float board);
float cardType(float discount);
int main()
{
	int room,days;
	char Basis,Card;
	float result,result1;
	printf("Enter type of room :");
	scanf("%d",&room);
	while(room!=-1)
	{
	printf("Enter Accommodation Basis (F/H) :");
	scanf(" %c",&Basis);
	printf("Enter No of days :");
	scanf("%d",&days);
	printf("Enter Reward Card Type ( G, S, B ) :");
	scanf(" %c",&Card);
	
	result=roomType(room,Basis)*days*cardType(Card);
	result1=roomType(room,Basis)*days-result;
	printf("Amount(Rs.) :%.2f",result1);
	
	printf("\nEnter type of room :");
	scanf("%d",&room);
	}

	
}
float roomType(char room,float board)
{
	float value;
	char value1;
	if(room==1&&board=='F')
	value=25555.00;
	if(room==2&&board=='F')
	value=17500.00;
	if(room==3&&board=='F')
	value=9000.00 ;
	if(room==1&&board=='H')
	value=17250.00;
	if(room==1&&board=='H')
	value=12250.00;
	if(room==1&&board=='H')
	value=7250.00;


	return value;
}
float cardType(float discount)
{
	float card;
	if(discount=='G')
	card=12.5/100;
	if(discount=='S')
	card=11.5/100;
	if(discount=='B')
	card=9.5/100;
	
	return card;
	
}

