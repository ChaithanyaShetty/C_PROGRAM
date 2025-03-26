/*Do the below assignments using do while loop:

9)Write a program to input a number and count the digits in it.
Eg.
0 - number of digits 1
12 – number of digits 2
155 – number of digits 3  */


#include<stdio.h>
int main()
{
	int a,i,j=0;
	printf("Enter value of a:");
	scanf("%d",&a);
	do{
		i=a%10;
		a=a/10;
		j++;
	}
	while(a>0);

	printf("Number of digits are : %d",j);
}
