#include<stdio.h>
	
int main()
{	
    float temp[2][3];
    float avgTemp[1]={0};
    int i,j;
		    
    for(i=0;i<2;i++){
    	printf("City %d.\n",i+1);
    	for(j=0;j<3;j++){
    		printf("Enter temperature:");
    		scanf("%f",&temp[i][j]);
		}
		printf("\n");
	}		    
    for(i=0;i<2;i++){
    	
    	for(j=0;j<3;j++){
    		
    		printf("%.1f  ",temp[i][j]);
		}
		printf("\n");
	}
	
	avgTemp[0]=	(temp[0][0]+temp[0][1]+temp[0][2])/3;	    
    avgTemp[1]=	(temp[1][0]+temp[1][1]+temp[1][2])/3;
    
    for(i=0;i<2;i++){		
    		printf("\n%.1f  \n",avgTemp[i]);
		}
		
	return 0;
}
