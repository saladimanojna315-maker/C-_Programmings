//write a c program to find even sum and odd sum from 0 to n
#include<stdio.h>
int main()
{
	int n,i,esum=0,osum=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%2==0)
		{
			esum=esum+i;
		}
		else
		{
			osum=osum+i;
		}
	}
	printf("esum=%d\n",esum);
	printf("osum=%d\n",osum);
	return 0;
}
