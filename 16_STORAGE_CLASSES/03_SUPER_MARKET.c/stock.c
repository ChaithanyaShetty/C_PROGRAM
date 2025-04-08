#include<stdio.h>
#include<stdlib.h>
extern int stock;
int stockk()
{
	if(stock<=1000)
	{
		printf("Available stock is %d",stock);
	}
	return 0;
}
