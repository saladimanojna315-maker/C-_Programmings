//write a c program to display fibonacci series using for loop
#include<stdio.h>
int main()
{
	int n,i,f1=0,f2=1,f3;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",f1);
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	return 0;
}
