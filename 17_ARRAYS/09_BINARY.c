//9 Write a program to print an integer in binary format using arrays.

#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number fo print its binary: ");
	scanf("%d",&n);
	int a[32];
	int i,c;
	for(i=0;n>0;i++)
	{
		c=n%2;
		a[i]=c;
		n=n/2;

	}
	printf("\nI value is %d\n",i);    
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
