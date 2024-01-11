#include<stdio.h>
#define SIZE1 40
#define SIZE2 50

int main()

{
	char string[SIZE1];
	char string1[SIZE2];
	
	printf("Enter your string:");
	scanf("%40s",string);
	
	strcpy(string1,string);
	
	printf("\n\nYour input is %s\n",string1);
	
	
	return 0;
}

