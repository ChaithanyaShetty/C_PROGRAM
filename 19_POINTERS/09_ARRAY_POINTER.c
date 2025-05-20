/*9 Declare an integer array of size 10 and initialize it to some values.
  Print the addresses of each element of the array using a pointer. 
  using indirection operator , print the value stored in each element of the array.*/

#include<stdio.h>
int main()
{
	int a[10];int *p;p=a;
	int i;
	printf("Enter The elements in array: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Array Elements ADDRESS are: ");
	for(i=0;i<10;i++)
	{
		printf("%p ",&a[i]);
	}

	printf("\nARRAY ELEMENTS PRINTING USING POINTER: ");
	for(i=0;i<10;i++)
	{
		printf("%d ",*(p+i));
	}
}
