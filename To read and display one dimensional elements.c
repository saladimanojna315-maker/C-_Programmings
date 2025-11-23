//write a c program to read and display one dimensional array
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array elements are:\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}
