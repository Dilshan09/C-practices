#include<stdio.h>
#include<string.h>
#define SIZE 5

int main() 

{
    char worda[6]={0};
	char word[SIZE];
	int i;
	
	for(i=0;i<SIZE;i++)
	{
		printf("Enter your %dth array word:",i+1);
	    scanf("%s",&word);
	}
	printf("\n\nYour name is:");
	
	for(i=0;0<5;i++)
	{
		printf("%s\t",word[i]);
	}
	
	    printf("\nEnter your array word:");
	    scanf("%s",&worda);
	
	    printf("your word is:%s",worda);
	    
	    printf("\nyour word have %d letters.",strlen(worda));
	    
	    
	
	return 0;
}
