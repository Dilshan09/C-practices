#include<stdio.h>

int main()
{
	float student[0]={0};
	float marks,i;
	int count;
	
	for(count=0;count<10;count++)
	{
		printf("Enter student marks:");
        scanf("%f",&marks);
        
          if(marks>=0&&marks<=20)
    {
          student[0]=marks;
        
          student[0]++;
	}
	      else
	      printf("\nPLZ TRY AGAIN!!\n");
        
    }    
        
  
	printf("Total is %.2f.",student[0]);
	
	return 0;
}
