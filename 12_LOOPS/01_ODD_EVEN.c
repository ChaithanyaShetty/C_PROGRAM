/* 1) Write a program to print all odd numbers and even numbers between two given numbers. print odd numbers in one loop and even in another loop after that.*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter values of a and b :");
	scanf("%d %d",&a,&b);
	int i;
	printf("\nODD NUMBERS are : ");
	for(i=a;i<=b;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}

	printf("\nEVEN NUMBERS are : ");
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}
