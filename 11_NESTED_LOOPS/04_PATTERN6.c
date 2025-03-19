/*       
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
   */
  
#include<stdio.h>
int main()
{
	int i,j,a=5;
	for(i=0;i<a;i++)
	{

		for(j=0;j<=i;j++)
		{
			printf("%d ",(i+1));
		}

		printf("\n");
	}
}
