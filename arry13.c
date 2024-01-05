# include <stdio.h>
# define SIZE 12

int main()
{
	int row,column;
	
	int adding[2][3];
	int sum=0;
	
	    for(row=0;row<2;row++)
	    {
	    	for(column=0;column<3;column++)
	    	{	
	    		printf("Enter your integer numbers:");
	    	    scanf("%d",&adding[row][column]);
	    	    
	    	    sum+=adding[row][column];
			}
	    	
		}	
		printf("\n\nTHE ARRAY SHAPE LIKE THIS!!!\n\n");
		
		for(row=0;row<2;row++)
	    {
	    	for(column=0;column<3;column++)
	    	{	
	    		printf("%d\t",adding[row][column]);
			}
	    	printf("\n\n");
		}
		
		printf("\n\nTHE ARRAY SUM IS :%d !!!\n\n",sum);
		
	return 0;
}

