/*1) Write a function to calculate simple interest. Call it in main function with appropriate inputs and print the total amount the user will get after the tenure (principle + interest)*/

#include<stdio.h>
int SIMPLE_INTEREST(int P, int R, int T)
{
	int SI;
	SI= P * R * T /100;
	return SI;
}
int main()
{
	int p,r,t;
	printf("Enter principal amount: ");
	scanf("%d",&p);
	printf("\nEnter Rate of Interest: ");
	scanf("%d",&r);
	printf("\nEnter Tenure: ");
	scanf("%d",&t);
	int c=SIMPLE_INTEREST(p,r,t);

	printf("\nSIMPLE INTEREST IS %d",c);
	int total=p+c;
	printf("\nTOTAL AMOUNT + INTEREST is %d",total);

}

