/*WAP to execute STRUPR*/

#include<stdio.h>
void UPPER(char s[]);
int main()
{
	char s[100];
	printf("Enter the string: ");
	scanf("%s",s);
	UPPER(s);
	printf("\nLOWER CASE STRING IS: %s",s);
}

void UPPER(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-32;
		}
	}
}
