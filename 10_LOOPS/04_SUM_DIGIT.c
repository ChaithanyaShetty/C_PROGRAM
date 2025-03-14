/*4) Write a program to input a number and print the sum of the digits of the number.
  Eg., 
  0 - sum of the digits 0
  12 - sum of the digits 3
  155 - sum of the digits 11*/

#include<stdio.h>
int main()
{
	int a,i,j=0;
	printf("Enter a number to find sum of its digits: ");
	scanf("%d",&a);
	while(a>0)
	{
		i=a%10;
		a=a/10;
		j+=i;

	}

	printf("Total count is %d",j);
}


