# include <stdio.h>

int main(void)

{
   int num[5] = {2, 5, 8, 4, 9};
   int i,j;

    printf("\nBefore rotation:");

    for(i = 0; i < 5; i++) 
   {
    printf("%d\t", num[i]);
   }
    
    printf("\n\nAfter rotation:");

   for(j = 0; j < 5; j++)
   {
   	num[i] = num[4-j];

   	printf("%d\t", num[4-j]);
   }

  return 0;

}
