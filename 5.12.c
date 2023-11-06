#include<stdio.h> 
int main () 
{
	float number,total,average,count;
	 
	total = 0; 
	count = 0;
	
	printf("Enter a number:");
	scanf("%f",&number);
	    
	
	while(number>=0) 
	{      
	    total=total+number;
	    count = count+1;
		 
	    printf("%.2f\n",number);
	    
	    printf("Enter a number:");
	    scanf("%f",&number);      
	}
	    
	    average=total/count;
    	printf("The total is :%.2f\nThe average is :%.2f\n",total,average);
    	
	
	return 0;
}
