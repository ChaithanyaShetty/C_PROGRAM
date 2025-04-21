/*WAP to execute own STRLEN*/

#include<stdio.h>
int strlenn(char a[]);
int main()
{
	char str[20];
	scanf("%[^\n]s",str);
	printf("String length is: ");
	int a=strlenn(str);
	printf("%d",a);
}

int strlenn(char a[])
{
	int i=0;
	while(a[i])
	{
		i++;
	}
	return i;

}
