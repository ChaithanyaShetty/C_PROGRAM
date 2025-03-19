/*       
1
2    3
4    5   6
7    8   9    10
11   12  13   14  15
   */
  
#include<stdio.h>
int main()
{
	int i,j,m=0;
	for(i=5;i>0;i--)
	{

		for(j=5;j>=i;j--)
		{
			m++;
			printf("%d  ",m);

		}
		printf("\n");
	}
}
