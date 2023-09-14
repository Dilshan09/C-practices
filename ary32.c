#include<stdio.h>
 
int main()
{
	int seat[10] = {0}; 
	int num;
	int i;
	 
	while(1){
		printf("\nPls input the seat number(1 - 10) : ");
		scanf("%d", &num);
		if(num == -1){
			break;
		}
		if(num > 0 && num < 11){
			if(seat[num - 1] == 1){
				printf("\nSorry. The seat %d is reserved.", num);
			}else{
				seat[num - 1] = 1;
			}			
		}else{
			printf("\nSorry. Please input a valid number.");
		}
	}
	printf("\nThe reserved seat numbers are : ");
	for(i = 0; i < 10; i++){
		if(seat[i] == 1)
			printf("%d ", i + 1);
	}
	return 0;
}
