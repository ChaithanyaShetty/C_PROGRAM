/*WAP to execute STRLWR*/

#include<stdio.h>
void LOWER(char s[]);
int main()
{
	char s[100];
	printf("Enter the string: ");
	scanf("%s",s);
	LOWER(s);
	printf("\nLOWER CASE STRING IS: %s",s);
}

void LOWER(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	}
}
