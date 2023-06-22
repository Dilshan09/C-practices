#include<stdio.h>

void changeArray(int arr[], int size);

int main()
{
	int A[5] = { 2, 8, 3, 9, 10};
	int i;
	
	changeArray(A, 5);
	
	for(i = 0; i < 5; i++){
		printf("%d ", A[i]);
	}
	return 0;
}

void changeArray(int arr[], int size)
{
	int i;
	for(i = 0; i < size; i++){
		arr[i] += 4;
	}
}
