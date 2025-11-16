//write a c program of  students percentage with five subject
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	float per;
	printf("enter five subjects:");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	per=(s1+s2+s3+s4+s5)/5.0;
	if(per>=90)
	printf("grade O\n");
	else if(per<90 && per>=80)
	printf("grade A\n");
	else if(per<80 && per>=70)
	printf("grade B\n");
	else if(per<70 && per>=60)
	printf("grade C\n");
	else if(per<60 && per>=50)
	printf("grade D\n");
	else if(per<50 && per>=40)
	printf("grade E\n");
	else
	printf("grade F\n");
	return 0;
}
