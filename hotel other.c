#include<stdio.h>
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);
int main ()
{
   int guests;
   float charge,value,value1;
	
   printf("Enter no of guests:");
   scanf("%d",&guests);
   printf("Enter charge per guest:");
   scanf("%f",&charge);
   
   value=getDiscountPrice(guests,charge);
   printf("Discount:%.2f",value);
   value1=getAmount(guests,charge,getDiscountPrice(guests,charge));
   printf("\nAmount to be paid:%.2f",value1);
   return 0;	   	
}
float getDiscountPrice(int noOfGuests, float chargePerGuest)
{
	float total;
	
	if(noOfGuests>200)
	{
		total=noOfGuests*0.1*chargePerGuest;
	}
	else
	{
		total=0;
	}
	return total;
	
}
float getAmount(int noOfGuests, float chargePerGuest, float discount)
{
	float amount;
	
	amount=(noOfGuests*chargePerGuest)-discount;
	
	return amount;
}
