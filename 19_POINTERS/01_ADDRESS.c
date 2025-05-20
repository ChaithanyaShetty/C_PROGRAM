/*1 Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).*/


#include<stdio.h>
int main()
{
	int a=10;
	printf("ADDRESS OF VARIABLE IS %p",&a);
	printf("\nVALUE OF VARIABLE IS %d",a);
	printf("\nSIZEOF VARIABLE IS %zu",sizeof(a));
	int *ptr;
	ptr=&a;
	printf("\nSIZE OF PTR IS %zu",sizeof(ptr));
	printf("\nVALUE OF PTR IS %d",*ptr);

}
