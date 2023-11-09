#include<stdio.h>
#include<assert.h>
float range(float marks);
void test_range();
int main()
{
	int result;
	float average;

	printf("Input student average:");
	scanf("%f",&average);
	
	result=range(average);
	
	printf("Student grade is:%d\n",result);
    test_range();
	
	return 0;
}
float range(float marks)
{
    if(marks>=90&&marks<=100)
    {
    return 4;	
	}
	else if(marks<=89&&marks>=80)
    {
    return 3;	
	}
	else if(marks<=79&&marks>=70)
    {
    return 2;	
	}
	else if(marks<=69&&marks>=60)
    {
    return 1;	
	}
	else if(marks<60&&marks>=0  )
	{
	return 0;	
	}	
}
void test_range()
{
	assert(range(98)==4);
    printf("assert statement for return 4 worked well.\n");
    assert(range(87)==3);
    printf("assert statement for return 3 worked well.\n");
    assert(range(77.54)==2);
    printf("assert statement for return 2 worked well.\n");
    assert(range(60.5)==1);
    printf("assert statement for return 1 worked well.\n");
    assert(range(54.4)==0);
    printf("assert statement for return 0 worked well.\n");
    
}

