#include<stdio.h> 
#include<assert.h> 
float qualityPoint(float range);

int main()
{
   assert(4==qualityPoint(100));//assert statements for debug
   assert(4==qualityPoint(95));
   assert(4==qualityPoint(90));
   
   assert(3==qualityPoint(80));
   assert(3==qualityPoint(85));
   assert(3==qualityPoint(89));
   
   assert(2==qualityPoint(70));
   assert(2==qualityPoint(75));
   assert(2==qualityPoint(79));
   
   assert(1==qualityPoint(69));
   assert(1==qualityPoint(65));
   assert(1==qualityPoint(60));
   
   assert(0==qualityPoint(59));
   assert(0==qualityPoint(0));
   assert(0==qualityPoint(-12));
   
   int final;
   float average;
	
   printf("Enter student average marks:");
   scanf("%f",&average);

   final=qualityPoint(average);
   printf("Student average point is %d.",final);//final point
}
float qualityPoint(float range)//function for qualityPoint
{
	int result;
	
	if(range>=90&&range<=100)
	result=4;
	if(range>=80&&range<=89)
	result=3;
	if(range>=70&&range<=79)
	result=2;
	if(range>=60&&range<=69)
	result=1;
	if(range<60)
	result=0;
	
	return result;
}
