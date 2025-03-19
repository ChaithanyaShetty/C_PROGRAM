/*4) print the below patterns using nested loops:
 *
 * *
 * * *
 * * * *
 * * * * * */

#include<stdio.h>
int main()
{
	int i=0,a=5,j;
	for(;i<a;i++)
	{
		for(j=0;j<=i;j++)
		{

			printf(" *");

		}
		printf("\n");
	}
}
