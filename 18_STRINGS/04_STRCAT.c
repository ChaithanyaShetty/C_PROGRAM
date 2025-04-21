/*WAP to execute own STRCAT*/

#include<stdio.h>
void strcatt(char s1[], char s2[]);
int main()
{
	char s1[100];
	char s2[20];
	printf("enter string1: ");
	scanf("%s",s1);
	printf("enter string2: ");
	scanf("%s",s2);
	strcatt(s1,s2);
	printf("\nAfter Concatenated S1 is: %s",s1);
}

void strcatt(char s1[], char s2[])
{
	int i=0,k=0;
	while(s1[i]!='\0')
	{
		i++;
	}
	while(s2[k]!='\0')
	{
		s1[i]=s2[k];
		k++;
		i++;
	}
	s1[i] = '\0';



}
