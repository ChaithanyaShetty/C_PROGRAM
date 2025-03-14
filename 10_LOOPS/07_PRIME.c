/*7)  Write a program to find out if an integer entered by a user is a prime number or not. Count the factors of the given number to identify prime number.

Hint: A prime number has only 2 factors, 1 and itself.*/

#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number :");
	scanf("%d",&a);
	printf("\nChecking prime or not....");
	int i,count=0;
	printf("\nFactors of %d: ", a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			printf("%d ",i);
			count++;
		}
	}
	if(count==2)
	{
		printf("\nPRIME");
	}
	else
	{
		printf("\nNOT PRIME");
	}

}

