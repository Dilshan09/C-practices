#include<stdio.h> 
#include<math.h> 
#include<assert.h>

double hypotenuse(double length1, double length2);

int main()
{	

    assert(fabs(hypotenuse(3.0,4.0))-5.0<=0.01);  // three assert statements to debug the function
    printf("Triangle 1 other slide length worked well.\n");
    assert(fabs(hypotenuse(5.0,12.0))-13.0<=0.01);
    printf("Triangle 2 other slide length worked well.\n");
    assert(fabs(hypotenuse(8.0,15.0))-17.0<=0.01);
    printf("Triangle 3 other slide length worked well.\n\n\n");

    double result1,result2,result3;
    result1=hypotenuse(3.0,4.0);     //outputs for othersides 
    printf("Triangle 1 other slide length is %.1lf.\n",result1);
    result2=hypotenuse(5.0,12.0);
    printf("Triangle 2 other slide length is %.1lf.\n",result2);
    result3=hypotenuse(8.0,15.0);
    printf("Triangle 3 other slide length is %.1lf.\n",result3);
    
    return 0;
}
double hypotenuse(double length1, double length2)//function for other side length
{
   double triangle;
   	
   triangle=sqrt(pow(length1,2)+pow(length2,2)); 
 
   return triangle;
}
