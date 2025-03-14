/*3) Write a program to input a number and count the digits in it.
  Eg.
  0 - number of digits 1
  12 – number of digits 2
  155 – number of digits 3*/

#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number to calculate no of digits in it: ");
	scanf("%d",&a);
	int c=0;
	while(a>0)
	{

		a=a/10;
		c++;

	}
	printf("Sum of digits are %d",c);
}
