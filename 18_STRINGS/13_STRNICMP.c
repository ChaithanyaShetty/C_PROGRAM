/*WAP to execute own STRICMP*/

#include<stdio.h>
int INCMP(char s1[],char s2[],int n);
int main()
{
	char s1[100];
	char s2[100];
	int n;

	printf("Enter S1: ");
	scanf("%s",s1);
	printf("\nEnter S2: ");
	scanf("%s",s2);
	printf("\nS1= %s    s2=%s",s1,s2);
	printf("\nEnter value of n to compare n characters: ");
	scanf("%d",&n);
	int r= INCMP(s1,s2,n);

	if(r==0)
	{
		printf("\nBoth strings are same");
	}
	else
	{
		printf("\nBoth strings are not same and diff is %d",r);
	}
}
int INCMP(char s1[],char s2[],int n)
{
	int i,k;
	for(i=0;s1[i]!='\0' && i<n;i++)
	{
		if(s1[i]>='A' && s1[i]<='Z')

			s1[i]=s1[i]+32;
	}
	for(k=0;s2[k]!='\0' && k<n;k++)
	{
		if(s2[k]>='A' && s2[k]<='Z')

			s2[k]=s2[k]+32;
	}
	printf("\nAFTER CONVERT S1=%s   S2=%s",s1,s2);
	i=0;
	while(i<n)
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
