/*8) Write a program to find the quotient and reminder of two given numbers upon division, without using / and % operators considering negative and positive operands.

Hint: Division is continuous subtraction until the reminder is smaller than the devisor.*/
#include<stdio.h>
int main()
{
	int a,b,count=0;
	printf("Enter values of a and b:");
	scanf("%d %d",&a,&b);
	int i=0;
	while(b>a)
	{
		b=b-a;
		count++;

		printf("\n B VALUE IS %d",b);

	}
	printf("\nQuotient is %d",count);
	printf("\nRemainder is %d",b);
}
