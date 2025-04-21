/*WAP to execute own STRNCMP*/

#include<stdio.h>
int NCMP(char s1[],char s2[],int n);
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
	printf("\nEnter Value of n to compare n characters: ");
	scanf("%d",&n);
	printf("\nN value is %d",n);
	int r= NCMP(s1,s2,n);

	if(r==0)
	{
		printf("\nBoth strings are same");
	}
	else
	{
		printf("\nBoth strings are not same and diff is %d",r);
	}
}
int NCMP(char s1[],char s2[],int n)
{
	int i=0;
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
