#include <stdio.h>
# define SIZE 5

int main(void)
{
	int seat[10];
	int sat,i=0;
	
	printf("Pls input the seat number(1-10):");
	scanf("%d",&sat);
    while(sat>=1&&sat<=10)
    {
    	while (sat!=-1&&i<=10)
    	{
    		if(sat>=1&&sat<=10)
    		{
    		sat=seat[i];
    		printf("Pls input the seat number(1-10):");
	        scanf("%d",&sat);
			     if(seat[i]<seat[i+1]&&seat[i]>seat[i-1]);
			      {
			      	printf("Sorry.The seat %d is reserved.",seat[i]);
				  }
			}
			else
			{
			printf("\nSorry.Please input a valid seat number.");
			break;	
			}
		}
		printf("\nSorry.Please input a valid seat number.");
		i++;	
	}
return 0;
}
