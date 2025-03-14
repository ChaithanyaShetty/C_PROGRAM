/*10) Find the sum of numbers entered by the user, as long as the user enters positive numbers. Stop the process when the user enters a negative number (dont add negative number).*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter n value to read n numbers");
	scanf("%d",&n);
	int i,j=0;
	printf("\nEnter the numbers: ");
	for(i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		if(a>0)
		{
			j+=a;
		}
		else
		{
			break;
		}
	}
	printf("Sum of integers are %d",j);
}
