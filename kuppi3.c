#include<stdio.h>

int main ()
{
char itemCode[5] , description[50];
float price;
int i;
FILE *mPtr;
mPtr = fopen("menu.dat" , "a");

if(mPtr==NULL)
	{
		printf("File can not be open.");
		return -1;
	}
	
for (i = 0 ; i < 3 ; i ++)
{
printf("Enter Item Code : ");
scanf("%s" , itemCode);
printf("Enter Description : ");
scanf("%s" , description);
printf("Enter Price : ");
scanf("%f" , &price);
fprintf(mPtr , "%s %s %.2f\n" , itemCode , description , price);
}
fclose(mPtr);
return 0;
}
