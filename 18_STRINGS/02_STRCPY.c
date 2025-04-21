/*WAP to execute own STRCPY*/

#include<stdio.h>
void strcpyy(char src[],char des[]);
int main()
{
	char src[20]; char des[20];
	printf("Enter S1: ");
	scanf("%s",src);
	printf("\nEnter S2: ");
	scanf("%s",des);
	printf("\nString are: s1=%s  s2=%s",src,des);
	strcpyy(src,des);
}

void strcpyy(char src[],char des[])
{
	int i=0;
	while(src[i]!='\0')
	{
		des[i]=src[i];
		i++;
	}
	des[i]='\0';
	printf("\nCopied string is %s %s",src,des);

}
