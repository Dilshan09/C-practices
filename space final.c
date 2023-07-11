#include <stdio.h>

float area( float length, float width);

float add ( float a, float b);

float sub (float a, float b);

int main()

{

float space;

space=(area( 15, 9),area( add ( 5, 3.5), 4.5));

printf("%.2f",space);

return 0;

}
//calculate the area of a rectangle

float area( float length, float width)

{

                  return length * width;

}

//add two numbers

float add ( float a, float b)

{

           return a + b;

}

//subtract two numbers

float sub (float a, float b)

{

          return a - b;

}
