#include<stdio.h>

int main()
{
	int testMarks[10]={-1};
	int i,mark;
	
	for(i=0;i<10;i++)
	{
		printf("Input mark %d:",i+1);
		scanf("%d",&mark);
		   if(mark<0||mark>100)
		   {
		   	  printf("Invalid mark.Re-enter\n");
		   	  i--;
		   }
		   else
	       {
		     testMarks[i]=mark;
		   }
	   
	}
	printf("Input array:");
	for(i=0;i<10;i++)
	{
	   printf("%d ",testMarks[i]);
	}
	printf("\nPassed marks:");
	for(i=0;i<10;i++)
	{
		
		   if(testMarks[i]>50)
		   
		   {
		   	  printf("%d ",testMarks[i]);
		   }
	   
	}
	return 0;
}
