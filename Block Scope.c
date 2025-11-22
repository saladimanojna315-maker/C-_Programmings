//Block Scope
#include<stdio.h>
int main()
{
	int a=10;
	if(a<15)
	{
		int b=40;
		a=a+b;
		printf("%d\n",b);
	}
	printf("%d",a);
	return 0;
}
