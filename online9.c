#include<stdio.h> 
int main() 
{
    int type=0,quentity; 
    float price;
    
    
    while(type!=-1)
    {
    	printf("Enter Pizza type :");
    	scanf("%d",&type);
    	
    	switch(type)
    	{
    	case 1 : printf("Enter Quantity:");
    	      scanf("%d",&quentity);
		      if(quentity>=3)
			  {
			  	price=quentity*1000-(1000*quentity*0.01);
			  	printf("Total Price :%.2f",price);
			  }
			  else
			  {
			    price=quentity*1000;
			    printf("Total Price :%.2f",price);
			  }break;
		case 2 : printf("Enter Quantity:");
    	      scanf("%d",&quentity);
		      if(quentity>=3)
			  {
			  	price=quentity*1600-(1600*quentity*0.12);
			  	printf("Total Price :%.2f",price);
			  }
			  else
			  {
			    price=quentity*1600;
			    printf("Total Price :%.2f",price);
			  }break;
		case 3 : printf("Enter Quantity:");
    	      scanf("%d",&quentity);
		      if(quentity>=3)
			  {
			  	price=quentity*1400-(1400*quentity*0.15);
			  	printf("Total Price :%.2f",price);
			  }
			  else
			  {
			    price=quentity*1400;
			    printf("Total Price :%.2f",price);
			  }break;
		default : printf("Invalid Input !!");	  	  	  	
		}
		printf("\n\n");
	}
	 
	 
	 return 0;
}
