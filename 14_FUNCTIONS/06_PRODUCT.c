/*6) Write a function that takes two numbers a and b as input arguments and returns their product as return value , without using * operator. */

#include<stdio.h>
int product(int a,int b);
int main()
{
	int a,b;
	printf("Enter values of a and b: ");
	scanf("%d %d",&a,&b);
	product(a,b);
}

int product(int a,int b)
{
	int i,j=0;
	for(i=0;i<b;i++)
	{
		j+=a;
	}

	printf("PRODUCT is %d",j);
}
