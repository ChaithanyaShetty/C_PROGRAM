/*Do the below assignments using break statement:

13) Write a program to read two numbers, and print all prime numbers between the given numbers. print how many prime numbers are there at the end.

*/

#include<stdio.h>
int main()
{
	int a,b,count=0,PRIME_COUNT=0;
	printf("Enter value of a and b");
	scanf("%d %d",&a,&b);
	int i,j;
	for(i=a;i<=b;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
				if (count > 2)
				{ 
					break;
				}
			}
		}

		if (count==2)
		{
			printf("\n%d is prime",i);
			PRIME_COUNT++;
		}

	}

	printf("\nTotal number of prime numbers in the range of %d and %d are %d",a,b,PRIME_COUNT);
}



