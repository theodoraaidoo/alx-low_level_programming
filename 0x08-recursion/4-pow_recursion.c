#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base value
 * @y: the exponent value
 *
 * Return: the result of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* return -1 for invalid input */
	}
	else if (y == 0)
	{
		return (1); /* base case: x^0 = 1 */
	}
	else
	{
		/* recursive case */

		return (x * _pow_recursion(x, y - 1));
	}
}
