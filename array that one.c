#include<stdio.h>

int main()
{
	int arr[5] = {0};
	int i, num, repeat = 0;
	
	for(i = 0; i < 5; i++){
		printf("Enter value to the array element %d : ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	for(i = 0; i < 5; i++){
		if(num == arr[i]){
			repeat++;
		}
	}
	
	if(repeat == 0){
		printf("Number not found.");
	}else if(repeat == 1){
		printf("Number not repeated.");
	}else{
		printf("Number repeated %d times.", repeat);
	}
	return 0;
}
