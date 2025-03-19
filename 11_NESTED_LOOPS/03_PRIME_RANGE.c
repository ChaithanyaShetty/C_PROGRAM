/*3) Write a program to read two numbers, and print all prime numbers between the given numbers.
print how many prime numbers are there at the end.*/



#include<stdio.h>
int main()
{
	printf("Enter values of a and b: ");
	int a, b, count = 0, prime_count = 0;
	scanf("%d %d", &a, &b);

	int i, j;
	for (i = a; i <= b; i++)  
	{
		count = 0;  

		for (j = 1; j <= i; j++)  
		{
			if (i % j == 0)
			{
				count++;
			}
		}

		if (count == 2)  
		{
			printf("\n%d is prime", i);
			prime_count++; 
		}
	}

	printf("\nTotal number of prime numbers: %d\n", prime_count);

	return 0;
}

