//WAP to Execute ALPHANUMERIC

#include<stdio.h>
int AN(char s[]);
int main()
{
	char s[100];
	printf("Enter ANY ALPHANUMERIC: ");
	scanf("%s",s);
	int r=AN(s);
	if(r==1)
	{
		printf("\nALPHA NUMERIC");
	}
	else
	{
		printf("NOT ALPHANUMERIC");
	}
}

int AN(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || 
					(s[i]>='0' && s[i]<='9')))
		{
			return 0;
		}
	}
	return 1;
}
