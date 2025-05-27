//1 Write a program to swap two numbers using Call by Value and Call by Reference.

#include<stdio.h>
int VALUE(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;

	printf("\nAFTER SWAPPING VALUES A AND B USING CALL BY VALUE A=%d B=%d",a,b);
}
int REFERENCE(int *p1, int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("\nAFTER SWAPPING VALUES A AND B USING CALL BY REFERENCE A=%d B=%d",*p1,*p2);

}
int main()
{
	int a,b;
	printf("Enter values of a and b: ");
	scanf("%d %d",&a,&b);
	printf("Original values: A=%d B=%d\n", a, b);

	VALUE(a,b);
	int *p1,*p2;
	p1=&a;p2=&b;
	REFERENCE(&a,&b);
	printf("\nAFTER SWAPPING VALUES A AND B USING CALL BY REFERENCE A=%d B=%d",a,b);

}
