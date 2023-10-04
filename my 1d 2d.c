#include<stdio.h>

int main()
{
    int myArr1D[12];
    int myArr2D[4][3];
    int i,k ;
    
    for(i=0;i<12;i++){
    	scanf("%d",&myArr1D[i]);
	}
	printf("\n\n");
	for(i=0;i<12;i++){
    	printf("%d ",myArr1D[i]);	
	}
	printf("\n\n");
	int j;
	for(i=0;i<4 ;i++){
    	for(j=0;j<3;j++){
    		for(k=0;k<12;k++){
    			myArr1D[k]=myArr1D[i];
    			myArr2D[i][j]=myArr1D[k];
			}
    		
		}	
	}
	for(i=0;i<4;i++){
    	for(j=0;j<3;j++){
    		printf("%d ",myArr2D[i][j]);
		}
		printf("\n");	
	}
	/*for(i=0;i<4;i++){

    	printf("%d %d %d",myArr2D[i][0],myArr2D[i][1],myArr2D[i][2]);
		printf("\n");
	}*/
	
	return 0;
}
