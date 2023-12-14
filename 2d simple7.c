 #include<stdio.h>

int main()
{
	int marks[3][4];
    int student,grade,min=100,max=0;
    float one,two,three;

	for(student=0;student<3;student++)
	{
	   printf("\nEnter %d student marks:\n\n",student+1);
		for(grade=0;grade<4;grade++)
		{
			printf("Enter %d  marks:",grade+1);
			scanf("%d",&marks[student][grade]);
		}
	}
	printf("\n");
    for(student=0;student<3;student++)
	{
		for(grade=0;grade<4;grade++)
		{
			printf("%d ",marks[student][grade]);
		
		}
		printf("\n");
	}
    for(student=0;student<3;student++)
	{
		for(grade=0;grade<4;grade++)
		{
		    if(marks[student][grade]<min){
		    	min=marks[student][grade];
			}
			if(max<marks[student][grade]){
		    	max=marks[student][grade];
			}
		}
	}
	printf("Lowest grade: %d\n",min);
	printf("Highest grade:%d\n",max);

    one=(marks[0][0]+marks[0][1]+marks[0][2]+marks[0][3])/4.0;
	two=(marks[1][0]+marks[1][1]+marks[1][2]+marks[1][3])/4.0;
	three=(marks[2][0]+marks[2][1]+marks[2][2]+marks[2][3])/4.0;
	
	printf("The average grade for student 1 is %.2f\n",one);
	printf("The average grade for student 2 is %.2f\n",two);
	printf("The average grade for student 3 is %.2f\n",three);
	
	return 0;
}
