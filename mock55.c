#include<stdio.h>

int main ()
{
char itemCode[5] , description[50];
float price;
int i,quentity;
FILE *mPtr;
mPtr = fopen("item.dat" , "a");
for (i = 0 ; i < 3 ; i ++)
{
printf("Enter Item Code : ");
scanf("%s" , itemCode);
printf("Enter Description : ");
scanf("%s" , description);
printf("Enter Unity Price : ");
scanf("%f" , &price);
printf("Quentity : ");
scanf("%d" , &quentity);
fprintf(mPtr , "%s\t%s\t%.2f\t%d\n" , itemCode , description , price,quentity);
}
fclose(mPtr);
return 0;
}
