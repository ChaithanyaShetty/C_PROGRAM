/*2)Write a program to read two numbers, and print all prime numbers between the given numbers.
print how many prime numbers are there at the end.*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter values of a and b");
	scanf("%d %d",&a,&b);
	int i,j=1,count=0,PRIME_COUNT=0;
	for(i=a;i<=b;i++)
	{       count=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				count ++;
			}
		}

		if(count==1)
		{
			printf("\n%d is PRIME",i);
			PRIME_COUNT++;
		}



	}

	printf("\nTOTAL PRIME NUMBERS ARE : %d",PRIME_COUNT);
	//  printf("%d %d",a,b);
}
