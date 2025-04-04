/*2) Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n, without using * operator    */


#include<stdio.h>

int POWER(int a, int n);

int main()
{
	int a, n;
	printf("Enter value of a and n: ");
	scanf("%d %d", &a, &n);

	int r = POWER(a, n);

	printf("\n%d POWER %d VALUE is %d\n", a, n, r);
	return 0;
}

int POWER(int a, int n)
{
	int i, j;
	int c = 0, d = 1;

	for(i = 0; i < n; i++)
	{
		c = 0;

		for(j = 0; j < a; j++)
		{
			c += d;
		}

		d = c;
	}

	return d;
}

