//To demonstrate Bitwise operators
#include<stdio.h>
int main()
{
	int a=6,b=5;
	printf("%d&%d=%d\n",a,b,a&b);
	printf("%d|%d=%d\n",a,b,a|b);
	printf("~%d=%d\n",a,~a);
	printf("%d^%d=%d\n",a,b,a^b);
	printf("%d<<2=%d\n",a,a<<2);
	printf("%d>>2=%d\n",a,a>>2);
	return 0;
}
