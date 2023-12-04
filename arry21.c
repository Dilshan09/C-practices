#include <stdio.h>
#include <string.h>
 
int main()
{
  	char string[100];
  	int i, n, palindrome;
  	palindrome = 0;
 
  	printf("Please Enter any String :  ");
  	scanf("%s", string);//input string
  	
  	n = strlen(string);
  	 	   	
  	for(i = 0; i < n; i++)
	{
		if(string[i] != string[n - i - 1])//find palindrome
		{
		palindrome = 1;
			break;	
		} 
	}
	if(palindrome == 0)
	{
		printf("\n %s is a Palindrome String", string);//palindrome
	}
	else
	{
		printf("\n %s is Not a Palindrome String", string);//not a palindrome
	}	
	
  	return 0;
}
