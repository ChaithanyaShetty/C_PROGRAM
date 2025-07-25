/*2) Write down a macro to find out the biggest of two numbers.
  MAX(x,y) should define code to find biggest of x and y.*/

#include<stdio.h>
#define MAX(x,y) ((x) > (y)?(x):(y))     

int main()
{
	int a,b;
	printf("Enter values of a and b: ");
	scanf("%d %d",&a,&b);
	int r=MAX(a,b);

	printf("Big is %d",r);

}
