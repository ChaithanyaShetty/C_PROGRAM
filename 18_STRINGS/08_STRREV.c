/*WAP to execute STREV*/

#include<stdio.h>
void REVERSE(char s1[],char s2[]);
int main()
{
	char s1[100];
	char s2[100];
	printf("Enter the string: ");
	scanf("%s",s1);
	REVERSE(s1,s2);
	printf("\nREVERSE CASE STRING IS: %s",s2);

}

void REVERSE(char s1[],char s2[])
{
	int i,k=0;
	while(s1[k]!='\0')
	{
		k++;
	}
	printf("LENGTH IS %d",k);
	k=k-1;//because its taking null character
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[k];
		k--;
	}
	s2[i]='\0';
}
