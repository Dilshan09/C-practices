#include<stdio.h> 
# define SIZE 10

int main()
{
	int Arr[10];
	int i,value,num1;

	for(i=0;i<SIZE;i++)
	{
		
		printf("Input an integer(-/+):");
	    scanf("%d",&Arr[i]);
	}
	printf("\n\n");
	printf("Number series:");    
	for(i=0;i<SIZE;i++)
	{
		
	printf("%d ",Arr[i]);
  
	}
	
	printf("\n\nPositive Numbers:");

            for (i = 0; i < SIZE; i++) 
            {
                if (Arr[i]>=0)                                                                    

                {

                    printf("%d  ", Arr[i]);

                }
            }
   printf("\n\nNegative Numbers:");

            for (i = 0; i < SIZE; i++) 
            {
                if (Arr[i]<0)
                {

                    printf("%d  ", Arr[i]);

                }
            }	   	
	return 0;
}
