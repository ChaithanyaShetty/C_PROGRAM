//4) WAP to print if  a character is alphabet or number , using macros.

#include<stdio.h>
#define CHAR(x) \
	do{  \
		if (((x) >= 'a' && (x) <= 'z') ||((x) >= 'A' && (x) <= 'Z')) \
		printf("Given Char is Alphabet\n");                                         \
		else if((x) >= '0' && (x) <= '9')                       \
		printf("Given Char is Number\n");                                   \
		else                                            \
		printf("Not Valid");                     \
	}while(0)

int main()
{
	char a;
	printf("Enter any Character");
	scanf(" %c",&a);
	CHAR(a);
}
