#include<stdio.h>
int main()
{
	int student [3][3];
	int row ,column; 
	float average,sum=0; 
	
	for(row=0;row<3;row++)
	{
		printf("Student no:%d\n",row+1);
		for(column=0;column<3;column++)
		{
			printf("Score %d:",column+1);
		    scanf("%d",&student [row][column]);
		}
		printf("\n");
	}

	printf("Student no\tExam Scores\tAverage\n");
	
	for(row=0;row<3;row++)
	{	
	printf("%d\t\t",row+1); 
	    for(column=0;column<3;column++)
		{	
			printf("%d  ",student [row][column]);
			sum=sum+student [row][column];	
		}
		average=sum/3;
	    printf("\t%.2f",average);
		printf("\n");
	}
	return 0;
}
