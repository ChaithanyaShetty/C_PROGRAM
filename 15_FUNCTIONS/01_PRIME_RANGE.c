/*1) Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers using the prime number function written above.return type should be void.
PrintAllPrimes - return type is void. Should use IsPrime() function written yesterday. */

#include<stdio.h>
void IsPrime(int a);
void PAP(int a,int b);
int main()
{
	int a,b;
	printf("Enter values of a and b");
	scanf("%d %d",&a,&b);
	PAP(a,b);
}

void PAP(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		IsPrime(i);

	}
}

void IsPrime(int a)
{
	int count=0,i;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}


	if(count==2)
	{
		printf("\n%d is PRIME ",a);
	}

}
