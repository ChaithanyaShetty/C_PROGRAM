/*6 Write a function to search for a specific element given by the user, in an array and display its index.  Function takes array and element to search as inputs, and returns the index as output. If element not found, return -1.
*/
#include<stdio.h>

int SEARCH(int arr[],int size);

int main()
{
	int r;int size;
	printf("Enter value of size:");
	scanf("%d",&size);
	int arr[size];

	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray elements are :");

	r=SEARCH(arr,size);

	if(r==-1)
	{
		printf("\n Number not found");

	}
	else
	{
		printf("\nNumber found at index %d",r);
	}
}

int SEARCH(int arr[],int size)
{
	int i;
	int number;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter any number from array elements to find its index:");
	scanf("%d",&number);
	for(i=0;i<size;i++)
	{

		if(arr[i]==number)
		{
			return i;

		}


	}
	return -1;
}


