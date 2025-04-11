/*8 Write a program to reverse an array and print it (Reverse the array by swapping both edges of the array and move inside and repeat till middle of the array):
Input : array1 ={1,2,3,4,5};
Output : array1 = {5,4,3,2,1};*/


#include<stdio.h>
int main()
{
	int size;
	printf("Enter value of size:");
	scanf("%d",&size);
	int a[size];
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\nArray elements are: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}

	int temp,j;
	for(i=0,j=(size-1);i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;


	}
	printf("\nReversed Array elements are :");
	for(i=0;i<size;i++)
	{
		printf(" %d ",a[i]);
	}

}

