/*2) Read m subject marks of n students ( take number of subjects as input for every student, and accordingly read the marks and calculate percentage ) and print who is the topper.*/
#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter value of n :");
	scanf("%d",&n);
	int i,j,per=0,count=0,TOP=0,TOP_ID=0;
	for(i=0;i<n;i++)
	{
		int a;

		printf("\nEnter how many subjects for student%d :",(i+1));

		scanf("%d",&m);
		printf("\n   Student%d Marks: ",(i+1));
		per=0;

		for(j=0;j<m;j++)
		{
			scanf("%d",&a);
			per+=a;
		}

		per=per/m;
		if(per>TOP)
		{
			TOP=per;
			TOP_ID=i+1;
		}

		printf("\nPercent of student%d is : %d",(i+1),per);

		switch(per)
		{
			case 80 ... 100: printf("\nHONORS"); count++;break;
			case 60 ... 79: printf("\n1st DIV"); break;
			case 50 ... 59: printf("\n2nd DIV");break;
			case 40 ... 49: printf("\n3rd DIV");break;
			default: printf("\nFAIL");
		}


	}

	printf("\nNo of students crossed 80 percent are %d",count);
	printf("\nClass Topper is STUDENT%d",TOP_ID);
}
