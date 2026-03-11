//WAP to implement word reverse
#include<stdio.h>
#include<string.h>
void REVERSE(char s2[])
{
	printf("\nReverse of string is %s\n",s2);
	int i=0,j,k,count,r=0;
	char s1[100];
	while(s2[i]!='\0')
	{
		count =0;
		for(j=i;s2[j]!=' '&& s2[j]!='\0';j++)
		{
			count++;
		}
		printf("\nJavlues is %d",j);

		for(k=0;k<count;k++)
		{
			s1[r]=s2[i+count-k-1];
			r++;
		}
		if(s2[j]==' ')
		{
			printf("\nCount is %d",count);
			s1[r++]=' ';
			j++;


		}
		i=j;

	}
	s1[r]='\0';

	printf("\nREVERSED STRING IS %s",s1);
}
int main()
{
	char s1[]="LAGISETTY VENKATA NAGA CHAITHANYA";
	printf("\nGiven string is %s",s1);
	int l=strlen(s1);
	printf("\nString length is %d",l);
	char s2[100];
	int i;
	for(i=0;i<l;i++)
	{
		s2[i]=s1[l-i-1];
	}
	s2[i]='\0';
	REVERSE(s2);

}
