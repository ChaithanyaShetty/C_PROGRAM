//7 Write a program to print an array in reverse order.


#include<stdio.h>
int main()
{
	int size;
	printf("Enter array size: ");
	scanf("%d",&size);
	int i,a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\nArray elements are :");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\nReverse of an array :");
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}
