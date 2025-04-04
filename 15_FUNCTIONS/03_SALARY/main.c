#include<stdio.h>
int NoOfDaysinMonth(int m, int y);
int IsLeapYear(int y);
float CalculateNetSalary(float Total_Salary, int LOP, int month, int year);

int main()
{
	int Total_Salary,LOP,month,year;
	printf("Enter Total Salary: ");
	scanf("%d",&Total_Salary);
	printf("\nEnter LOP: ");
	scanf("%d",&LOP);
	printf("\nEnter Month and Year: ");
	scanf("%d %d",&month,&year);
	if (Total_Salary < 0 || LOP < 0 || LOP > 31 || month < 1 || month > 12 || year < 1) {
		printf("Invalid input. Please check values.\n");
		return 1;
	}

	else
	{
		float netSalary = CalculateNetSalary(Total_Salary, LOP, month, year);
		printf("\nNet Salary is: %.2f\n", netSalary);

	}
	return 0;

}
