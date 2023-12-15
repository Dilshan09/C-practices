#include<stdio.h>


 struct book{
 	
 	int bookID;
 	double price;
 	int pages;
 	
 }book1,book2;

 int main() 
 
 {
 	//book1
 	printf("Enter book 1 ID :"); 
 	scanf("%d",&book1.bookID);
 	printf("\nEnter book 1 Price :"); 
 	scanf("%lf",&book1.price);
 	printf("\nEnter book 1 Pages :"); 
 	scanf("%d",&book1.pages);
 	//book2
 	printf("\n\nEnter book 2 ID :"); 
 	scanf("%d",&book2.bookID);
 	printf("\nEnter book 1 Price :"); 
 	scanf("%lf",&book2.price);
 	printf("\nEnter book 2 Pages :"); 
 	scanf("%d",&book2.pages);
 	//present 
 	printf("\n%d\t%.2lf\t%d",book1.bookID,book1.price,book1.pages);
  	printf("\n%d\t%.2lf\t%d",book2.bookID,book2.price,book2.pages);
 	
 	
 	return 0;
 }
