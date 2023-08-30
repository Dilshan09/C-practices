#include <stdio.h>
 
int main()
{
	char Operators;
	float num1, num2;
	
	printf("\n Enter an Operator (+, -, *, /)  :  ");
  	scanf("%c", &Operators);
	
  	printf("\n Enter the Values for first Operands num1 :  ");
  	scanf("%f", &num1);
  	
  	printf("\n Enter the Values for second Operands num2 :  ");
  	scanf("%f", &num2);
	
	switch (Operators) 
	
	{
		
		case '+' :printf("\n\n%.2f+%.2f=%.2f",num1,num2,num1+num2);
		          break;
		
		case '-' :printf("\n\n%.2f-%.2f=%.2f",num1,num2,num1-num2);
		          break;
		
		
		case '*' :printf("\n\n%.2f*%.2f=%.2f",num1,num2,num1*num2);
		          break;
		
		
		case '/' :printf("\n\n%.2f/%.2f=%.2f",num1,num2,num1/num2);
		          break;
		
	    defult :printf("\n\nInvalid Input");		
		
	}
	return 0;
}
