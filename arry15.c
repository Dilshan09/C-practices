#include<stdio.h>
#include<string.h>
#define SIZE1 25
#define SIZE2 15

int main ( void )
{
	
         char first[]= "Array hodt ghl purudu weyn bhallooo";
         char second[ SIZE1];
         char word[SIZE2];
   
         printf("The length of this first array is : %d\n", strlen(first));
         
         strcpy( second , first );
         
         printf("The string in first array is : %s\n",second);
         
        
         printf("\n\n");
         
         printf("Enter a word:");
         scanf("%s",word);
         
         strcpy( second , word );
         
         printf("Enter a word:%s\n",second);
         
         printf("The string in array y is : %s\n", second);
         
         printf("The length of this array is : %d\n", strlen(word));
         
         
         

} 
