#include<stdio.h> 
# define SIZE 8
int main()
{
	int num[SIZE];
	int i,number,count=0;
   
    while(i<SIZE)
    {
    	printf("Enter an integer between(1-4):");
    	scanf("%d",&number); 
		  
		if(number>=1&&number<=4) 
		{
		    num[i]=number; 	  
		} 
		else
		{
		    printf("\nINVALID INPUT!!RE ENTER!!\n\n");	
		    i--;
		}
		i++;
	}
	printf("\n");
	printf("num array:");
    for(i=0;i<SIZE;i++)
    {
        printf("%d  ",num[i]);	
	}
	printf("\n");
	printf("Number of times the pattern 1 3 appear:");
	
	for(i=0;i<SIZE;i++)
    {
    	if(num[i]==1&&num[i+1]==3)
        {
		count=count+1;	
     	} 
	}
    printf("%d",count);   	
	return 0;
}
