#include<stdio.h>

int main()
{
	char word[10];
	int i,j,count=0,count1=0,count2=0,count3=0,count4=0,count5=0;
	int Arr[5][5];
	int Arrrr[5];
	
	FILE*mPtr;
	mPtr=fopen("word.dat","w");
	
	if(mPtr==NULL)
	{
		printf("File can not be open.");
	}
	
	for(i=0;i<5;i++)
	{
		printf("Enter your word:");
		scanf("%s",word);
		fprintf(mPtr,"%s\n",word);
	}
		
	fclose(mPtr);
	
    mPtr=fopen("word.dat","r");
	
	if(mPtr==NULL)
	{
		printf("File can not be open.");
	}
	printf("\n\n");
	fscanf(mPtr,"%s",word);
	while(!feof(mPtr))
	{
	for(j=0;j<5;j++)
	{
	    Arrrr[j]=word;
			for(i=0;i<5;i++)
			{
				Arr[j][i]=Arrrr[j];
			
			    if(Arr[j][i]=='a'||Arr[j][i]=='A')
			    {
			    	count1=count+1;
				}
				if(Arr[j][i]=='e'||Arr[j][i]=='E')
			    {
			    	count2=count+1;
				}
				if(Arr[j][i]=='i'||Arr[j][i]=='I')
			    {
			    	count3=count+1;
				}
				if(Arr[j][i]=='o'||Arr[j][i]=='O')
			    {
			    	count4=count+1;
				}
				if(Arr[j][i]=='u'||Arr[j][i]=='U')
			    {
			    	count5=count+1;
				}
		     
			}
			count=count1+count2+count3+count4+count5;
			printf("%s:%d\n",word,count);
	        fscanf(mPtr,"%s",word); 
	}
		
		
	}
		
	fclose(mPtr);
	return 0;
}
