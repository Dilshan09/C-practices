#include<stdio.h>

int main()
{
	char ID[4];
	char name[8];
	int days,i,j,count=0,count1=0;
	
	FILE*mPtr;
	
	mPtr=fopen("attendance.dat","w");
	
	if(mPtr==NULL)
	{
		printf("File can not be open!!");
		return -1;
	}
	
	for(j=0;j<2;j++)
	{
		printf("Enter ID:");
		scanf("%s",ID);
		printf("Enter NAME:");
		scanf("%s",name);
		
		fprintf(mPtr,"%s\t%s\t",ID,name);
		
		for(i=0;i<7;i++)
		{
			printf("Enter days:");
		    scanf("%d",&days);
		    
		    fprintf(mPtr,"%d ",days);
		}
	    fprintf(mPtr,"\n");
	}
	
	fclose(mPtr);

	mPtr=fopen("attendance.dat","r");

	if(mPtr==NULL)
	{
		printf("File can not be open!!");
		return -1;
	}
	
	for(j=0;j<2;j++)
    {
		
		fscanf(mPtr,"%s%s",ID,name);
		
		for(i=0;i<7;i++)
		{
			
			fscanf(mPtr,"%d",&days);
			
		    if(j==0&&days==1)
		    {
	            count++;
			}
	        if(j==1&&days==1)
	        {	
	             count1  ++;
			}
		   
		}

	}
	printf("\nperson 1 days:%d\n",count);
    printf("\nperson 2 days:%d\n",count1);
	
	fclose(mPtr);

	return 0;
}
