#include<stdio.h>
	
int main()
{	
    float size[3][5];
    float avgSize[3]={0};
    int i,j;
		    
    for(i=0;i<3;i++){
    	printf("Machine %d.\n",i+1);
    	for(j=0;j<5;j++){
    		printf("Enter chocolate ball size:");
    		scanf("%f",&size[i][j]);
		}
		printf("\n");
	}		    
    for(i=0;i<3;i++){
    	
    	for(j=0;j<5;j++){
    		
    		printf("%.1f  ",size[i][j]);
		}
		printf("\n");
	}
    for(i=0;i<3;i++){
    	
    	for(j=0;j<5;j++){
    		
    		avgSize[i]=	(size[i][0]+size[i][1]+size[i][2]+size[i][3]+size[i][4])/5;
		}	
	}
    for(i=0;i<3;i++){		
    		printf("\n%.1f  \n",avgSize[i]);
		}
		
	return 0;
}
