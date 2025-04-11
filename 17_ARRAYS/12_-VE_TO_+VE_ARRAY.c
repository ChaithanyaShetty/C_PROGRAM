//12 Write a function to modify the array such that all negative numbers are converted to positive.
#include<stdio.h>
void POSITIVE(int a[],int size);
int main()
{
	int size,i;
	printf("Enter value of size");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\nArray Elements are :");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	POSITIVE(a,size);
}

void POSITIVE(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(a[i]<0)
		{
			a[i]=(-(a[i]));
		}
	}
	printf("\nAfter converting -ve elements to +ve are :");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}
