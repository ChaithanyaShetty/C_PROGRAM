/*8 Take three input integers x,y and z.
  Write a program to rotate their values such that, 
  x has the value of y, y has the value of z and z has the value of x. 
  Do this using pointers that point to x,y and z.*/
#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter values of x y and z: ");
	scanf("%d %d %d",&x,&y,&z);
	printf("Values of x y and z are x=%d y=%d z=%d",x,y,z);
	int *p1,*p2,*p3;
	p1=&x;p2=&y;p3=&z;
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=*p3;
	*p3=temp;
	printf("\nAfter Rotating Values x=%d y=%d z=%d",*p1,*p2,*p3);
}

