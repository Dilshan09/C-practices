#include<stdio.h> 
int main() 
{    

      int c=27; 
      int d=456;
      
       
      printf("%d\n",c=c+3); 
      
      printf("%d\n",c-=3); 
      
      printf("%d\n",d+=3);     

      printf("%d\n",c=c/3);
	     
      printf("%d\n",c/=3);  


      printf("%d\n",c=c*3);//answer is 9

      printf("%d\n",c*=3);/*anser is 27 because it multiply by above answer and the
                            other thing is variable is c so every c answers depends on that case*/    
      
	  printf("%d\n",c=c%3);//remainder is the answer

      printf("%d\n",c=!3);

      printf("%d\n",c==3);/*meaning of this symbol is equal 
                          so answer is 0 its meaning is false*/

      printf("%d\n",c=3);/*anser of this is 3 because this code says
                          c must be equal 0 so, in that case answer is 3*/ 

   return 0;
}
