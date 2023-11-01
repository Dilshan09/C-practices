#include<stdio.h> 
int main() 
{
	float b,c,T,b1,c1,T1;
	char a,w,d,W,D;
	printf("\tWellcome, How can I help you!\n");
	printf("If you want to do your Withdrawals use 'W' key\n\t\t     or\nIf you want to do your Deposits use 'D' key.");
	
	printf("\n     Enter your need using 'W' or 'D' :");
	scanf("%s",&a);
	if (a=='W')
	{
	printf("\n     You have selected your WITHDRAWALS");
	printf("\n\nYou can input your bank balance     :");
	scanf("%f",&b);
	printf("\nYou can input your withdrawl amount :");
	scanf("%f",&c);
	T=b-c;
	printf("\nYOUR NEW ACCOUNT BALANCE IS is %.2f",T);	
	}
	else if (a=='D')
	{
	printf("\n\tYou have selected your DEPOSITS");
	printf("\n\nYou can input your bank balance   :");
	scanf("%f",&b1);  
	printf("\nYou can input your deposit amount :");
	scanf("%f",&c1);
	T1=b1+c1; 
	printf("\nYOUR NEW ACCOUNT BALANCE IS %.2f",T1);
	}
	else if (a=='w')
	{
	printf("\n     You have selected your WITHDRAWALS");
	printf("\n\nYou can input your bank balance     :");
	scanf("%f",&b);
	printf("\nYou can input your withdrawl amount :");
	scanf("%f",&c);
	T=b-c;
	printf("\nYOUR NEW ACCOUNT BALANCE IS %.2f",T);	
	}
	else if (a=='d')
	{
	printf("\n\tYou have selected your DEPOSITS");
	printf("\n\nYou can input your bank balance   :");
	scanf("%f",&b1);
	printf("\nYou can input your deposit amount :");
	scanf("%f",&c1);
	T1=b1+c1; 
	printf("\nYOUR NEW ACCOUNT BALANCE IS %.2f",T1);
	}
	else 
	{
	printf("%s","\t\tINVALID INPUT\n    RETRY, USING THE ABOVE INFORMATINS!!");
	}
	printf("\n\t      HAVE A NICE DAY!!");
	return 0;
}
