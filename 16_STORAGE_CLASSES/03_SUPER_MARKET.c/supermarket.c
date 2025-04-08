#include<stdio.h>
int stock=1000;
int stockk();
int purchasee();
int selll();
int main()
{
	char ch= 'y';
	int choice;


	while(ch=='y')
	{
		printf("\nEnter your choice: ");
		printf("\n1 ) check AvailableStock");

		printf("\n2 ) Purchase new items");

		printf("\n3 ) Sell items");
		scanf("%d",&choice);
		if(choice==1)
		{
			stockk();

		}
		else if(choice==2)
		{
			purchasee();

		}
		else
		{
			selll();
		}


		printf("\nDo you want to continue(y/n)");
		scanf(" %c",&ch);
	}

}



