#include<stdio.h> 
int main() 
{
	float b,c,T,b1,c1,T1;
	char a,w,d,W,D;
	printf("\tWellcome, How can I help you!\n");
	printf("If you want to do your Withdrawal use 'W' key\n\t\t     or\nIf you want to do your Deposit use 'D' key.");
	
	printf("\n     Enter your need using 'W' or 'D' :");
	scanf("%s",&a);
    w==W; 
    d==D;
	if (a=='w')
	{
	printf("\n\tYou have select your WITHDRAWAL");
	printf("\n      You can input your bank balance");
	scanf("%f",&b);
	printf("\n\tYou can input your amount");
	scanf("%f",&c);
	T=b-c;
	printf("\n  Your new account balance is %.2f",T);	
	}
	else if (a=='d')
	{
	printf("\n\tYou have select your DEPOSIT");
	printf("\n  You can input your bank balance");
	scanf("%f",&b1);
	printf("\n\tYou can input your deposit amount");
	scanf("%f",&c1);
	T1=b1+c1; 
	printf("\n  Your new account balance is %.2f",T1);
	}
	else 
	{
	printf("%s","INVALID INPUT");
	}
	
	return 0;
}
      
	
