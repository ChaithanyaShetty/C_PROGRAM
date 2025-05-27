/*3 Write a function that can rotate the values of three variables. 
  print the results in main function.*/

#include<stdio.h>
void ROTATE(int *p1,int *p2,int *p3)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=*p3;
	*p3=temp;
}
int main()
{
	int a,b,c;
	printf("Enter Values of a b and c: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("\nORIGINAL VALUES of a=%d b=%d and c=%d",a,b,c);
	int *p1,*p2,*p3;
	ROTATE(&a,&b,&c);
	printf("\nROTATED VALUES of a=%d b=%d and c=%d",a,b,c);
}
