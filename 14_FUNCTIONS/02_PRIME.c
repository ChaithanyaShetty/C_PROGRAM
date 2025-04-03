/*2) write a function that can take an integer as input and return 1, if the number is prime number and 0 if it is not prime and print appropriate output message.
return type is integer. function name IsPrime - returns int (0 or 1)*/

#include<stdio.h>
int IS_PRIME(int A);
int main()
{
	int a;
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("\nChecking Prime or Not: ");
	int c=IS_PRIME(a);
	if(c==1)
	{
		printf("PRIME");
	}
	else
	{
		printf("NOT PRIME");
	}
}

int IS_PRIME(int A)
{
	int i,j,count=0;
	for(i=1;i<=A;i++)
	{   
		if(A%i==0)
		{
			count++;
		}

	}
	if(count==2)
		return 1;
	else
		return 0;
}
