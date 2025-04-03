/*4) Write a function to determine if a character is alphanumeric or not and print the appropriate output in main function.
Hint: int fun_alpha_num(char c)*/

#include<stdio.h>
int fun_alpha_num(char a);
int main()
{
	char a;
	printf("Enter value of a: ");
	scanf(" %c",&a);
	int c= fun_alpha_num(a);
	if(c==1)
	{
		printf("ALPHA NUMERIC");
	}
	else
	{
		printf("NOT ALPHANUMERIC");
	}

}
int fun_alpha_num(char a)
{
	if((a >= 'a'&& a <= 'z')||(a >= 'A' && a <= 'Z')||(a >= '0' && a <= '9'))
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
