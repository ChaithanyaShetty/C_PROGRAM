#include<stdio.h>
int NoOfDaysinMonth(int m, int y);
int IsLeapYear(int y);
float CalculateNetSalary(float salary, int lop, int month, int year);

int NoOfDaysinMonth(int  m, int  y)
{
	int l;
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
	{
		return 31;
	}
	else if(m==4 || m==6 || m==9 || m==1)
	{
		return 30;
	}
	else
	{
		l=  IsLeapYear(y);
		if(l==1)
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}


}
int  IsLeapYear(int   y)
{
	if((y%4==0 && y%100!=0)||(y%400==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
