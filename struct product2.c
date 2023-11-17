#include<stdio.h>
#define SIZE 4	

	struct product{
		char productId[20];
		char productName[30];
		float unitePrice ;
		int quantity ;
		
	} productArr[SIZE];
	
	int main(){
		int i;
		float amount  ,total = 0 ;
		 for( i = 0 ; i < SIZE ; i++){
		 	puts("");
		 	 printf("Enter the product ID %d :" , i +1);
		 	 scanf("%s" , &productArr[i].productId);
		 	 printf("Enter the product name : ");
		 	 scanf("%s" , &productArr[i].productName);
		 	 printf("Enter the unite price of he product :");
		 	 scanf("%f" , &productArr[i].unitePrice);
		 	 printf("Enter the quantity of the product :");
		 	 scanf("%d" , &productArr[i].quantity);
		 }
		 
	  
	   printf("\n\nPRODUCT ID\t\tNAME\t\tAMOUNT\n");
	   
		for( i = 0 ; i <SIZE ; i ++){
			  printf("%s\t\t" , productArr[i].productId );
	          printf("\t%s\t\t" ,productArr[i].productName);
	          
	          amount  =  productArr[i].unitePrice * productArr[i].quantity ;
		 
		       total  += amount ;
		       
	          printf("%.2f\n" , amount);
}
  printf(" \n\t\t\tthe total is  %.2f:" , total);
	return 0 ;
}
