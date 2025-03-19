/*       
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
   */

#include<stdio.h>
int main()
{
	int i,j,a=5;
	for(i=5;i>0;i--)
	{

		for(j=5;j>=i;j--)
		{

			printf("%d ",i);

		}
		printf("\n");
	}
}
