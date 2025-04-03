/*3) Write a function that takes an integer parameter and prints its multiplication table.return type is  void.*/

#include<stdio.h>
#define N 10
void MULTIPLICATION(int A);
int main()
{
	int a;
	printf("Enter any Value to print that table:");
	scanf("%d",&a);
	MULTIPLICATION(a);
}
void MULTIPLICATION(int A)
{
	int i;
	for(i=1;i<=N;i++)
	{
		printf("%d * %d = %d\n",A,i,(A*i));
	}
}
