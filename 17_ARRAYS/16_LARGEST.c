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
	int temp;
	for(i=0;i<size-1;i++)
	{
		for(j=(i+1);j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	printf("\nenter number to find which largest element");
	int number;
	scanf("%d",&number);
	if(number > 0 && number <= size)
	{
		printf("%d largest number is %d\n", number, a[size - number]);
	}

}

