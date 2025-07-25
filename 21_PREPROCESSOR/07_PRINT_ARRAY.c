/*7) Define  a macro that receives an array and the number of elements in the array 
  as arguments. Write a program using this macro to print out the elements of an array.*/

#include<stdio.h>
#define PRINT(arr,m)\
	do{\
		int k;\
		for(k=0;k<m;k++)\
		{\
			printf("%d ",arr[k]);\
		}\
	}while(0);

int main()
{
	int n;
	printf("Enter value of n to take elements into array: ");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray elements are: ");
	PRINT(a,n);
}          
