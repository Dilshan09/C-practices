#include <stdio.h>
#define row 5 
#define col 6 
int main(void)
{
	int sales[row][col] = {0};	
	int i, j;	
	int person_num, product_num, total_value, productTotal=0;		
	
	printf("Input the salesperson number : ");	//read the sales person
	scanf("%d", &person_num);	
	
	while (person_num != (-1))	//-1 is used to terminate the program
	{
		printf("The product number : ");	//read product
		scanf("%d", &product_num);	
		printf("The total dollar value of that product sold that day : ");	//read valu of the product
		scanf("%d", &total_value);	
		
		if(person_num == 1)	//sales person 1
		{
			sales[person_num][0] = person_num;
			
			if(product_num == 1)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 2)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 3)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 4)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 5)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
		}
		
		else if(person_num == 2)	//sales person 2
		{
			sales[person_num][0] = person_num;
			
			if(product_num == 1)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 2)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 3)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 4)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 5)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
		}
		
		else if(person_num == 3)	//sales person 3
		{
			sales[person_num][0] = person_num;
			
			if(product_num == 1)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 2)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 3)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 4)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 5)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
		}
		
		else if(person_num == 4)	//sales person
		{
			sales[person_num][0] = person_num;
			
			if(product_num == 1)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 2)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 3)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 4)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
			
			else if(product_num == 5)
			{
			sales[0][product_num] = product_num;
			sales[person_num][product_num] = total_value;
			}
		}
		
		printf("\nInput the salesperson number : ");	//user prompt
		scanf("%d", &person_num);	//read sales person
	}
	
	for(j=1; j<col; j++)
	{
		for(i=1; i<row; i++)
		{
			productTotal += sales[i][j];	//calculate total dollar value sales of product
		}		
		printf("\nTotal dollar value sales of product %d = %d", j, productTotal);	//display the value
		productTotal = 0;
	}
	printf("\n");
	
	return 0;
}
