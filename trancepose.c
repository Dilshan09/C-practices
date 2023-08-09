#include<stdio.h>
int main(void)
{
  int trans[3][3];
  int i,j;
  
  //reading the Array in  metrics manner
  for(i=0;i<3;i++){      
  
    for(j=0;j<3;j++)
      scanf("%d",&trans[i][j]);
  }
//printing the metrices 3*3
printf("\nMetrics A : ");
  for(i=0;i<3;i++){
  printf("\n");
    for(j=0;j<3;j++)
      printf("\t%d",trans[i][j]);
  }
    //printing the metrices in tranpose manner 2*3
    printf("\nMetrics A transpose : ");
  for(i=0;i<3;i++){
  printf("\n");
    for(j=0;j<3;j++)
      printf("\t%d",trans[j][i]);
  }
}
