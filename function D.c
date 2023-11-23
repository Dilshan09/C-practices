#include<stdio.h> 
float calculateTotalCost(int itemNo, int quantity);
void printDetails(int itemno, int quantity, float totalCost);

int main()
{
	int item,quantity;
	float result;
	
	printf("Enter item number :");
	scanf("%d",&item);
	printf("Enter quantity :");
	scanf("%d",&quantity);
	
	result=calculateTotalCost(item,quantity);
	printf("total value is %.2f .",result);
	
	printDetails(item,quantity,calculateTotalCost(item,quantity));
}
float calculateTotalCost(int itemNo, int quantity)
{
	float total;
	if(itemNo==1)
	total=quantity*100.00;
	if(itemNo==2)
	total=quantity*200.00;
	if(itemNo==3)
	total=quantity*300.00;
	
	return total;
}
void printDetails(int itemno, int quantity, float totalCost)
{
	
	printf("\n\nitemno%d,quantity%d,totalCost%.2f",itemno,quantity,totalCost);

}
