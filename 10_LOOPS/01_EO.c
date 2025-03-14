//1) Write a program to print all odd numbers and even numbers between two given numbers. print odd numbers in one loop and even in another loop after that.

#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter the range to print ODD and EVEN numbers");
	scanf("%d %d",&a,&b);
	int i;
	printf("EVEN Numbers:");
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
	printf("ODD Numbers:");
	for(i=a;i<=b;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
}
