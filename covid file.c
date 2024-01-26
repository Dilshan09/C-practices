#include <stdio.h>

struct center{
	float x;
	float y;
}A,B;

int main()
{
	float value;
	
    A.x=0;
    A.y=3;
    
    B.x=4;
    B.y=0;
    
    value=sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2));
    
    printf("%.2f ",value);

	return 0;
}
