#include<stdio.h>
#include<math.h>
int main ()
{
	float A, x, h, k;
	x = 2.0;
	h = 6.0;
	k = 1.0;
	
	A = fabs(x-h) + pow(k,2);
	A = pow(A,1.0/3);
	printf("Answer is :%.2f",A);
	
	return 0;
}
