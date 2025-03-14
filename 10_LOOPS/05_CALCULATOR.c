/*5) Modify the Calculator Program to take input and perform the chosen operation. After each input and output, check if the user wants to continue. if the user does not choose n, then ask for input again. if user chooses n, then stop the loop.*/

#include<stdio.h>
int main()
{

	char c='y';
	while(c=='y')
	{
		printf("\nEnter any two numbers to perform arithmetic operations: ");
		int a,b;
		scanf("%d %d",&a,&b);
		char ch;
		printf("\nEnter operator to perform operation:");
		scanf(" %c",&ch);
		switch(ch)
		{
			case '+' : printf("\nSum is %d",(a+b));break;
			case '-' : printf("\nSub is %d",(a-b));break;
			case '*' : printf("\nMul is %d",(a*b));break;
			case '/' : printf("\nDiv is %d",(a/b));break;
			default: printf("\nNot a valid Operator");

		}
		printf("\nDo you want to continue(y/n) :");
		scanf(" %c",&c);
	}

}
