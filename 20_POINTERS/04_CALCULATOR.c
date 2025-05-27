/*4 Write a function that can take two integers as input, and gives 5 outputs : 
  addition, subtraction, multiplication, quotient and reminder of those two numbers. 
  Print the outputs in the main function.*/

#include<stdio.h>
void calculate(int *p1,int *p2,int a[])
{
	a[0]=*p1+*p2;
	a[1]=*p1-*p2;
	a[2]=(*p1)*(*p2);
	a[3]= (*p1)/(*p2);
	a[4]= *p1%*p2;

}
int main()
{
	int a,b;
	printf("Enter values of a and b: ");
	scanf("%d %d",&a,&b);
	int c[5];

	calculate(&a,&b,c);

	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",c[i]);
	}



}

