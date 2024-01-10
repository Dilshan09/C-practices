#include<stdio.h> 
# define SIZE 6

int main()
{
	int numArr[6];
	int i,value,num1;

	for(i=0;i<SIZE;i++)
	{
		
		printf("Input an integer:");
	    scanf("%d",&numArr[i]);
	}
	printf("\n\n");
	printf("Number series:");    
	for(i=0;i<SIZE;i++)
	{
		
	printf("%d ",numArr[i]);
  
	}
	
	printf("\n\nOdd numbers:");

            for (i = 0; i < SIZE; i++) 
            {
                if (numArr[i] % 2 != 0)                                                                    

                {

                    printf("%d \t", numArr[i]);

                }
            }

     

   printf("\n\nEven numbers:");

            for (i = 0; i < SIZE; i++) 

            {

                if (numArr[i] % 2 == 0)

                {

                    printf("%d \t", numArr[i]);

                }

            }	   

	
	return 0;
}
