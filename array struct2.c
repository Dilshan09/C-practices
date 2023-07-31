#include<stdio.h>

struct product{
	char productID[10];
	char name[15];
	float unitPrice;
	int quantitySold;
}arrProduct[4];

int main()
{
	int product;
	float total = 0;
	
	for(product = 0; product < 4; product++){
		printf("Product - %d\n", product + 1);
		
		printf("\tEnter the product ID : ");
		scanf("%s", arrProduct[product].productID);
		
		printf("\tEnter the product Name : ");
		scanf("%s", arrProduct[product].name);
		
		printf("\tEnter the product Unit price : ");
		scanf("%f", &arrProduct[product].unitPrice);
		
		printf("\tEnter the product quantity sold : ");
		scanf("%d", &arrProduct[product].quantitySold);
	}
	
	printf("\nProductID\tName\t\tAmount\n");
	for(product = 0; product < 4; product++){
		printf("%s\t\t%s\t\t", arrProduct[product].productID, arrProduct[product].name);
		printf("%.2f\n", arrProduct[product].unitPrice * arrProduct[product].quantitySold);
		total += arrProduct[product].unitPrice * arrProduct[product].quantitySold;
	}
	
	printf("\nTotal : %.2f", total);
	return 0;
}
