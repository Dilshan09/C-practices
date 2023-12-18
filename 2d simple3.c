#include<stdio.h>

int main()
{
	int one[2][2]={{5,6},{7,8}};
	int two[2][2]={{1,2},{3,4}};
	
    int row,column;
	
	printf("The First matrix is :\n");
	for(row=0;row<2;row++)
	{
		for(column=0;column<2;column++)
		{
			printf("%d ",one[row][column]);
		}
		printf("\n");
	}
	printf("The Second matrix is :\n");
	for(row=0;row<2;row++)
	{
		for(column=0;column<2;column++)
		{
			printf("%d ",two[row][column]);
		}
		printf("\n");
	}
	printf("The  Subtraction of two matrix is :\n");
	for(row=0;row<2;row++)
	{
		for(column=0;column<2;column++)
		{
			printf("%d ",one[row][column]-two[row][column]);
		}
		printf("\n");
	}
	
	return 0;
}
