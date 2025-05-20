/*6 declare different pointers with different data types.
  Print the sizes of the pointer variables using sizeof operator. 
  Why do u think all of them are giving same size irrespective of the data type ?*/

#include<stdio.h>
int main()
{
	int *p1;
	char *p2;
	float *p3;
	double *p4;

	printf("\nSIZE OF INT IS %zu\n",sizeof(p1));
	printf("\nSIZE OF CHAR IS %zu\n",sizeof(p2));
	printf("\nSIZE OF FLOAT IS %zu\n",sizeof(p3));
	printf("\nSIZE OF DOUBLE IS %zu\n",sizeof(p4));
}

/*EXPLANATION: A pointer stores a memory address, and the size of a memory address is fixed on a given system — typically 4 bytes on a 32-bit system or 8 bytes on a 64-bit system — regardless of what type it points to.

  If all pointer types have the same size, why do we still declare the data type?

  Even though all pointers have the same size, their data types are essential because:

  1. ✅ Pointer type tells the compiler how many bytes to access
  When you dereference a pointer (*p), the data type tells the compiler how many bytes to read or write.

Example:

int *p1;
char *p2;
 *p1 tells the compiler to read 4 bytes (assuming int is 4 bytes).

 *p2 tells the compiler to read 1 byte (since char is 1 byte).

 🔸 So, even though p1 and p2 are the same size (e.g., 8 bytes on a 64-bit system), they behave differently when accessing memory.





 2. ✅ Pointer arithmetic depends on the data type
 When you do pointer arithmetic like p + 1, the actual address it calculates depends on the type of pointer.

Example:

int *p1 = (int *)1000;
char *p2 = (char *)1000;

p1 = p1 + 1;  // now p1 points to address 1004 (if int is 4 bytes)
p2 = p2 + 1;  // now p2 points to address 1001 (char is 1 byte)
🔸 So +1 means different byte jumps depending on the pointer type.




3. ✅ Type safety and compiler checks
Declaring the pointer type helps the compiler catch type mismatch errors.

It ensures you don't accidentally assign, say, a float* to an int* without a cast.

Example:

int *p;
float *f;

p = f; // ❌ Compiler warning or error: incompatible pointer types


4. ✅ Clarity and maintainability
Using the correct pointer type makes your code more understandable.

It tells other programmers what kind of data is being pointed to.

🔚 Summary:
| Reason             | Importance                                |
| ------------------ | ----------------------------------------- |
| Memory access size | Tells how many bytes to read/write        |
| Pointer arithmetic | Ensures correct address calculation       |
| Type safety        | Prevents wrong assignments or conversions |
| Code clarity       | Makes the code easier to understand       |

 */
