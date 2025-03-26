/*1) Write a program to print the first n Fibonacci numbers.

Eg., First 8 Fibonacci numbers are :
1  1  2  3  5  8  13  21 */

#include<stdio.h>
int main()
{
	int n;
	printf("Enter value of n");
	scanf("%d",&n);
	int a=1,b=1,i=0;
	printf("%d %d ",a,b);
	int next=0;
	for(i=2;i<n;i++)
	{
		next=a+b;
		printf("%d ",next);
		a=b;
		b=next;
	}
}
