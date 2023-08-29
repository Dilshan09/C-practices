#include<stdio.h>

int main()
{
	char ID[4];
	char name[8];
	int days,i;
	
	FILE*mPtr;
	
	mPtr=fopen("attendance.dat","w");
	
	if(mPtr==NULL)
	{
		printf("File can not be open!!");
		return -1;
	}
	
	for(i=0;i<2;i++)
	{
		printf("Enter ID");
		scanf("%s",ID);
		printf("Enter NAME");
		scanf("%s",name);
		
		fprintf(mPtr,"%s\t%s\t",ID,name);
		
		for(i=0;i<7;i++)
		{
			printf("Enter days");
		    scanf("%d",&days);
		    
		    fprintf(mPtr,"%d ",days);
		}
	    fprintf(mPtr,"\n");
	}
	
	fclose(mPtr);

	return 0;
}
