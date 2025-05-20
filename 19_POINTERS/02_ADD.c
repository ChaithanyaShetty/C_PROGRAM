/*2 Write a program to add two variables using thier pointers.*/

#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *p1=&a,*p2=&b;
	printf("SUM OF A AND B IS %d",(*p1+*p2));
}
