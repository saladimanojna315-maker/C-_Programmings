//write a c program to find the number of digits in a given number
 #include<stdio.h>
 int main()
 {
 	int n,count=0;
 	printf("enter a number:");
 	scanf("%d",&n);
 	while(n!=0)
 	{
 		count=count+1;
 		n=n/10; 		
	}
	printf("%d",count);
	return 0;
 }
