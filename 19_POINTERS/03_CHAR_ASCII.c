/*3 Write a program to take input for two character variables using pointers and find out which character has higher ascii value.
 */

#include<stdio.h>
int main()
{
	char a;
	char b;
	printf("Enter value of a: ");
	scanf(" %c",&a);
	printf("Enter value of b: ");
	scanf(" %c",&b);
	char *p1=&a,*p2=&b;
	if(*p1<*p2)
	{
		printf("*P2 HAS HIGHER ASCII VALUE THAN P1,P2=%d",*p2);
	}
	else
	{
		printf("*P1 HAS HIGHER ASCII VALUE THAN P2,P1= %d",*p1);
	}
}
