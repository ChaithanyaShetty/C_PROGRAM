/*
3) Calculate the salary of an employee for a given month and year, after deducting the salary for lose of pay days.
His total monthly salary, and number of days of Loss of Pay (LOP), & month & year are provided as input. Validate the negative cases like –ve salary, -ve date or –ve year in main, before calling other functions.

Print the net salary in main function. */



#include<stdio.h>
int  IsLeapYear(int   y);
int NoOfDaysinMonth(int  m, int  y);
int main()
{
	int Total_Salary,LOP,month,year;
	float r;
	printf("Enter Total Salary: ");
	scanf("%d",&Total_Salary);
	printf("\nEnter LOP: ");
	scanf("%d",&LOP);
	printf("\nEnter Month and Year: ");
	scanf("%d %d",&month,&year);
	if((Total_Salary>0) && (LOP >0 && LOP <30) && (year >0)&&(month>=1 && month <=12))
	{
		r= NoOfDaysinMonth(month,year);
	}
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

	printf("\nMonth Net salary of employee is %f",Net_Salary);

}

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
