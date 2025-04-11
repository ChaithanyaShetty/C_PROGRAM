/*3 Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print.*/


#include<stdio.h>
int main()
{
	int a[10];
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Array elements are :");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	int big,small,big_index,small_index;
	big=a[0];small=a[0];
	for(i=0;i<9;i++)
	{
		if(a[i]>big)
		{
			big= a[i];
			big_index=i;
		}

		if(a[i]<small)
		{
			small=a[i];
			small_index=i;
		}


	}

	printf("Big is %d and its index is %d",big,big_index);
	printf("Small is %d and its index is %d",small,small_index);

}
