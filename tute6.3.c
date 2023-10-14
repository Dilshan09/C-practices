#include<stdio.h> 
float cal(float num1,float num2,float num3,float num4); 
int main()
{
	float number1,number2,number3,number4,result;
	printf("Enter first integer number:"); 
	scanf("%f",&number1);
	printf("Enter second integer number:"); 
	scanf("%f",&number2);
	printf("Enter third integer number:"); 
	scanf("%f",&number3);
	printf("Enter forth integer number:"); 
	scanf("%f",&number4);
	
	result=cal(number1,number2,number3,number4);
	printf("The last result is %.2f.",result);
	
	return 0;
}
float cal(float num1,float num2,float num3,float num4)
{
	
	float multiply1,multiply2,sum,square;
	multiply1=num1*num2; 
	multiply2=num3*num4;
	sum=multiply1+multiply2;
	square=sum*sum;
	return square;	
}

