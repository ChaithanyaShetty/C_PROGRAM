/*2) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function return value should be stored in another global variable in operations file and be used to print in main.*/

#include<stdio.h>
int a,b,r;
int add();
int sub();
int mul();
int divi();
int main()
{
	printf("Enter values of a and b: ");
	scanf("%d %d",&a,&b);
	char choice;
	printf("\nEnter Choice(+,-,*,/): ");
	scanf(" %c",&choice);
	if(choice=='+')
	{
		add();
		printf("\nSUM is %d",r);
	}
	else if(choice== '-')
	{
		sub();
		printf("\nSUB is %d",r);

	}
	else if(choice=='*')
	{
		mul();
		printf("\nMUL is %d",r);
	}
	else if(choice=='/')
	{
		divi();
		printf("\nDIV is %d",r);
	}
	else
	{
		printf("\nNOT VALID OPERATOR");
	}
}
