/*6) Write a macro to print the biggest of three values. Try to call it and print the result for different data types of input parameters, integer, float, double and character.
hint:macro parameters dont need data type declaration. so we can send any data type as parameter.*/

#include<stdio.h>
#define BIGGEST(a,b,c) ((a > b)? ((a > c) ? a: c) : ((b > c)? b : c))
int main()
{
	int i=10,j=20,p=30;
	float m=10.000,n=30.000,k=20.000;
	double x=20.000,y=40.0000,z=50.00000;
	char d='1',e='2',f='3';
	printf("INT Biggest is %d\n",BIGGEST(i,j,p));
	printf("Float Biggest is %0.5f\n",BIGGEST(m,n,k));
	printf("DOUBLE Biggest is %0.5lf\n",BIGGEST(x,y,z));
	printf("CHAR Biggest is %d\n",BIGGEST(d,e,f));
}  
