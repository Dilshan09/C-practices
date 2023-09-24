#include<stdio.h>

int main()
{
	int units[3][4];
	int id,id1,month,maxnum=0;
	 
	 for(id=0;id<3;id++){
	 	printf("Customer id  %d:\n",id+1);
	 	for(month=0;month<4;month++){
	 	
	 		printf("Enter units for %d month:",month+1);
	 		scanf("%d",&units[id][month]);
		 }
	 }
	     printf("\n\n");
	     
	 for(id=0;id<3;id++){
	 	for(month=0;month<4;month++){
	 		
	 		printf("%d\t",units[id][month]);
		 }
		 printf("\n\n");
	 }
	 for(id=0;id<3;id++){
	 	for(month=0;month<4;month++){
	 		if(maxnum<units[id][month]){
	 			id1=id+1;
	 			maxnum=units[id][month];
			 }	
		 }
	 }
     printf("Customer %d has %d maximum number units ",id1,maxnum);
	return 0;
}
