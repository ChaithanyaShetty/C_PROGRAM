/*WAP to execute own STRICMP*/


#include<stdio.h>
int ICMP(char s1[],char s2[]);
int main()
{
	char s1[100];
	char s2[100];

	printf("Enter S1: ");
	scanf("%s",s1);
	printf("\nEnter S2: ");
	scanf("%s",s2);
	printf("\nS1= %s    s2=%s",s1,s2);
	int r= ICMP(s1,s2);

	if(r==0)
	{
		printf("\nBoth strings are same");
	}
	else
	{
		printf("\nBoth strings are not same and diff is %d",r);
	}
}

int ICMP(char s1[],char s2[])
{
	int i,k;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='A' && s1[i]<='Z')
			s1[i]=s1[i]+32;
	}
	for(k=0;s2[k]!='\0';k++)
	{
		if(s2[k]>='A' && s2[k]<='Z')
			s2[k]=s2[k]+32;
	}
	printf("\nAFTER CONVERT S1=%s   S2=%s",s1,s2);
	i=0;
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

