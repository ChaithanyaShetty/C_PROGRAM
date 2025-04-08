/*1) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function returns the result as return value. */


#include "operations.h"
int a,b;
int add();
int sub();
int mul();
int divi();
int main()
{
	printf("Enter values of a and b: ");
	scanf("%d %d",&a,&b);
	char choice; int r;
	printf("\nEnter Choice(+,-,*,/): ");
	scanf(" %c",&choice);
	if(choice=='+')
	{
		r= add();
		printf("\nSUM is %d",r);
	}
	else if(choice== '-')
	{
		r=sub();
		printf("\nSUB is %d",r);

	}
	else if(choice=='*')
	{
		r=mul();
		printf("\nMUL is %d",r);
	}
	else if(choice=='/')
	{
		r=divi();
		printf("\nDIV is %d",r);
	}
	else
	{
		printf("\nNOT VALID OPERATOR");
	}
}
