/*7 Write a program to find the biggest of three numbers using pointers 
  that point to those numbers.*/

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter values of a b and c :");
	scanf("%d %d %d",&a,&b,&c);
	int *p1,*p2,*p3;
	p1=&a;p2=&b;p3=&c;
	if(*p1>*p2 && *p1>*p3)
	{
		printf("P1=%d IS BIG",*p1);
	}
	else if(*p2>*p3)
	{
		printf("P2=%d IS BIG",*p2);
	}
	else
	{
		printf("P3=%d IS BIG",*p3);
	}
}
