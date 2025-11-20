//write a c program to display and find sum of first n natural numbers using for loop
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
    sum=sum+i;
    }
	printf("sum=%d\n",sum);
	return 0;
}
