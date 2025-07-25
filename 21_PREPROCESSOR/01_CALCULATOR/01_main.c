/*1) Implement calculator program using macros. Write down your own header file ,where the calculator macros are defined(ADD,SUB,MUL,DIV).*/

#include"01_header.h"
int main()
{
	int a,b;
	printf("Enter values of a and b: ");
	scanf("%d %d",&a,&b);
	int r= ADD(a,b);
	printf("\nSUM IS %d",r);
	r=SUB(a,b);
	printf("\nSUB IS %d",r);
	r=MUL(a,b);
	printf("\nMUL IS %d",r);
	r=DIV(a,b);
	printf("\nDIV IS %d",r);
}
