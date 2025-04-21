//OWNATOI


#include<stdio.h>
int OWNATOI(char str[]);
int main()
{
	char str[10];
	printf("Enter the Number: ");
	scanf("%s",str);
	int r=OWNATOI(str);

	printf("\nNUMBER IS : %d",r);
}

int OWNATOI(char str[])
{
	int sign=1, i=0,result=0;
	if(str[i]=='+'||str[i]=='-')
	{
		if(str[i]=='-')
		{
			sign=-1;
		}
		i++;

	}

	for(;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9' )
		{

			result = result * 10 + (str[i] - '0');

		}
		else
		{
			break;
		}
	}
	return result*sign;
}
