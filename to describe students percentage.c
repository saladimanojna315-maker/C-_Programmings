//write a c program to determine students percentage
#include<stdio.h>
int main()
{
	int per;
	printf("enter students percentage:");
	scanf("%d",&per);
	if(per>=90)
	printf("grade 0\n");
	else if(per<90 && per>=80)
	printf("grade A\n");
	else if(per<80 && per>=70)
	printf("grade B\n");
	else if(per<70 && per>=60)
	printf("grade C\n");
	else if(per<60 && per>=50)
	printf("grade D\n");
	else if(per<50 && per>=40)
	printf("grade E\n ");
	else
	printf("grade F\n");
	return 0;
}
