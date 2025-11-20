//write a c program to find factorial of a given number
#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter a value:");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		fact=fact*i;
	}
	printf("fact=%d\n",fact);
	return 0;
}
