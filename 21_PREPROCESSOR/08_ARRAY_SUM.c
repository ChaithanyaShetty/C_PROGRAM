/*8) Using the above macro, write a program to compute the sum of all 
  elements in an array.*/

#include<stdio.h>
#define PRINT(arr,m)\
	do{                 \
		int k,sum=0;              \
		for(k=0;k<m;k++)    \
		{                   \
			printf("%d ",arr[k]);\
			sum+=arr[k];        \
		}                   \
		printf("\nSum of Array elements is %d",sum);\
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



