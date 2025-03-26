/*Do the below assignments using do while loop:
11) Modify the Calculator Program to take input and perform the chosen operation. If the user chooses one of the operations, +,-,*,/ and % then show the output and continue for next iteration.
If the user chooses wrong operation, then stop the loop.
  */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch ='y';
	do{
		int a,b;
		char n;
		printf("Enter values of a and b:");
		scanf("%d %d",&a,&b);
		printf("\nSelect the operation to perform +,-,*,/ and % ");
		scanf(" %c",&n);
		switch(n)
		{
			case '+' : printf("\nSum is %d",(a+b));break;
			case '-' : printf("\nSub is %d",(a-b));break;
			case '*' : printf("\nMul is %d",(a*b));break;
			case '/' : printf("\nDiv is %d",(a/b));break;
			case '%' : printf("\nMod is %d",(a%b));break;
			default : printf("\n EXITING"); exit(0);
		}
	}
	while(1);
}
