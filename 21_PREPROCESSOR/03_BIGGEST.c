//3) Write down a macro to find the biggest of two numbers. Using this macro , implement array sorting.
#include<stdio.h>
#define MAX(a,b) ((a>b) ? (a) : (b))
int main()
{
	int a[2];
	int i;
	printf("Enter Array Elements: ");
	for(i=0;i<2;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray Elements are: ");
	for(i=0;i<2;i++)
	{
		printf("%d ",a[i]);
	}
	if(a[0]>a[1])
	{
		int temp;
		temp=a[0];
		a[0]=a[1];
		a[1]=temp;
	}

	printf("\nSorted Array Elements are: ");
	for(i=0;i<2;i++)
	{
		printf("%d ",a[i]);
	}
	int r=MAX(a[0],a[1]);
	printf("\nBiggest element is %d",r);
}
