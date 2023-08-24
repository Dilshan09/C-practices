#include <stdio.h>

int main(void)	
{
	int array1[4][4] = {5, 7, 8, 10, 9, 3, 0, 6, 8, 1, 9, 2, 4, 7, 2, 1};	//array 01
	int array2[4][4] = {2, 2, 1, 3, 8, 1, 3, 1, 1, 2, 2, 4, 3, 1, 1, 2};	//array 02
	int result[4][4] = {0};	
	int i, j;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			result[i][j] = result[i][j] + array1[i][j] + array2[i][j];	//calculate
		}
	}
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
				printf("%d\t", result[i][j]);	//print
		}
		printf("\n");
	}
			
	return 0;
}	
