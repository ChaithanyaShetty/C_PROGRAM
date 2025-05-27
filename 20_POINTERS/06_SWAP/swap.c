#include<stdio.h>
void SWAP(int *p1)
{
	int temp;
	temp=*p1;
	*p1=*(p1+1);
	*(p1+1)=temp;
}
