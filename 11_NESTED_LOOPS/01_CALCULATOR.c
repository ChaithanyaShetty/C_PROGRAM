/*1) Read 6 subject marks of n students and count how many of them scored above 80% and print the count.*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter value of n :");
	scanf("%d",&n);
	int i,j,per=0,count=0;
	for(i=0;i<n;i++)
	{
		int a;
		printf("\nEnter marks of student%d  :",(i+1));
		int j;
		per=0;
		for(j=0;j<6;j++)
		{
			scanf("%d",&a);
			per+=a;
		}

		per=per/6;
		printf("\nPercent of student%d is : %d",(i+1),per);
		if(per>=80)
		{
			count+=1;
		}
		switch(per)
		{
			case 80 ... 100: printf("\nHONORS"); break;
			case 60 ... 79: printf("\n1st DIV"); break;
			case 50 ... 59: printf("\n2nd DIV");break;
			case 40 ... 49: printf("\n3rd DIV");break;
			default: printf("\nFAIL");
		}


	}

	printf("\nNo of students crossed 80 percent are %d",count);
}
