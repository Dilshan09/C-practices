#include<stdio.h> 
float circleArea(float radius); 
float cirlclePeri(float radius);
float recArea( float width,float length);
int main()
{
	float height,radius,result;
	
	printf("Enter height:");
	scanf("%f",&height);
	printf("Enter  radius:");
	scanf("%f",&radius);
	
	result=(2*circleArea(radius)+recArea(height,cirlclePeri(radius)));
	printf("Total area is %.2f .",result);
}
float circleArea(float radius)
{
	float area; 
	
	area=22/7.0*radius*radius;
	
	return area;
}
float cirlclePeri(float radius)
{	
	float perimeter;
	
	perimeter=2*(22/7.0)*radius;
	
	return  perimeter;	
}
float recArea( float width,float length)
{	
	float rectangle; 
	
	rectangle=width*length;
	
	return rectangle;
}

