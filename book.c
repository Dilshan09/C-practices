#include<stdio.h>
#include<string.h>

struct book{
	    
	char bookId[10];
	char name[15];
	int readers;
	int pages;
	
}book1,book2,book3;
	
int main()
{	
	char book[3];
	int i,j;

		printf("Book 1 ID:");
		scanf("%s",&book1.bookId);
        printf("Book Name:");
		scanf("%s",&book1.name);  
        printf("Book Readers:");
		scanf("%d",&book1.readers);  
        printf("Book Pages:");
		scanf("%d",&book1.pages);
		printf("\n");
	 
	    printf("Book 2 ID:");
		scanf("%s",&book2.bookId);
        printf("Book Name:");
		scanf("%s",&book2.name);  
        printf("Book Readers:");
		scanf("%d",&book2.readers);  
        printf("Book Pages:");
		scanf("%d",&book2.pages);
		printf("\n");
	    
		printf("Book 3 ID:");
		scanf("%s",&book3.bookId);
        printf("Book Name:");
		scanf("%s",&book3.name);  
        printf("Book Readers:");
		scanf("%d",&book3.readers);  
        printf("Book Pages:");
		scanf("%d",&book3.pages);
		printf("\n");	

			book[0]=book1.bookId;
		    book[0]=book1.name;
		    book[0]=book1.readers;
		    book[0]=book1.pages;
		
			book[1]=book2.bookId;
		    book[1]=book2.name;
		    book[1]=book2.readers;
		    book[1]=book2.pages;
		
			book[2]=book3.bookId;
		    book[2]=book3.name;
		    book[2]=book3.readers;
		    book[2]=book3.pages;

		    
    for(i=0;i<3;i++){
    	for(i=0;i<4;i++){
    		printf("%c ",book[i]);
		}
		printf("\n");
	}		    

	
	return 0;
}
