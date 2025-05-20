/*4 Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer.
 */

#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	int *ptr;
	ptr=&a;
	printf("\nVALUE OF A IS %d",*ptr);
	ptr=&b;
	printf("\nVALUE OF B IS %d",*ptr);
	ptr=&c;
	printf("\nVALUE OF C IS %d",*ptr);



}
