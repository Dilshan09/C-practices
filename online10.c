#include<stdio.h> 
int main() 
{
	int item,quentity;
	float add,sum=0;
	
	printf("Enter item :"); 
	scanf("%d",&item);
	
	while(item!=-1)
	{
	  	
	  if(item==1) 
	  {
	  	printf("Enter Quentity:");
	  	scanf("%d",&quentity);
	  	add=300.25*quentity;
	  }	         
	  else if(item==2)
	  {
	  	printf("Enter Quentity:");
	    scanf("%d",&quentity);
	  	add=145.50*quentity;
	  }          
	  else if(item==3)
	  {
	    printf("Enter Quentity:");
	  	scanf("%d",&quentity);
	  	add=525.00*quentity;        
	  }	
	sum=sum+add;            		   		            
	printf("\nEnter item :"); 
	scanf("%d",&item);
	
	
	} 
	printf("Total price to pay Rs:%.2f",sum);
	
	
	
	return 0;
}
