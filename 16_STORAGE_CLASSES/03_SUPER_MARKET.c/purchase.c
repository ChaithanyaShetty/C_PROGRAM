#include<stdio.h>
#include<stdlib.h>
int purchase;
extern int stock;
int purchasee()
{
	printf("\nEnter purchase quantity: ");
	if(stock>=1000)
	{
		printf("\nNo space for new stock");
	}
	else
	{
		scanf("%d",&purchase);
		if(stock+purchase<=1000)
		{
			stock=stock+purchase;
			printf("After Purchasing Available stock is %d",stock);
		}
		else
		{
			printf("\nNo space for new stock Available stock is %d",stock);

		}
	}
	return 0;
}




