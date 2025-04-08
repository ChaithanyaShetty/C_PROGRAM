#include<stdio.h>
#include<stdlib.h>
int sell,m;
extern int stock;
int selll()
{
	printf("\nSell Quantity: ");
	scanf("%d",&sell);
	if(sell<=stock)
	{
		stock=stock-sell;
		printf("\n%d stock sold %d is available",sell,stock);
	}
	else
	{

		printf("\nStock Not Available. Only %d in stock.", stock);

	}
	return 0;
}
