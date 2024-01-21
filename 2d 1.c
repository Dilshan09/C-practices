#include<stdio.h>
#include<string.h>

struct book{
	char bookID[10];
	char title[15];
	int noOfCopy;
	int noOfReaders;
};

int main()
{
	struct book arrayBook[3];
	int i;
	int mostPopularBook = 0;
	char name[15];
	
	for(i = 0; i < 3; i++){
		printf("Book - %d\n", i + 1);
		
		printf("\tEnter the book ID : ");
		scanf("%s", arrayBook[i].bookID);
		
		printf("\tEnter the book title : ");
		scanf("%s", arrayBook[i].title);
		
		printf("\tEnter the no of copy : ");
		scanf("%d", &arrayBook[i].noOfCopy);
		
		printf("\tEnter the no of readers : ");
		scanf("%d", &arrayBook[i].noOfReaders);
	}
	
	for(i = 0; i < 3; i++){
		if(arrayBook[i].noOfReaders >= mostPopularBook){
			mostPopularBook = arrayBook[i].noOfReaders;
			strcpy(name, arrayBook[i].title);
		}
	}
	
	printf("\nMost popular book is %s", name);
	return 0;
}
