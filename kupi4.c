#include<stdio.h>

int main ()
{
char itemCode[5] , description[50];
float price;
FILE *mPtr;
mPtr = fopen("menu.dat" , "r");

if(mPtr==NULL)
	{
		printf("File can not be open.");
		return -1;
	}
	
printf("Item Code\tDescription\tPrice\n");
fscanf(mPtr , "%s%s%f" , itemCode , description , &price);
while(!feof(mPtr))
{
printf("%s\t\t%s\t\t%.2f\n" , itemCode , description , price);
fscanf(mPtr , "%s%s%f" , itemCode , description , &price);
}
fclose(mPtr);
return 0;
}
