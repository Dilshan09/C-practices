#include<stdio.h> 

int add(int no1,int no2); 
int multiply(int no1,int no2); 
int square(int n1); 

int main(void) 
{
	int final; 
	
	final = square(add(multiply(3,4),multiply(5,7))); 
	
	printf("Result is :%d",final); 
	 return 0;
	 
}
int add(int no1, int no2) 

{
	
	int add=no1 +no2; 
	
	return add;
	
}
int multiply(int no1, int no2)

{
	int multiply=no1*no2; 
	
	return multiply; 
	
}
int square(int no1) 

{
	
	int square = no1*no1; 
	
	return square; 	
}
