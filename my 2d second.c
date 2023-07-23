#include<stdio.h>

int main()
{
    int myArr1D[12];
    int myArr2D[4][3];
    int i,k ;
    
    for(i=0;i<12;i++){
    	scanf("%d",&myArr1D[i]);
	}
    int j;
	
	for(i=0;i<4;i++){
    	for(j=0;i<3;j++){
    		if(i==0)
		       myArr2D[i][j] = myArr1D[i+1*j] ;
		    else
		      myArr2D[i][j] = myArr1D[1*j];
		}
	} 
    
    for(i=0;i<4;i++){
    	for(j=0;i<3;j++){
    		printf("%d ",myArr2D[i][j]);
		}
		printf("\n\n");
		
	} 
	return 0;
}
