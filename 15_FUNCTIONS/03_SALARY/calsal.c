#include<stdio.h>
int NoOfDaysinMonth(int m, int y);
int IsLeapYear(int y);
float CalculateNetSalary(float Total_Salary, int LOP, int month, int year);

float CalculateNetSalary(float Total_Salary, int LOP, int month, int year)
{
	float r= NoOfDaysinMonth(month,year);
	if(r==29)
	{
		printf("\n%d is LEAP YEAR AND February has %f DAYS",year,r);
	}
	else if(r==28)
	{
		printf("\n%d is NOT LEAP YEAR AND February has %f DAYS",year,r);
	}
	else if(r==30)
	{
		printf("\n%d is NOT LEAP YEAR AND it has %f DAYS",year,r);
	}
	else
	{
		printf("\n%d is NOT LEAP YEAR AND it has %f DAYS",year,r);
	}
	float working_days=r-LOP;//calculating working days
	printf("\nAfter Deduct LOP NO OF WORKING DAYS ARE : %f",working_days);
	float per_day_salary=(Total_Salary/r);
	float Net_Salary=(per_day_salary*working_days);

	return Net_Salary;
}
