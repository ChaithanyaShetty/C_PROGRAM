/*WAP to execute STRCHR(return last occurence index)*/

#include<stdio.h>
int LAST_OCCURENCE(char s1[], char ch);
int main()
{
	char s1[100];char ch;
	printf("Enter STRING:  ");
	scanf("%s",s1);
	printf("\nEnter Character :");
	scanf(" %c",&ch);
	int r=LAST_OCCURENCE(s1,ch);
	if(r==-1)
	{
		printf("\nCHAR NOT FOUND");
	}
	else
	{
		printf("\nFIRST OCCURENCE FOUND AT INDEX %d",r);
	}
}

int LAST_OCCURENCE(char s1[], char ch)
{
	int i,l=-1;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]==ch)
		{
			l=i;

		}

	}

	return l; 
}
