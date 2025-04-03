/*5) Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.
*/

#include<stdio.h>
int POWER(int a, int n);
int main()
{
	int a,n;
	printf("Enter values of a and n: ");
	scanf("%d %d",&a,&n);
	POWER(a,n);

}
int POWER(int a, int n)
{
	int i=0,j=1;
	for(i=0;i<n;i++)
	{
		j*=a;


	}
	printf("%d",j);
}
