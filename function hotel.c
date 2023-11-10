#include <stdio.h>

float getDiscountPrice(int noOfGuests,float chargePerGuest);
float getAmount(int noOfGuests,float chargePerGuest,float discount);

int main()
{
	int guests;
	float charge,discount,result;
	
	printf("Enter no of guests:");
	scanf("%d",&guests);
	
	printf("Enter charge per guests:");
	scanf("%f",&charge);
	
	printf("Discount:");
	scanf("%f",&discount);
	
	result=getDiscountPrice(guests,charge)-getAmount(guests,charge,discount);
    printf("Amount to be paid:%.2f",result);
}
float getDiscountPrice(int noOfGuests,float chargePerGuest)
{
	float total;
	
	total=noOfGuests*chargePerGuest;
	
	return total;

}
float getAmount(int noOfGuests,float chargePerGuest,float discount)
{
	float amount;
	
	if(noOfGuests>200)
	
	amount=noOfGuests*chargePerGuest*discount;
	
	else
	
	amount=0;
	
	return amount;	
}
