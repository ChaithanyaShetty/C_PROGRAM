/*5 "Write a function that communicates with main using a single static variable without taking any input arguments.
  Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.
  eg., print the square of each number of an array :
  for each number of the array :
  call the function
  main gets the static variable address as return value from function.
  main puts the array element in static variable.
  in the function :
  create static variable.
  if static variable value is not zero, print its square.
  function sends static variable address back to main."    */

#include<stdio.h>
void *FUN()
{
	static int a;
	if(a>0)
	{
		a=a*a;

		printf("%d ",a);
	}

	return &a;

}
int main()
{
	int a[5];
	int i;
	printf("ENTER ARRAY ELEMENTS: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		int *ptr=FUN();
		*ptr=a[i];
	}
	FUN();
}




/*
   | Iteration | Static `a` value before `FUN()` | Prints      | `a` after `*ptr = a[i]` |
   | --------- | ------------------------------- | ----------- | ----------------------- |
   | i = 0     | 0                               | *(Nothing)* | a = 1                   |
   | i = 1     | 1                               | 1           | a = 2                   |
   | i = 2     | 2                               | 4           | a = 3                   |
   | i = 3     | 3                               | 9           | a = 4                   |
   | i = 4     | 4                               | 16          | a = 5                   |

   Always processes the previous value in FUN().

   Then sets the next value from main.

   But the last value (5) gets stored, not squared yet.

   So we call FUN() one final time after the loop to process that.
 */
