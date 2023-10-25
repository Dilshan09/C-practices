#include<stdio.h>

int main()

{
	
	int number[2][3];
    int i, j;

    for(i = 0; i < 2; i++)			//1st rep, i = 1
     {
	         for(j = 0; j < 3 ; j++)	            //1st rep, j = 0
	   {
	     	printf("Enter number: ");          //40
		    scanf("%d", &number[i][j]);	
	   }
		
     }
    
      for(i = 0; i < 2; i++)		
     {
	         for(j = 0; j < 3 ; j++)	            
	   {
	     		printf("%d\t",number[i][j]);
	   }
	   
	   
	  printf("\n");
		
     }
    
     
     
return 0;

}

