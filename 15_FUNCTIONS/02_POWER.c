/*2) Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n, without using * operator */

#include<stdio.h>
void POWER(int a, int n);
int main()
{
	int a,n;
	printf("Enter values of a and n: ");
	scanf("%d %d",&a,&n);
	POWER(a,n);
}

void POWER(int a, int n)
{
	int i,j,k,p=1,sum;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<p;j++)
		{

			for(k=0;k<a;k++)
			{
				sum++;
			}
		}
		p=sum;

	}
	printf("\n%d",p);
}
