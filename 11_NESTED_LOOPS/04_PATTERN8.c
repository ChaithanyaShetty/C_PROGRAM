/*       
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
   */

#include<stdio.h>
int main()
{
	int i,j,a=5;
	for(i=1;i<=a;i++)
	{

		for(j=0;j<i;j++)
		{
			if((i+j)%2!=0)
			{
				printf("1 ");

			}
			else
			{
				printf("0 ");
			}
		}

		printf("\n");
	}
}
