/*WAP to execute own STRCMP*/


#include<stdio.h>
int CMP(char s1[],char s2[]);
int main()
{
	char s1[100];
	char s2[100];

	printf("Enter S1: ");
	scanf("%s",s1);
	printf("\nEnter S2: ");
	scanf("%s",s2);
	printf("\nS1= %s    s2=%s",s1,s2);
	int r= CMP(s1,s2);

	if(r==0)
	{
		printf("\nBoth strings are same");
	}
	else
	{
		printf("\nBoth strings are not same and diff is %d",r);
	}
}

int CMP(char s1[],char s2[])
{
	int i=0,k=0;
	while(s1[i] != '\0' || s2[i] != '\0')
	{
		if(s1[i]==s2[i])
		{
			i++;
		}
		else
		{
			return s1[i]-s2[i];
		}
	}
	return 0;
}

