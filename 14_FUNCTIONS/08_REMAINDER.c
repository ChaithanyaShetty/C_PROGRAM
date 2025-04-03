/*8)  Write a function that takes two numbers a and b, and returns the remainder as output after deviding a with b. */

#include<stdio.h>
int  REMAINDER(int a, int b);
int main()
{
	int a,b;
	printf("Enter values of a and b");
	scanf("%d %d",&a,&b);
	REMAINDER(a,b);

}

int  REMAINDER(int a, int b)
{
	int i,count=0;
	while(a>=b)
	{
		a=a-b;

		count++;
	}

	printf("REMAINDER is %d",a);



}
