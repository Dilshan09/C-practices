#include<stdio.h> 
int main() 
{
	char shape;
	float Area,w,l,b,h,r,R,T,t,C,c;
	printf("Rectangle-R/r\nTriangle-T/t\nCircle-C/c"); 
	printf("\n\nEnter your need using above informations :"); 
	shape=getchar();
	
	if(shape=='R'||shape=='r')
	{
		printf("Enter width :"); 
		scanf("%f",&w); 
		printf("Enter length :"); 
		scanf("%f",&l); 
		Area=w*l;
		printf("Area of the rectangle = %.2f",Area);
	}
	else if(shape=='T'||shape=='t')
	{
		printf("Enter base :"); 
		scanf("%f",&b); 
		printf("Enter height :"); 
		scanf("%f",&h); 
		Area=b*h/2;
		printf("Area of the Triangle = %.2f",Area);	
	}
	else if(shape=='C'||shape=='c') 
	{
		printf("Enter radius :"); 
		scanf("%f",&r); 
		Area=3.14285714*r*r;
		printf("Area of the Circle = %.2f",Area);	
	}
	else 
	    printf("Invalid Input !!");
	
	return 0;
}
