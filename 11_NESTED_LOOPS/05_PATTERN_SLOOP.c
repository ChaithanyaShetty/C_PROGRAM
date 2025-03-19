
/* 5) Print the below pattern without using nested loops

*
* *
* * *
* * * *
* * * * *

*/


#include <stdio.h>

int main() {
	int i = 1, j = 1, a = 5, count = 1;

	while (i <= a * 3) 
	{  
		printf("* ");
		if (i == count) 
		{  
			printf("\n");
			count += (++j); 
		}
		i++;
	}

	return 0;
}

