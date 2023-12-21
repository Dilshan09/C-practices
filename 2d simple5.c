#include<stdio.h>

int main()
{
	int one[2][2]={{1,2},{3,4}};
	
    int row,column;
	
	printf("The matrix is :\n");
	for(row=0;row<2;row++)
	{
		for(column=0;column<2;column++)
		{
			printf("%d ",one[row][column]);
		}
		printf("\n");
	}
	printf("The transpose of a matrix is :\n");
	
	printf("%d %d\n%d %d",one[0][0],one[1][0],one[0][1],one[1][1]);

	return 0;
}
