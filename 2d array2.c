#include<stdio.h>
int main()
{
	int boxes [4][3];
	float volume[4]={0};
	int i,j;
	int k;

	for(i=0;i<4;i++){
		printf("Enter %d boxes detalis\n",i+1);
		for(j=0;j<3;j++){
			
		    printf("Enter values:");
			scanf("%d",&boxes[i][j]);	
		}
	}
	printf("\n\n");
	for(i=0;i<4;i++){
		
		for(j=0;j<3;j++){
			
			printf("%d  ",boxes[i][j]);	
		}
	    printf("\n\n");
	}
	    volume[0]=boxes[0][0]*boxes[0][1]*boxes[0][2];
	    volume[1]=boxes[1][0]*boxes[1][1]*boxes[1][2];
	    volume[2]=boxes[2][0]*boxes[2][1]*boxes[2][2];
		volume[3]=boxes[3][0]*boxes[3][1]*boxes[3][2];
		
		for(k=0;k<4;k++){
				printf("%.2f  ",volume[k]);
	            printf("\n");
		}

	return 0;
}
