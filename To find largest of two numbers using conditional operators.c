//To find largest of two numbers using conditional operators
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	(a>b)?printf("%d is larger",a):printf("%d is larger",b);
	return 0;
}
