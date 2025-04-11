/*Write a function to return the average of marks of all students in a class.*/

#include<stdio.h>
float AVG(int arr[],int n);
int main()
{
	int n;
	printf("Enter number of students");
	scanf("%d",&n);
	int arr[n];
	int i,marks;
	for(i=0;i<n;i++)
	{
		printf("enter marks of S%d: ",(i+1));
		scanf("%d",&marks);
		arr[i]=marks;
		marks=0;
	}

	float r=AVG(arr,n);
	printf("\nAVG MARKS OF ALL STUDENTS IN A CLASS IS %0.2f",r);
}

float AVG(int arr[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	float avg=(float)sum/n;

	return avg;
}

