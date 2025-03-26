
/*5) Write  a program to print all 4 digit palindromes. count the number of times the loop runs, and the number of palindromes printed, and print both counts.
Try to make both numbers same. */
#include<stdio.h>
int main()
{
	int a=1000,b=9999;
	int i,j,reverse=0,total=0,m=0,k;
	for(j=a;j<=b;j++)
	{
		k=j;
		reverse=0;
		while(k>0)
		{   
			m=k%10;
			reverse= reverse * 10 +m;
			k=k/10;

		}

		if(j==reverse)
		{
			printf("%d ",j);
			total++;
		}

	}
	printf("Total Palindromes are %d",total);
}
