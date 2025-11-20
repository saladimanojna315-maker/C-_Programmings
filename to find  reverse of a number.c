//write a c program to find reverse of a number
#include<stdio.h>
int main()
{
	int n,r,rev;
	printf("enter a number:");
	scanf("%d",&n);
	for(rev=0;n!=0;)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("%d",rev);
	return 0;
}
