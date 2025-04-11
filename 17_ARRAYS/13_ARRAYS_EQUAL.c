/*13) write a function to take 2 arrays as input and return 1 if they are equal 
and 0 if they are not equal ( sizes to be sent as seperate arguments)*/

#include<stdio.h>
int SIZE(int a[],int b[],int size_1,int size_2);
int main()
{
	int size_1,size_2;
	printf("Enter first array size");
	scanf("%d",&size_1);
	printf("\nEnter second array size");
	scanf("%d",&size_2);
	int a[size_1],b[size_2];
	int i;
	printf("\nEnter First array elements:");
	for(i=0;i<size_1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nFirst array elements are :");
	for(i=0;i<size_1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nEnter Second array elements:");
	for(i=0;i<size_2;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nSecond array elements are :");
	for(i=0;i<size_2;i++)
	{
		printf("%d ",b[i]);
	}

	int r=SIZE(a,b,size_1,size_2);
	if(r==0)
	{
		printf("\nBoth arrays are not same");
	}
	else
	{
		printf("\nBoth arrays are  same");
	}
}

int SIZE(int a[],int b[],int size_1,int size_2)
{
	int i;


	if(size_1!=size_2)
		return 0;
	for(i=0;i<size_1 && i<size_2;i++)
	{
		if(a[i]!=b[i])
			return 0;
	}
	return 1;

}
