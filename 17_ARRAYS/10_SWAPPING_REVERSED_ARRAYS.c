/*10 Write a program to swap two arrays in reverse order.
  eg.,
input : array1 = {1,2,3,4,5};
array2 = {6,7,8,9,10};

output:

array1 : {10,9,8,7,6}
array2: { 5,4,3,2,1}
 */

#include<stdio.h>
int main()
{
	int size,i,j;

	printf("Enter array size:");
	scanf("%d",&size);
	int a[size];
	int b[size];

	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\nFIRST ARRAY ELEMENTS ARE :");
	for(i=0; i<size; i++)
	{
		printf("%d ",a[i]);
	}

	for(i=0;i<size;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nSECOND ARRAY ELEMENTS ARE :");

	for(i=0; i<size; i++)
	{
		printf("%d ",b[i]);
	}
	int temp;
	for(i=0,j=size-1; i<j; i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;

	}
	printf("\nREVERSED FIRST ARRAY ELEMENTS ARE :");
	for(i=0; i<size; i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0, j=size-1; i<j; i++,j--)
	{
		temp=b[i];
		b[i]=b[j];
		b[j]=temp;

	}
	printf("\nREVRSED SECOND ARRAY ELEMENTS ARE :");
	for(i=0; i<size; i++)
	{
		printf("%d ",b[i]);
	}

	int c[size];
	for(i=0;i<size;i++)
	{
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}

	printf("\nFIRST  ARRAY SWAPPED ELEMENTS ARE :");
	for(i=0; i<size; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nSECOND  ARRAY SWAPPED ELEMENTS ARE :");
	for(i=0; i<size; i++)
	{
		printf("%d ",b[i]);
	}

}
