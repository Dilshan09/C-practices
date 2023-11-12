 #include<stdio.h>
 #define SIZE 5
 int main()
 {
 	int i,j,sat;
 	int seat[]={0};
 	int next[]={1,2,3,4,5,6,7,8,9,10};
 	
 	printf("Pls input the seat number(1-10):");
 	scanf("%d",&sat);
 	
 	if(sat>=1&&sat<=10)
	{ 	
 	while(sat!=-1)
 	{
 		
 		for(i=0;i<10;i++)
 		{
 			sat=seat[i];
 		
		}
		
 		printf("Pls input the seat number(1-10):");
 	    scanf("%d",&sat);
 	          if (sat==-1)
	          {
	          printf("\n");
			  }
 	          else if(sat>=1&&sat<=10)
			  {
              	 sat=seat[i];
	          }
	          else
              {
 	             printf("Sorry.Please input a valid seat number.\n");	
        	  }
 	}
    }  
    else if (sat==-1)
 	printf("\n");
 	else
 	{
	
 	printf("Sorry.Please input a valid seat number.\n");	
	}
	
 	return 0;
 }
