/*Do the below assignments using break statement:

12) Write a program to find out if an integer entered by a user is a prime number or not. Count the factors of the given number to identify prime number.
*/

#include<stdio.h>
int main()
{
	int a,count=0;
	printf("Enter value of a");
	scanf("%d",&a);
	int i;
	for(i=1;i<=a;i++)
	{

		if(a%i==0)
		{
			count++;
		}
		if(count>2)
			break;
	}
	if(count==2)
	{
		printf("%d is prime",a);
	}
	else
		printf("Not prime");

	printf("\nFactors of %d are %d",a,count);
}



