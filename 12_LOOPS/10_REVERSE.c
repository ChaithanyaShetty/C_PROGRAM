/*Do the below assignments using do while loop:

10) Write a program to input a number and find and print the reverse of the number.
  */

#include<stdio.h>
int main()
{
	int a,i;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("\nReverse of a number is:");
	do{
		i=a%10;
		a=a/10;
		printf("%d",i);

	}
	while(a>0);
}
