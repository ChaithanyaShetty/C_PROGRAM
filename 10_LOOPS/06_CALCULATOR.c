/*5)6)  Modify the Calculator Program to take input and perform the chosen operation. If the user chooses one of the operations, +,-,*,/ and % then show the output and continue for next iteration.
  If the user chooses wrong operation, then stop the loop.
 */

#include<stdio.h>
int main()
{


	while(1)
	{
		char ch;
		printf("\nEnter any of the (+,-.*,/)operator to perform operation:");
		scanf(" %c",&ch);
		if (ch != '+' && ch != '-' && ch != '*' && ch != '/') 
		{
			printf("\nInvalid operator! Exiting program.\n");
			break;
		}
		printf("\nEnter any two numbers to perform arithmetic operations: ");
		int a,b;
		scanf("%d %d",&a,&b);

		switch(ch)
		{
			case '+' : printf("\nSum is %d",(a+b));break;
			case '-' : printf("\nSub is %d",(a-b));break;
			case '*' : printf("\nMul is %d",(a*b));break;
			case '/' : printf("\nDiv is %d",(a/b));break;
			default: printf("\nNot a valid Operator to perform arithemtic operator");

		}
	}

}
