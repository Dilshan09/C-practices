#include <stdio.h>

int main ()

{
  int num,num1,count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8,count9;	

  printf("Enter four bit number:");
  scanf("%d",&num);
  
  num1=num%1000;
  if(num1/2)
  {
  	count0=count0+1;
  }
  if(num1/3)
  {
  	count1=count1+1;
  }
  num1=num%100;
  if(num1/2)
  {
  	count2=count2+1;
  }
  if(num1/3)
  {
  	count3=count3+1;
  }
  num1=num%10;
  if(num1/2)
  {
  	count4=count4+1;
  }
  if(num1/3)
  {
  	count5=count5+1;
  }
  num1=num%10;
  if(num1/2)
  {
  	count6=count6+1;
  }
  if(num1/3)
  {
  	count7=count7+1;
  }
  count8=count0+count2+count4+count6;
  count9=count1+count3+count5+count7;
  printf("Even number count is %d.\n",count8);
  printf("Odd number count is %d.",count9);
  
  return 0;
}
