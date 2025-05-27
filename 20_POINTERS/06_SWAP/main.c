/*6 Write two source files, main.c and swap.c. 
  The main function initializes a two-element array of ints, 
  and then calls the swap function to swap the pair.*/


#include<stdio.h>
void SWAP(int *p1);
int main()
{
	int a[2];
	printf("Enter Array elements: ");
	int i;
	for(i=0;i<2;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray elements are :");
	for(i=0;i<2;i++)
	{
		printf("%d ",a[i]);
	}
	SWAP(a);
	printf("\nAFTER SWAP Array elements are :");
	for(i=0;i<2;i++)
	{
		printf("%d ",a[i]);
	}

}
