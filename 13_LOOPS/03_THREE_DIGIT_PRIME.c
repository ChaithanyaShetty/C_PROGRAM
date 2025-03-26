/*3)Write a program to print total number of THREE digit Prime numbers.*/

#include<stdio.h>
int main()
{
	int a=101,b=999;
	int i,j,count=0;
	printf("\nThree digit prime numbers are : ");
	for(i=a;i<=b;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d ",i);
		}

	}
}
