#include<stdio.h>
int main(void)
{
	int n,ans=1,i=2;
	scanf("%d",&n);
	
	//factorial
while(i<=n)
{
  ans=ans*i;
  i=i+1;
}
	printf("Result is:%d",ans);
	return 0;
}
