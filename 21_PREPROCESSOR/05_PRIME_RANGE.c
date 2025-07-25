//5) WAP to print a range of prime numbers. Use macro,to find if a number is prime or not.

#include<stdio.h>
#define PRIME(A)                    \
	do{                                 \
		int j,count=0;                  \
		for(j=1;j<=A;j++)               \
		{                               \
			if(A%j==0)                  \
			{                           \
				count++;                \
			}                           \
		}                               \
		if(count==2)                    \
		printf("\n%d is PRIME",A);     \
	}while(0);          
int main()
{
	int a,b;
	printf("Enter a and b values to get prime numbers in that range");
	scanf("%d %d",&a,&b);
	int m;
	for(m=a;m<=b;m++)
	{


		PRIME(m);
	}

}

