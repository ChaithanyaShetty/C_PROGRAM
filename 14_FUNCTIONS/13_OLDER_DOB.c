/*13) Write a function that takes 2 dates as inputs, and returns 1 if the first date is old, 2 if the second date is old.*/

#include<stdio.h>
int CHECK(int d1,int m1,int y1,int d2,int m2,int y2);
int main()
{
	int d1,m1,y1,d2,m2,y2;
	printf("Enter DOB1: ");
	scanf("%d %d %d",&d1,&m1,&y1);
	printf("Enter DOB2: ");
	scanf("%d %d %d",&d2,&m2,&y2);
	int r=CHECK(d1,m1,y1,d2,m2,y2);

	if(r==2)
	{
		printf("DOB2 is old %d %d %d",d2,m2,y2);
	}
	else if(r==1)
	{
		printf("DOB1 is old %d %d %d",d1,m1,y1);
	}
	else
	{
		printf("BOTH ARE EQUAL");
	}
}

int CHECK(int d1,int m1,int y1,int d2,int m2,int y2)
{
	if(y2<y1)
		return 2;
	else if(y1<y2)
		return 1;
	else if(m2 < m1)
		return 2;
	else if(m1<m2)
		return 1;
	else if(d2<d1)
		return 2;
	else if(d1<d2)
		return 1;
	else
		return -1;
}

