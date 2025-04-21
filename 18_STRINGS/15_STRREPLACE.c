/*WAP to execute STRREPLACE*/

#include<stdio.h>
void REPLACE(char s1[],char c1,char c2);
int main()
{
	char s1[100];
	printf("Enter s1: ");
	scanf("%s",s1);
	char c1,c2;
	printf("\nPrintf any character from string: ");
	scanf(" %c",&c1);
	printf("\nenter a character to replace in that string: ");
	scanf(" %c",&c2);
	REPLACE(s1,c1,c2);
	printf("\nAfter Replace String is %s",s1);
}
void REPLACE(char s1[],char c1,char c2)
{
	int i;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]==c1)
		{
			s1[i]=c2;
		}
	}
}
