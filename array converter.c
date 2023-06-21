#include<stdio.h>

int main(){
	
	int myArr1D[12] ;
	int myArr2D[4][3] ;
	int count,i,j;
	printf("Enter the values for 1D ARRAY \n");
	for( i = 0 ; i < 12 ; i++){
		
		printf("Enter the value %d :" , i+1);
		scanf("%d" , &myArr1D[i]);
		
	}
	
	printf("the 2D ARRAY IS \n");
	for( i = 0 ; i < 4; i++){
		for( j = 0 ; j <3 ;j++){
		
		myArr2D[i][j] = myArr1D[count++];
		printf("%d\t" , myArr2D[i][j]);
		}
		puts("");
	}
	
	
	
	return  0;
}
