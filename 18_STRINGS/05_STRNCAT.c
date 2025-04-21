/*WAP to execute own STRNCAT*/

#include<stdio.h>
void NCAT(char s1[],char s2[],int n);
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
	printf("\nEnter value of n :");
	scanf("%d",&n);
	NCAT(s1,s2,n);
	printf("After NCAT S1 is : %s",s1);
}

void NCAT(char s1[],char s2[],int n)
{
	int i=0,k=0;
	while(s1[i]!='\0')
	{
		i++;
	}
	while(k<n && s2[k] != '\0')
	{
		s1[i]=s2[k];
		i++;
		k++;
	}
	s1[i]='\0';  
}
