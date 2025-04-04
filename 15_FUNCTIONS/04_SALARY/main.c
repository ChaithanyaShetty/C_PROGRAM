#include "header.h"
int main()
{
	int salary,LOP,month,year;
	printf("Enter Salary: ");
	scanf("%d",&salary);
	printf("\nEnter LOP: ");
	scanf("%d",&LOP);
	printf("\nEnter Month and Year: ");
	scanf("%d %d",&month,&year);

	if((salary <0) || (LOP < 0 && LOP >31) || (month < 0 && month > 12) || (year <0))
	{
		printf("INVALID");
		return 1;
	}
	else
	{
		float net_salary=calculatenetsalary(salary,LOP,month,year);
		printf("\nNet Salary is %f",net_salary); 
	}
}
