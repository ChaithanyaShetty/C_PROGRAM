/*
3)  print the below patterns using nested for loop and break:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5   */

#include<stdio.h>
int main()
{
	int i,j,a=10;
	for(i=1;i<=a;i++)
	{
		if(i>5)
			break;
		for(j=1;j<=a;j++)
		{
			if(j<=i)
			{
				printf("%d ",j);
			}


		}

		printf("\n");

	}
}
