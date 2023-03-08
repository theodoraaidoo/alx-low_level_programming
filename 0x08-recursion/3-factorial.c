#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number whose factorial is to be calculated
 *
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* return -1 for invalid input */
	}
	else if (n == 0)
	{
		return (1); /* base case: 0! = 1 */
	}
	else
	{
		/* recursive case */
		int result = n * factorial(n - 1);

		return (result);
	}
}
