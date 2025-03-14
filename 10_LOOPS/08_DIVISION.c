/*8) Write a program to find the quotient and reminder of two given numbers upon division, without using / and % operators.

  eg.,
  8 3
quotient : 2 ( without using /)
remainder : 2 (without using %)*/

#include<stdio.h>
int main()
{
	int a,b,i=0;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);

	while(a>=b)
	{
		a=a-b;
		i++;
	}

	printf("\nRemainder is %d",a);
	printf("\nQuotient is %d",i);
}
