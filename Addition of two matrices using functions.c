//write a c pogram addition of two matrices using functions
#include<stdio.h>
void read (int[][10],int,int);
void display (int[][10],int,int);
void add (int[][10],int[][10],int[][10],int,int);
int main()
{
	int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2;
	printf("enter the order first matrix:");
	scanf("%d%d",&r1,&c1);
	printf("enter the order second matrix:");
	scanf("%d%d",&r2,&c2);
	if(r1==r2&&c1==c2)
	{
		printf("enter first matrix:");
		read (a,r1,c1);
		printf("enter second matrix:");
		read (b,r2,c2);
		add(a,b,r1,c1);
		printf("addition of first and second matrix is:\n");
		display(c,r1,c1);
	}
	else
	{
		printf("addition is not possible.");
		return 0;
	}
}
