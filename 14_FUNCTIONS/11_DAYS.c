/*11) Write a function to accept a month and year as input, and return the number of days in that month as output. print the number of days in main.  */ 

#include<stdio.h>
int MONTH(int m, int y);
int main()
{
	int m,y;
	printf("Enter month and year: ");
	scanf("%d %d",&m,&y);
	int n=MONTH(m,y);
	if(n>0)
	{
		printf("MONTH %d HAS %d days",m,n);
	}
	else
	{
		printf("INVALID MONTH");
	}

}

int MONTH(int m, int y)
{
	switch(m)
	{
		case 1 : 
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 : return 31; 

		case 4 :
		case 6 :
		case 9 :
		case 11:return 30;

		case 2: if((y%4==0 && y%100!=0) ||(y%400==0))
			{
				return 29;
			}
			else
			{
				return 28;
			}
		default : return -1;
	}
}
