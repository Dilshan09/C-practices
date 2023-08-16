#include<stdio.h>

float calDiscount(int price,float age);

int main()
{
	float money,value;
	int old;
	
	printf("Enter total amount : ");
	scanf("%f",&money);
	printf("Enter age : ");
	scanf("%d",&old);
	
	value=calDiscount(money,old);
	printf("Total value is %.2f .",value);
	return 0 ;
}
float calDiscount(int price,float age)
{
	float total;
	
	if(60<age)
	{
		total=price-(price*0.20);
	}	
	else
	{
		total=price-(price*0.15);
    }
	return total;
	
}
