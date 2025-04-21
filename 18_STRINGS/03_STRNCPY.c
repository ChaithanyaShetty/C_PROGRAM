/*WAP to execute STRNCPY*/

#include<stdio.h>
void strncpyy(char src[],char des[], int n);
int main()
{
	char src[20]; char des[20];int n;
	printf("Enter S1: ");
	scanf("%s",src);
	printf("\nEnter S2: ");
	scanf("%s",des);
	printf("\nString are: s1=%s  s2=%s",src,des);
	printf("\nEnter Value of n to copy n number of letters");
	scanf("%d",&n);
	strncpyy(src,des,n);
	printf("\nAfter Copied n letters string2 are is %s",des);


}

void strncpyy(char src[],char des[],int n)
{
	int i=0;
	while( src[i]!='\0'&&i<n)
	{

		des[i]=src[i];
		i++;
	}
	des[i]='\0';



}

