 #include<stdio.h>
 #define SIZE 6
 int main()
 {
 	int i,sum=0;
 	int arrNum[SIZE];
 	
 	printf("Enter values to the Array:");
 	printf("\n");
 	
 	for(i=0;i<SIZE;i++)
 	{
 	scanf("%d",&arrNum[i]);		
	}
 	for(i=0;i<SIZE;i++)
 	{
 	      if (arrNum[i]<arrNum[i+1])
		   {
		   	sum=sum+1;
		   }	    	   		
	}
	if(sum==5)
	printf("Numbers are stored in ascending order.");
    else
    printf("Numbers are not stored in ascending order.");
 	return 0;
 }
