#include<stdio.h> 
int main() 
{
	float mark;
	
	
	printf("Enter marks:"); 
	scanf("%f",&mark); 

	if (mark<=100&&mark>=75)

	    printf("Grade is A");	
	    
	
	
	if (mark<=74&&mark>=65)

	    printf("Grade is B");	
	
	if (mark<=64&&mark>=45)

	    printf("Grade is C");	
	    
	
	if (mark<=44&&mark>=0)

	    printf("Grade is F");	
	    
	    
		   
	return 0;
}
