#include<stdio.h>

int main()
{
	int number,row,column,SIZE,count=0;
	int one [50][50];
	int two [50][50];
	
	printf("Enter the SIZE of the matrix:");
	scanf("%d",&SIZE);
	
	printf("The first matrix is :\n");
	for(row=0;row<SIZE;row++){
		
		for(column=0;column<SIZE;column++){
			
			printf("Element:\n");
			scanf("%d",&one [row][column]);
		}
	}
	printf("\n\n");
	printf("The second matrix is :\n");
	for(row=0;row<SIZE;row++){
		
		for(column=0;column<SIZE;column++){
			
			printf("Element:\n");
			scanf("%d",&two[row][column]);
		}
	}
	printf("\n\n");
	printf("First matrix\n");

	for(row=0;row<SIZE;row++){
		
		for(column=0;column<SIZE;column++){
			
			printf("%d ",one[row][column]);
    }
    printf("\n\n");
	}
	printf("Second matrix\n");

	for(row=0;row<SIZE;row++){
		
		for(column=0;column<SIZE;column++){
			
			printf("%d ",two[row][column]);
    }
    printf("\n\n");
	}
	for(row=0;row<SIZE;row++){
		
		for(column=0;column<SIZE;column++){
			
			if(one[row][column]==two[row][column]){
				count=count+1;
			}
    }
	}
	printf("\nThe Matrices can be compared :\n");
	if(count==SIZE*SIZE){
		printf("Two matrices are equal.\n");
	}
	if(count!=SIZE*SIZE)
	printf("Two matrices are not equal.\n");
	
	return 0;
}
