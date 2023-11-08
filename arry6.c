#include<stdio.h>
#define SIZE 10 

int main()
{
	int marks,x,sum=0; 	
	int student[SIZE]={0};
	float mean;
	
	while(x<SIZE)
	{

		printf("Enter marks :"); //input  10 students marks
		scanf("%d",&marks);
		
		if(marks<=20&&marks>=0)  //condition for marks
		{
			student[x]=marks;
	
		    sum+=student[x];
		    
            x++;
		}   
	}
	printf("\n\nTotal is %d.",sum);  //total marks
    
    printf("\n\n");
    
    for(x=0;x<10;x++)
    {
    printf(" \n%d",student[x]); //display values stored in array
	}
	mean=sum/10.0;
	printf("\n\nMean is %.2f.",mean);//mean
	
 return 0;	
}
