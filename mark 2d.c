#include<stdio.h>

int main()
{
	double mark[3][3];
	double average[3]={0};
	int student,module;
	 
	for(student=0;student<3;student++){
	 	printf("\nStudent  %d:\n\n",student+1);
	 	for(module=0;module<3;module++){
	 	
	 	printf("Module %d:",module+1);
	 	scanf("%lf",&mark[student][module]);
	}
	}
	     printf("\n\n");
	     
	for(student=0;student<3;student++){
	 	for(module=0;module<3;module++){
	 		
	 	printf("%.2lf\t",mark[student][module]);
	}
		 printf("\n\n");
	}
     
	  for(student=0;student<3;student++){
	 		
	 	average[student]=(mark[student][0]+mark[student][1]+mark[student][2])/3;
	 	printf("Student %d average is %.2lf.\n",student+1,average[student]);
	 		
    }

	return 0;
}	 		

