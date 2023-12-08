#include<stdio.h>
int changeArray(int Arr[], int size);

int main()
{
	
	int A[5]={2,8,3,9,10};
	
	
	
	changeArray(A,5);
	
	
	
	
	return 0;
}
int changeArray(int Arr[], int size)
{
	int i;

	for(i=0;i<5;i++)
	{
		printf("%d  ",Arr[i]+4);
	}

}
