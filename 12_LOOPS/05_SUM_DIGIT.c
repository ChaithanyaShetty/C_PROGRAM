/*5) Write a program to input a number and print the sum of the digits of the number.
Eg., 
0 - sum of the digits 0
12 - sum of the digits 3
155 - sum of the digits 11 */

#include<stdio.h>
int main()
{
	int a,i,j=0;
	printf("Enter value of a");
	scanf("%d",&a);
	while(a>0)
	{
		i=a%10;
		j+=i;
		a=a/10;

	}
	printf("Sum of digits are %d",j);
}
