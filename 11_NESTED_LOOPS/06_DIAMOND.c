/*5) Print the below pattern without using nested loops

           *
         * * *
       * * * * *
    * * * * * * *
   * * * * * * * * *
    * * * * * * *
       * * * * *
         * * *
            *  
*/

#include<stdio.h>
int main()
{
	int i,j,a=5;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a-i-1;j++)
		{
			printf("  ");
		}
		for(j=0;j<((2*i)+1);j++)
		{
			printf("* ");
		}

		printf("\n");
	}
	for(i=a-2;i>=0;i--)
	{
		for(j=0;j<a-i-1;j++)
		{
			printf("  ");
		}



		for(j=0;j<(2*i)+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}




