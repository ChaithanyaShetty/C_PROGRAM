/*12) Write a function ,that can take two integers, swap their values and print their new values. return type should be void. function should print the values.  */

#include<stdio.h>
void SWAP(int a, int b);
void swap(int a, int b);
int main()
{
	int a,b;
	printf("Enter values of a and b: ");
	scanf("%d %d",&a,&b);
	SWAP(a,b);
	swap(a,b);
}
void SWAP(int a, int b)
{
	a^=b;
	b^=a;
	a^=b;

	printf("a=%d and b=%d",a,b);
}
void swap(int a, int b)
{
	a=a-b;
	b=b+a;
	a=b-a;
	printf("\nA=%d and B=%d",a,b);

}
