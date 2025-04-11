/*14) write a function to take an array as input, and count how many times the biggest number is repeated in that array, and return the count.
eg., array : {10, 14,16,10, 10 , 16, 14, 14, 16, 16};*/

#include<stdio.h>
int BIG(int a[],int size);

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
	printf("\nArray elements are :");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	int r=BIG(a,size);

	printf("\nBiggest number is repeated %d times",r);
}

int BIG(int a[],int size)
{
	int i,count=0;
	int big=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}
	}

	printf("\nBig is %d",big);
	for(i=0;i<size;i++)
	{
		if(big==a[i])
		{
			count ++;
		}
	}

	return count;

}
