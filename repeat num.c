#include<stdio.h>

int main()
{
	int num[6] = {0};
	int no, i,count=0;
	
	printf("Enter values to the array:\n");   
	for(i=0;i<6;i++){
		
		scanf("%d", &num[i]);
	}
	
	for(i = 0; i < 6; i++){
		printf("\nEnter the number:%d", num[i]);
		
		if(num[i-1] += 1 )
		
		//count=count+1;
		//if(count==1)
		{
			//count=count+1;,counttimes
			//num[ i-1]+=1;
			printf("\nNumber not repeated");
			
		}	

		else
		{
		    printf("\nNumber repeated " );
			//num[i-1]=1;
		}	

	}

	return 0;
}
