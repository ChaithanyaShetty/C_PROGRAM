/*5 Declare 3 pointer variables of integer type, and an integer variable.
  Assign the address of integer variable to the 3 pointers. 
  Print the variable value using indirection on each pointer variable. 
  Change the variable value directly and check the values of each of the pointers 
  using indirection. Change the variable value , using each pointer and print the 
  variable value and indirected values of all pointers every time you change.*/

#include<stdio.h>
int main()
{
	int *p1,*p2,*p3;
	int x;
	printf("Enter value of x: ");
	scanf("%d",&x);
	p1=&x;p2=&x;p3=&x;
	printf("\nValue of pointers P1=%d P2=%d P3=%d",*p1,*p2,*p3);
	x=20;
	printf("\nAFTER CHANGING X=20");
	printf("\nValue of pointers P1=%d P2=%d P3=%d",*p1,*p2,*p3);
	*p1=30;
	printf("\nAFTER CHANGING *P1=30");
	printf("\nValue of pointers P1=%d P2=%d P3=%d",*p1,*p2,*p3);
	*p2=40;
	printf("\nAFTER CHANGING *P2=40");
	printf("\nValue of pointers P1=%d P2=%d P3=%d",*p1,*p2,*p3);
	*p3=50;
	printf("\nAFTER CHANGING *P3=50");
	printf("\nValue of pointers P1=%d P2=%d P3=%d",*p1,*p2,*p3);

}
