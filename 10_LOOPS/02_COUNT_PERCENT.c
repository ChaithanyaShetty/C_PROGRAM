/*2) Read the marks of n students and count how many of them scored above 80% and print the count.
  80 - 100        : Honours
  60 - 79         : First Division
  50 - 59         : Second Division
  40 - 49         : Third Division
  0 - 39          : Fail*/


#include<stdio.h>
int main()
{
	int n;
	printf("Enter value of n to read marks of n students");
	scanf("%d",&n);
	int i,count=0;
	for(i=0;i<n;i++)
	{
		int a,b,c,d,e,f;
		printf("\nStudent%d marks :",(i+1));
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		int per=(a+b+c+d+e+f)/6;
		switch(per)
		{
			case 80 ... 100: printf("\nHONORS");
					 count+=1;break;
			case 60 ... 79: printf("\nFirst Division");
					break;
			case 50 ... 59: printf("\nSecond Division");
					break;
			case 40 ... 49: printf("\nThird Division");
					break;
			default: printf("\nFAIL");
		}

	}

	printf("\nTotal no of students who scored above 80 are %d",count);
}
