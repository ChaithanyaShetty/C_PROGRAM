/*9) Write a calculator program with 5 functions below to do the operations of addition, subtraction, multiplication, division for quotient and division for remainder.
1) int add (int a, int b) // to be called when user chooses +
2) int sub (int a,int b) // to be called when user chooses -
3) int mul(int a, int b) // to be called when user chooses *
4) int quotient(int a, int b) // to be called when user chooses /
5) int remainder(int a,int b) // to be called when user choose%
*/

#include<stdio.h>


int add (int a, int b)
{
	printf("ADD IS %d",a+b);
}
int sub (int a, int b)
{
	printf("SUB IS %d",a-b);
}
int mul (int a, int b)
{
	printf("MUL IS %d",(a*b));
}
int quo (int a, int b)
{
	printf("QUO IS %d",(a/b));
}
int mod (int a, int b)
{
	printf("MOD IS %d",(a%b));
}

int main()
{
	int a,b;
	printf("Enter values of a and b: ");
	scanf("%d %d",&a,&b);
	printf("\nEnter the operator which you want(+,-,*,/,%): " );
	char ch;
	scanf(" %c",&ch);

	switch(ch)
	{
		case '+' : add(a,b);break;
		case '-' : sub(a,b);break;
		case '*' : mul(a,b);break;
		case '/' : quo(a,b);break;
		case '%' : mod(a,b);break;
		default  : printf("\nNOT VALID OPERATOR");
	}


}


