/*4) Write a program to find out the total number of prime numbers
  below 100,000,000 have the sum of their digits equal to 14?*/

#include<stdio.h>
int main()
{
	int a=1,b=100000;
	int i,m,k,sum=0;
	int x,y,count=0,total=0;
	for(i=a;i<=b;i++)
	{
		m=i;
		sum=0;
		while(m>0)
		{
			k=m%10;
			sum+=k;
			m=m/10;

		}
		if(sum==14)
		{
			count=0;
			for(x=1;x<=i;x++)
			{
				if(i%x==0)
				{
					count++;
				}

			}
			if(count==2)
			{
				           printf("%d ",i);
				total++;
			}


		}



	}
	printf("\nTotal prime numbers: %d\n", total);
	return 0;

}

