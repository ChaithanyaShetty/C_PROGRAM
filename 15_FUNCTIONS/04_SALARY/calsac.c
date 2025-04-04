#include "header.h"
int calculatenetsalary(int salary, int LOP, int month, int year)
{
	float r=daysinmonth(month,year);

	if(r==31)
	{
		printf("Month %d has %f days",month,r);
	}
	else if(r==30)
	{
		printf("Month %d has %f days",month,r);
	}
	else if(r==29)
	{
		printf("Month %d is a LEAP YEAR it has  %f days",month,r);
	}
	else
	{
		printf("Month %d has %f days",month,r);
	}

	float total_working_days=r-LOP;
	printf("\nTotal Working days are %f",total_working_days);
	float day_salary=salary/r;
	printf("\nPer day  Salary is %f",day_salary);

	float total_salary=(day_salary*total_working_days);

	return total_salary;
}



