/*2 Write the following program :
Declare a character array without size.
Initialize the array with characters of your name.
Print your name using for loop.*/

#include<stdio.h>
int main()
{
	char a[]={'c','h','a','i','t','h','a','n','y','a'};

	int n=sizeof(a)/sizeof(a[0]);

	int i;
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
}
