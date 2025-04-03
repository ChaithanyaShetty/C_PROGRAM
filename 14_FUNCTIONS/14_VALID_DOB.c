/*14) Write a  function that takes a date as input, and returns 1 if the date is valid, 0 if the date is invalid. */

#include<stdio.h>
int VALID(int d, int m, int y);
int main()
{
	int d1,m1,y1;
	printf("Enter DOB: ");
	scanf("%d %d %d",&d1,&m1,&y1);
	printf("\nCHECKING VALID DOB OR NOT: ");
	int r= VALID(d1,m1,y1);
	if(r==1)
	{
		printf("VALID");
	}
	else
	{
		printf("NOT VALID");
	}

}
int VALID(int d, int m, int y)
{
	if((d>=1 && d<=31) && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12))
		return 1;
	else if((d>=1 && d<=30) && (m==4 || m==6 || m==9 || m==11))
		return 1;
	else if((d>=1 && d<=28)&&(m==2))
		return 1;
	else if((d>=1 && d<=29) && ((y%4==0 && y%100!=0) ||(y%400==0)))
		return 1;
	else
		return 0;
}


