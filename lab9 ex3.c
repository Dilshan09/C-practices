#include<stdio.h>
int main()
{
	int mark [3][3];
	float average [3]={0};
	int i,j;
	int k;

	for(i=0;i<3;i++){
		printf("Student no %d \n",i+1);
		for(j=0;j<3;j++){
			
		    printf("Score %d:",j+1);
			scanf("%d",&mark[i][j]);	
		}
	}
	printf("\n\n");
	/*for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
			printf("%d  ",mark[i][j]);	
		}  
	}*/
	    printf("\nStudent No\tExam Scores\t\tAverage\n");
	
	    average[0]=(mark[0][0]+mark[0][1]+mark[0][2])/3;
	    average[1]=(mark[1][0]+mark[1][1]+mark[1][2])/3;
	    average[2]=(mark[2][0]+mark[2][1]+mark[2][2])/3;
	    
		for(i=0;i<3;i++){
			printf("%d\t\t",i+1);	
		for(j=0;j<3;j++){
			
		    printf("%d  ",mark[i][j]);
				
		}
		printf("\t\t%.2f",average[i]);
		printf("\n");
	}
	return 0;
}
