#include <stdio.h>

/*
 * This program demonstrates how to modify a[2] indirectly through a pointer p.
 * The value of a[2] is initially set to 1024, but is changed to 98
 * using a pointer.
 * The program prints the value of a[2] after the modification.
*/

int main(void);
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
	*(p + 7) = 98;
  /* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
