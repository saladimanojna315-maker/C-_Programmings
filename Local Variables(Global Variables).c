//global Variables
#include<stdio.h>
void f1();
int a=20;
int main()
{
	int b=30;
	a=a+b;
	printf("%d",a);
	f1();
	return 0;
}
void f1()
{
	int x=40;
	a=a+x;
	printf("%d",a);
}

