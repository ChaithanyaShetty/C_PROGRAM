/*6) Find the HCF of 2 given numbers*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter values of a and b");
	scanf("%d %d",&a,&b);
	int x,y;
	x=a,y=b;
	for(;x!=y;)
	{
		if(x>y)
			x=x-y;
		else
			y=y-x;
	}
	printf("%d",x);
}
