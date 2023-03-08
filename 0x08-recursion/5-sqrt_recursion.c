#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root is to be calculated
 *
 * Return: the natural square root of n,
 * or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* return -1 for invalid input */
	}
	else if (n == 0 || n == 1)
	{
		return (n); /* base case: square root of 0 or 1 is itself */
	}
	else
	{
		/* recursive case */
		int i;

		for (i = 1; i * i < n; i++)
		{
			/* do nothing */
		}

		if (i * i == n)
		{
			return (i); /* found the natural square root */
		}
		else
		{
			return (-1); /* no natural square root exists for n */
		}
	}
}
