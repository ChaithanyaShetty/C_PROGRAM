/*11) Find the sum of n positive numbers entered by the user. If the user enters, negative number, dont add it, ask for another positive number instead.*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter n value to read n numbers");
	scanf("%d",&n);
	int i=0,j=0;
	printf("\nEnter the numbers: ");
	while(i<n)
	{
		int a;
		scanf("%d",&a);
		if(a>0)
		{
			j+=a;
			i++;
		}
		else
		{
			printf("\nPlease enter positive number:");

		}
	}
	printf("Sum of integers are %d",j);
}
