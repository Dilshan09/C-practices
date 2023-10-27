#include<stdio.h>

int main()
{
	FILE*ptr;
	
	int n,c,s,t;
	char name[10],data;
	
	if(ptr == NULL)
	{
		printf("File Employee .txt can onot be found!\n");
		return 0;
	}
	while(n < 5)
	{
		printf("Enter Name :");
		scanf("%s",&name);
		
		printf("Enter Data :");
		scanf("%*c%c",&data);
		
		fprintf(ptr , "%s\t%c\n",name,data);
		n++;
	}
	for (n=0 ; n<5 ;n++)
	{
		fscanf(ptr,"%s,%c",&name,&data);
		
		if(data=='C'||data=='c')
		{
			c++;
		}
		if(data=='S'||data=='s')
		{
			s++;
		}
		if(data=='T'||data=='t')
		{
			t++;
		}
	}
	printf("Counsulting\t%n\nScanning\t%n\nTesting\t%n",c,s,t);
	
	fclose(ptr);
	
	return 0;
}
