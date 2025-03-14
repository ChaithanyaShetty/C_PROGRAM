/*9) find the sum of n numbers entered by the user. Also, print the sum of positive numbers and negative numbers seperately.*/

#include<stdio.h>
int main()
{
	printf("enter value of n");
	int n;
	scanf("%d",&n);
	int i,count=0,positive=0,negative=0;
	printf("Enter values of n numbers\n");
	for(i=0;i<n;i++)
	{
		int a;

		scanf("%d",&a);

		count+=a;
		if(a>0)
		{
			positive+=a;
		}
		else
		{
			negative+=a;
		}
	}
	printf("\nSum of %d numbers are %d",n,count);
	printf("\nSum of Postive Numbers are :%d",positive);
	printf("\nSum of Negative Numbers are :%d",negative);
}
