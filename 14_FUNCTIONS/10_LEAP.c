/*10) Write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0. */
#include<stdio.h>
int LEAP(int y);
int main()
{
	int y;
	printf("Enter any year: ");
	scanf("%d",&y);
	printf("\nChecking LEAP year or NOT: ");
	int a= LEAP(y);
	if(a==1)
	{
		printf("LEAP YEAR");
	}
	else
	{
		printf("NOT A LEAP YEAR");
	}
}

int LEAP(int y)
{
	if((y%4==0 && y%100!=0) || (y%400==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
