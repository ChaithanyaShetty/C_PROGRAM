#include<stdio.h>
int main()
{
	int size;
	printf("enter size of array: ");
	scanf("%d",&size);
	int a[size];
	int i,j,k;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\nArray elements are: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}

	for(i=0;i<size;i++)
	{
		for(j=(i+1);j<size;j++)
		{
			if(a[i]==a[j])
			{
				printf("\nJ is %d and SIZE is %d",j,(size-1));
				for(k=j;k<size-1;k++)
				{
					a[k]=a[k+1];
				}
				j--;
				size--;
			}

		}
	}
	printf("\nAfter Removed Duplicate Array elements are: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}
