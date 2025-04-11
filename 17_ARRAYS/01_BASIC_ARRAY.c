/*1 Write the following program :
Declare an integer array of size 100.
Assign numbers 1-100 to each element of the array.
Print all the numbers.
Print all even elements.
Print all odd elements.
Add 5 to each element and print 6 – 105 numbers.*/

#include<stdio.h>
int main()
{
	int a[100];
	int i;
	for(i=0;i<100;i++)
	{
		a[i]=i+1;
	}

	printf("Array Elements are :");

	for(i=0;i<100;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\nEven Numbers are :" );
	for(i=0;i<100;i++)
	{
		if(i%2!=0)
			printf("%d ",a[i]);
	}
	printf("\nOdd Numbers are :" );
	for(i=0;i<100;i++)
	{
		if(i%2==0)
			printf("%d ",a[i]);
	}
	printf("\n\n");
	for(i=0;i<100;i++)
	{

		a[i]=a[i]+5;
		printf("%d ",a[i]);
	}


}
