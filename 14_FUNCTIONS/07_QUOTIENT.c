/*7) Write a function that takes two numbers a and b, and returns the quotient as output after deviding a with b.
*/ 

#include<stdio.h>
int QUOTIENT(int a, int b);
int main()
{
	int a,b;
	printf("Enter values of a and b");
	scanf("%d %d",&a,&b);
	QUOTIENT(a,b);

}

int QUOTIENT(int a, int b)
{
	int i,count=0;
	while(a>=b)
	{
		a=a-b;
		count++;
	}

	printf("quotient is %d",count);



}
