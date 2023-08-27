#include<stdio.h>
int main()
{
	char pannel [4][4];
	int i,j;

	for(i=0;i<4;i++){
	
		for(j=0;j<4;j++){
			
		    printf("Bulb colour:");
			scanf(" %c",&pannel[i][j]);	
		}
	}
	printf("\n\n");
	for(i=0;i<4;i++){
		
		for(j=0;j<4;j++){
			printf(" %c ",pannel[i][j]);	
		}
		printf("\n");
	}
	printf("\n\n");
    printf("Red LED bulb positions\n");
    
		for(i=0;i<4;i++){
		
		for(j=0;j<4;j++){
			
			if(pannel[i][j]=='r'||pannel[i][j]=='R')
			
	        printf("[%d,%d]  ",i,j);		
		}
		//printf("[%d,%d]  ",i,j);
	}
	return 0;
}
