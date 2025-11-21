//write a c program for deletion of an array
#include<stdio.h>
int main()
{
	int a[10],n,p,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter position to delete (1 to %d):",n);
	scanf("%d",&p);
	if(p<1||p>n)
	{
		printf("invalid position!\n");
		return 0;
	}
	else
	{
		for(i=p-1;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
	n--;
	printf("array after deletion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
	return 0;
}
