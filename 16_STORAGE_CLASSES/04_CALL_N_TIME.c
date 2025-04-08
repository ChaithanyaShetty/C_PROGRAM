/*4) WAP - with a function that prints the following message every nth time it is called : Hello! I am called nth time. Print the appropriate subscript after the n, depending on the last digit.
Output : The function should print the following ,
I am called 1st time.
I am called 2nd time.``
I am called 3rd time…etc.
The subscripts also should be printed appropriately. (st, nd ,rd and th etc.).
Hint : numbers ending with 1 will have st as subscript.
Numbers ending with 2 will have nd as subscript.
Similarly, numbers ending with 3 will have rd and all the remaining numbers will have th.*/

#include<stdio.h>
void CALL(int n);
int main()
{
	static int n;
	printf("Enter values of n: ");
	scanf("%d",&n);
	CALL(n);
}

void CALL(int n)
{
	int i, c;
	for(i = 1; i <= n; i++)
	{
		// Check last two digits for 11, 12, 13
		if(i % 100 == 11 || i % 100 == 12 || i % 100 == 13)
		{
			printf("I am called %dth time.\n", i);
		}
		else
		{
			c = i % 10;
			if(c == 1)
			{
				printf("I am called %dst time.\n", i);
			}
			else if(c == 2)
			{
				printf("I am called %dnd time.\n", i);
			}
			else if(c == 3)
			{
				printf("I am called %drd time.\n", i);
			}
			else
			{
				printf("I am called %dth time.\n", i);
			}
		}
	}
}

